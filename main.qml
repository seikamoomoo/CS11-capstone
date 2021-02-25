import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Dialogs 1.0
import QtQuick.Controls 2.12
import QtQuick.Controls.Styles 1.4

Window {
    width: 775
    height: 550
    visible: true
    title: qsTr("Auto-Scanner Software alpha")
    color: "#9882ac"

    property var names: QtObject { property var pathName: "C:/.."}
    property var textColor: "#0c0910"
    property var buttonColor: "#453750"


//Begin skeleton


    Text{
        x: 20
        y: 20

        text: "Auto-Scanner Software alpha"
        font.family: "Helvetica"
        font.pointSize: 30
        color: textColor
        font.bold: true
//        font.bold = true
//        font.italic = true
    }

    Button {
            x: 50
            y: 100
            text: "Select a file..."
            onClicked: fileDialog.open()

    }

    Text {
        x: 50
        y: 150
        text: names.pathName
        font.family: "Helvetica"
        font.pointSize: 8
    }

    Column {
        x: 50
        y: 200
        width: 275



        Text{
            text: "Settings"
            font.pointSize: 14
            color: textColor
            font.family: "Helvetica"

        }
        ComboBox {
            width: 200
            font.family: "Helvetica"
            model: [ "Mesh Quality...","High", "Medium", "Low" ]
        }
        CheckBox {
            width: 250
            font.family: "Helvetica"
            text: qsTr("Start with default Unreal Settings")
        }
        CheckBox {
            width: 275
            font.family: "Helvetica"
            text: qsTr("Start Walking in Unreal")
        }
        CheckBox {
            width: 250
            font.family: "Helvetica"
            text: qsTr("Manually edit PointCloud")
        }
    }

    Button{
        x: 400
        y: 210
        height: 200
        width: 200
        text: "Begin Meshing!"
        //ButtonStyle
    }




//Properties
    FileDialog {
        id: fileDialog
        title: "Please choose a file"
        folder: shortcuts.home
        onAccepted: {
            console.log("You chose: " + fileDialog.fileUrls)
            fileDialog.close()
            names.pathName = String(fileDialog.fileUrls)
        }
        onRejected: {
            console.log("Canceled")
            fileDialog.close()
        }

    }

    ButtonStyle {
      id: buttonstyle1
      Rectangle{
          color: "green"
      }
    }
}


