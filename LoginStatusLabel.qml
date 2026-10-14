import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id: loginStatusLabel
    width: 616
    height: 40

    property string message: ""
    property string mode: "error"
    property int currentIndex: 0
    property color textColor: "green"

    Row {
        id: row
        anchors.centerIn: parent
        spacing: 1

        Repeater {
            id: repeater
            model: loginStatusLabel.message.length

            Text {
                text: loginStatusLabel.message[index]
                font.pixelSize: 12
                color: loginStatusLabel.textColor

                transform: Translate { id: letterTranslate; y: 0 }
            }
        }
    }

    onMessageChanged: {
        shakeLabel.restart();
    }


    SequentialAnimation {
        id: shakeLabel
        running: mode === "error"
        loops: 1

        NumberAnimation { target: row; property: "anchors.horizontalCenterOffset"; from: 0; to: -10; duration: 50 }
        NumberAnimation { target: row; property: "anchors.horizontalCenterOffset"; from: -10; to: 10; duration: 50 }
        NumberAnimation { target: row; property: "anchors.horizontalCenterOffset"; from: 10; to: -10; duration: 50 }
        NumberAnimation { target: row; property: "anchors.horizontalCenterOffset"; from: -10; to: 10; duration: 50 }
        NumberAnimation { target: row; property: "anchors.horizontalCenterOffset"; from: 10; to: 0; duration: 50 }
    }
}