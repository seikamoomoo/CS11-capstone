import sys
import os
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.QtCore import *

SCRIPT_NAME = "metashape_no_tex.py"
METASHAPE_PATH = "/Applications/MetashapePro.app/Contents/MacOS/MetashapePro"

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

        # connect button to function on_click
        self.button.clicked.connect(self.on_click)

        self.files.clicked.connect(self.getfile)

        self.show()

    @pyqtSlot()
    def on_click(self):
        file_path = self.filename.text()
        face_count = self.comboBox.currentText()
        project_name = self.textbox.text()

        QMessageBox.question(self,
                             'Message - pythonspot.com', "Point Cloud: " + file_path + "\nFace Count: " + face_count + "\nProject Name: " + project_name,
                             QMessageBox.Ok, QMessageBox.Ok
                             )
        # self.textbox.setText("")
        # REPLACE ABOVE WITH THIS WHEN READY TO INTEGRATE
        # mesh_function(project_name, file_path, face_count)
        os.system(f"{METASHAPE_PATH} -r {SCRIPT_NAME} {self.textbox.text()} {self.filename.text()} {self.comboBox.currentText()}")

    def getfile(self):
        fname = QFileDialog.getOpenFileName()
        self.filename.setText(str(fname[0]))

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = App()
    sys.exit(app.exec_())
