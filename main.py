import sys
import os
import subprocess
from PyQt5.QtWidgets import *
from PyQt5.QtGui import *
from PyQt5.QtCore import *

#from metashape_plugin.py import *

class App(QWidget):

    def __init__(self):
        super().__init__()
        self.title = '3D Scanner Application'
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
        self.name.setText("3D Scanner Application")
        layout.addWidget(self.name)


        self.filename = QLabel()
        self.filename.setText("C:\...")
        layout.addWidget(self.filename)

        self.files = QPushButton('Choose a file', self)
        layout.addWidget(self.files)

        self.qua = QLabel()
        self.qua.setText("Mesh Quality")
        layout.addWidget(self.qua)

        self.comboBox = QComboBox()
        self.comboBox.addItem("High")
        self.comboBox.addItem("Medium")
        self.comboBox.addItem("low")
        layout.addWidget(self.comboBox)


        self.meah = QLabel()
        self.meah.setText("Mesh Name")
        layout.addWidget(self.meah)

        self.textbox = QLineEdit(self)
        layout.addWidget(self.textbox)
        # Create a button in the window

        self.button = QPushButton('Begin Scanning!', self)
        layout.addWidget(self.button)


        self.button1 = QPushButton('Launch Unreal Engine Demo', self)
        layout.addWidget(self.button1)
        

        # connect button to function on_click
        self.button.clicked.connect(self.on_click)
        self.button1.clicked.connect(self.launchDemo)

        self.files.clicked.connect(self.getfile)

        self.show()

    @pyqtSlot()
    def on_click(self):
        textboxValue = self.filename.text()
        QMessageBox.question(self, 'Message - pythonspot.com', "file computing: " + textboxValue + "\nQuality chosen: " + self.comboBox.currentText() + "\nName: " + self.textbox.text(), QMessageBox.Ok, QMessageBox.Ok)
        self.textbox.setText("")
        #REPLACE ABOVE WITH THIS WHEN READY TO INTEGRATE
        #mesh_function(textboxValue, self.comboBox.currentText(), self.textbox.text())

    def getfile(self):
        fname = QFileDialog.getOpenFileName()
        self.filename.setText(str(fname[0]))

    def launchDemo(self):
        command = r"C:\Users\15032\Documents\GitHub\CS11-capstone\UnrealDemo\FBXImportDemo.exe"
        os.system(command)
    

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = App()
    sys.exit(app.exec_())
