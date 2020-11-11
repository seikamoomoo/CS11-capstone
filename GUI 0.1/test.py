
from PyQt5 import QtCore, QtGui, QtWidgets
import cv2, PySimpleGUI as sg


class Ui_Dialog(object):
    def setupUi(self, Dialog):
        Dialog.setObjectName("Dialog")
        Dialog.resize(717, 566)
        self.frame = QtWidgets.QFrame(Dialog)
        self.frame.setGeometry(QtCore.QRect(130, 10, 491, 461))
        self.frame.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame.setObjectName("frame")
        self.pushButton = QtWidgets.QPushButton(Dialog)
        self.pushButton.setGeometry(QtCore.QRect(120, 490, 111, 51))
        self.pushButton.setObjectName("pushButton")
        self.pushButton.clicked.connect(self.capCamera)
        self.pushButton_2 = QtWidgets.QPushButton(Dialog)
        self.pushButton_2.setGeometry(QtCore.QRect(320, 490, 111, 51))
        self.pushButton_2.setObjectName("pushButton_2")
        self.pushButton_3 = QtWidgets.QPushButton(Dialog)
        self.pushButton_3.setGeometry(QtCore.QRect(500, 490, 111, 51))
        self.pushButton_3.setObjectName("pushButton_3")
        self.pushButton.clicked.connect(self.exitButton)
        self.pushButton_4 = QtWidgets.QPushButton(Dialog)
        self.pushButton_4.setGeometry(QtCore.QRect(0, 10, 121, 91))
        self.pushButton_4.setObjectName("pushButton_4")

        self.retranslateUi(Dialog)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Dialog"))
        self.pushButton.setText(_translate("Dialog", "Connect webcam"))
        self.pushButton_2.setText(_translate("Dialog", "Take a screenshot"))
        self.pushButton_3.setText(_translate("Dialog", "Exit"))
        self.pushButton_4.setText(_translate("Dialog", "Settings"))

    def capCamera(self, Dialog):
        window, cap = sg.Window('camera output',[[sg.Image(filename='', key='image')],], location=(717,566)), cv2.VideoCapture(0)
        while window(timeout=20)[0] is not None:
            window['image'](data=cv2.imencode('.png', cap.read()[1])[1].tobytes())

    def exitButton(self, Dialog):
        exit() 

if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    Dialog = QtWidgets.QDialog()
    ui = Ui_Dialog()
    ui.setupUi(Dialog)
    Dialog.show()
    sys.exit(app.exec_())
