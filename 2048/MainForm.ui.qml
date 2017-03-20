import QtQuick 2.6

Rectangle {
    id: ecran

    width: 600
    height: 800

    Rectangle {
        id: grille
        x: 161
        y: 290
        width: 400
        height: 400
        color: "#00000000"
        radius: 5
        border.width: 5
        border.color: "#676161"
        anchors.horizontalCenterOffset: 2
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 100
        anchors.horizontalCenter: parent.horizontalCenter

        Rectangle {
            id: r0
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.left: parent.left
            anchors.leftMargin: 0
            anchors.top: parent.top
            anchors.topMargin: 0
            border.color: "#505050"
            border.width: 2

            TextEdit {
                id: g0
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                font.family: "Verdana"
                horizontalAlignment: Text.AlignHCenter
                anchors.verticalCenter: parent.verticalCenter
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 23
            }
        }

        Rectangle {
            id: r1
            x: 6
            y: -5
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 100
            TextEdit {
                id: g1
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 0
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r2
            x: 6
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.right: parent.right
            anchors.rightMargin: 100
            anchors.top: parent.top
            anchors.topMargin: 0
            TextEdit {
                id: g2
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                anchors.horizontalCenterOffset: 0
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            border.width: 2
            border.color: "#505050"
        }

        Rectangle {
            id: r3
            x: 3
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.top: parent.top
            anchors.topMargin: 0
            anchors.right: parent.right
            anchors.rightMargin: 0
            TextEdit {
                id: g3
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            border.width: 2
            border.color: "#505050"
        }

        Rectangle {
            id: r4
            x: 3
            y: 0
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 0
            TextEdit {
                id: g4
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 100
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r5
            x: -9
            y: -8
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 100
            TextEdit {
                id: g5
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 100
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r6
            x: -9
            y: 7
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 200
            TextEdit {
                id: g6
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 100
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r7
            x: 0
            y: 2
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 300
            TextEdit {
                id: g7
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 100
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r8
            x: 5
            y: -6
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 0
            TextEdit {
                id: g8
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 200
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r9
            x: -4
            y: 3
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 100
            TextEdit {
                id: g9
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 200
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r10
            x: -3
            y: -8
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 200
            TextEdit {
                id: g10
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 200
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r11
            x: -8
            y: 5
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 300
            TextEdit {
                id: g11
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 200
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r12
            x: -5
            y: -2
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 0
            TextEdit {
                id: g12
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 300
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r13
            x: -9
            y: 4
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 100
            TextEdit {
                id: g13
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 300
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r14
            x: 2
            y: 9
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 200
            TextEdit {
                id: g14
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 300
            border.color: "#505050"
            anchors.top: parent.top
        }

        Rectangle {
            id: r15
            x: 7
            y: 9
            width: 100
            height: 100
            color: "#d6d6d6"
            radius: 5
            anchors.leftMargin: 300
            TextEdit {
                id: g15
                x: 12
                y: 40
                width: 80
                height: 20
                text: qsTr("")
                font.letterSpacing: -2
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 23
                horizontalAlignment: Text.AlignHCenter
                font.family: "Verdana"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            anchors.left: parent.left
            border.width: 2
            anchors.topMargin: 300
            border.color: "#505050"
            anchors.top: parent.top
        }
    }

    TextEdit {
        id: titre
        x: 100
        y: 100
        width: 171
        height: 77
        color: "#808080"
        text: qsTr("2048")
        enabled: false
        activeFocusOnPress: false
        font.letterSpacing: 5
        selectionColor: "#b1eba2"
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 50
    }

    Item {
        id: reset
        x: 450
        y: 175
        width: 50
        height: 50

        Image {
            id: image
            anchors.fill: parent
            source: "reset.png"
        }
    }

    Text {
        id: score
        x: 425
        y: 100
        width: 100
        height: 50
        text: qsTr("")
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 20
    }
/*
    Keys.onPressed: {
      switch (event.key) {
        case Qt.Key_Up:
          vueObjetCpt.haut();
          break;
        case Qt.Key_Down:
          vueObjetCpt.bas();
          break;
        case Qt.Key_Right:
          vueObjetCpt.droite();
          break;
        case Qt.Key_Left:
          vueObjetCpt.gauche();
          break;
      }
    }
*/
}
