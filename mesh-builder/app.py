import sys
import os
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
import os
import sys

SCRIPT_NAME = "metashape_script.py"
METASHAPE_PATH = sys.argv[1]
#METASHAPE_PATH = "/Applications/MetashapePro.app/Contents/MacOS/MetashapePro"






class MainBackgroundThread(QThread):
    def __init__(self, keyword, sector):
        QThread.__init__(self)
        self.keyword, self.sector = keyword, sector
    def run(self):
        main(self.keyword, self.sector)







class App(QWidget):

    def __init__(self):
        super().__init__()
        self.title = '3D Mesh Builder'
        self.left = 100
        self.top = 100
        self.width = 300
        self.height = 300
        self.initUI()

    def initUI(self):

        layout = QVBoxLayout()
        self.setLayout(layout)

        self.setWindowTitle(self.title)
        self.setGeometry(self.left, self.top, self.width, self.height)

        # Create textbox

        self.name = QLabel()
        self.name.setText("Convert point cloud to mesh")
        layout.addWidget(self.name)


        self.filename = QLabel()
        self.filename.setText("C:\...")
        layout.addWidget(self.filename)

        self.files = QPushButton('Choose a point cloud', self)
        layout.addWidget(self.files)

        self.qua = QLabel()
        self.qua.setText("Face Count")
        layout.addWidget(self.qua)

        self.comboBox = QComboBox()
        self.comboBox.addItem("250,000")
        self.comboBox.addItem("1,250,000")
        self.comboBox.addItem("6,250,000")
        layout.addWidget(self.comboBox)


        self.meah = QLabel()
        self.meah.setText("Project Name")
        layout.addWidget(self.meah)

        self.textbox = QLineEdit(self)
        layout.addWidget(self.textbox)
        # Create a button in the window

        self.button = QPushButton('Build mesh!', self)
        layout.addWidget(self.button)


        # self.loadingbox = msg_wait()
        # self.loadingbox.setStandardButtons(QMessageBox.Cancel)
        # self.loadingbox.close()
        # connect button to function on_click
        self.label = QLabel()
        self.label.setGeometry(QtCore.QRect(25, 25, 200, 200))
        self.label.setMinimumSize(QtCore.QSize(250, 250))
        self.label.setMaximumSize(QtCore.QSize(250, 250))
        self.label.setObjectName("lb1")

        self.movie = QMovie("loading.gif")
        self.label.setMovie(self.movie)

        self.startAnimation()

        layout.addWidget(self.label)
        self.label.setHidden(True)

        self.button.clicked.connect(self.on_click)

        # self.msg=msg_wait()
        # self.msg.setStandardButtons(QMessageBox.Cancel)



        self.files.clicked.connect(self.getfile)

        self.show()




    def startAnimation(self):
        self.movie.start()

    # Stop Animation(According to need)
    def stopAnimation(self):
        self.movie.stop()

    def msg_wait(self):
        msg = QMessageBox()
        # create Label
        msg.setIconPixmap(QPixmap('loading.gif').scaledToWidth(200))
        icon_label = msg.findChild(QLabel, "qt_msgboxex_icon_label")
        movie = QMovie('loading.gif')
        # avoid garbage collector
        setattr(msg, 'icon_label', movie)
        icon_label.setMovie(movie)
        movie.start()

        msg.setText("loading, please wait")
        msg.setWindowTitle(" ")
        msg.setModal(False)
        # msg.setStandardButtons(QMessageBox.Ok)
        msg.show()
        return msg





    @pyqtSlot()
    def on_click(self):
        file_path = self.filename.text()
        face_count = self.comboBox.currentText()
        project_name = self.textbox.text()



        msg=self.msg_wait()

        message = QMessageBox.question(self,
                             'Message - pythonspot.com', "Point Cloud: " + file_path + "\nFace Count: " + face_count + "\nProject Name: " + project_name,
                             QMessageBox.Ok, QMessageBox.Ok
                             )
        # self.textbox.setText("")
        # self.loadingbox.show()
        #self.label.setHidden(False)

        os.system(f"{METASHAPE_PATH} -r {SCRIPT_NAME} {self.textbox.text()} {self.filename.text()} {self.comboBox.currentText()}")


        #self.label.setHidden(True)

    def getfile(self):
        fname = QFileDialog.getOpenFileName()
        self.filename.setText(str(fname[0]))

app = None

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = App()


    # ex.move(0, 0)
    # ex.resizescreen()



    sys.exit(app.exec_())
