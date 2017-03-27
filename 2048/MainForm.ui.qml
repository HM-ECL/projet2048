import QtQuick 2.6

Rectangle {
    id: ecran

    width: 600
    height: 800

    Item {
        id: item1
        x: 0
        y: 0
        width: 600
        height: 800


        Rectangle {
            id: grille
            x: 161
            y: 290
            width: 400
            height: 400
            color: "#000000"
            radius: 5
            border.color: "#676161"
            anchors.horizontalCenter: parent.horizontalCenter
            border.width: 5
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 100
            anchors.horizontalCenterOffset: 2
            focus: true

            Keys.onPressed: {
              switch (event.key) {
                case Qt.Key_Up:
                  toto.haut()
                  console.log(toto.liste);
                  break;
                case Qt.Key_Down:
                  toto.bas();
                  console.log(toto.liste);
                  break;
                case Qt.Key_Right:
                    toto.droite();
                    console.log(toto.liste);
                    break;
                case Qt.Key_Left:
                    toto.gauche();
                    console.log(toto.liste);
                    break;
              }
            }

            Rectangle {
                id: r0
                width: 100
                height: 100
                color: toto.couleurs[0]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 0
                anchors.topMargin: 0
                border.width: 2
                Text{
                    id: g0
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    color: toto.couleurtext[0]
                    text: toto.liste[0]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r1
                x: 6
                y: -5
                width: 100
                height: 100
                color: toto.couleurs[1]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 100
                anchors.topMargin: 0
                border.width: 2
                Text{
                    id: g1
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[1]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[1]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r2
                x: 6
                width: 100
                height: 100
                color: toto.couleurs[2]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.topMargin: 0
                border.width: 2
                anchors.right: parent.right
                anchors.rightMargin: 100
                Text{
                    id: g2
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[2]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.horizontalCenterOffset: 0
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[2]
                }
            }

            Rectangle {
                id: r3
                x: 3
                width: 100
                height: 100
                color: toto.couleurs[3]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.topMargin: 0
                border.width: 2
                anchors.right: parent.right
                anchors.rightMargin: 0
                Text{
                    id: g3
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[3]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[3]
                }
            }

            Rectangle {
                id: r4
                x: 3
                y: 0
                width: 100
                height: 100
                color: toto.couleurs[4]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 0
                anchors.topMargin: 100
                border.width: 2
                Text{
                    id: g4
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[4]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[4]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r5
                x: -9
                y: -8
                width: 100
                height: 100
                color: toto.couleurs[5]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 100
                anchors.topMargin: 100
                border.width: 2
                Text{
                    id: g5
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[5]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[5]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r6
                x: -9
                y: 7
                width: 100
                height: 100
                color: toto.couleurs[6]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 200
                anchors.topMargin: 100
                border.width: 2
                Text {
                    id: g6
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[6]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[6]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r7
                x: 0
                y: 2
                width: 100
                height: 100
                color: toto.couleurs[7]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 300
                anchors.topMargin: 100
                border.width: 2
                Text{
                    id: g7
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[7]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[7]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r8
                x: 5
                y: -6
                width: 100
                height: 100
                color: toto.couleurs[8]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 0
                anchors.topMargin: 200
                border.width: 2
                Text{
                    id: g8
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[8]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[8]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r9
                x: -4
                y: 3
                width: 100
                height: 100
                color: toto.couleurs[9]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 100
                anchors.topMargin: 200
                border.width: 2
                Text{
                    id: g9
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[9]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[9]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r10
                x: -3
                y: -8
                width: 100
                height: 100
                color: toto.couleurs[10]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 200
                anchors.topMargin: 200
                border.width: 2
                Text{
                    id: g10
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[10]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[10]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r11
                x: -8
                y: 5
                width: 100
                height: 100
                color: toto.couleurs[11]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 300
                anchors.topMargin: 200
                border.width: 2
                Text {
                    id: g11
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[11]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[11]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r12
                x: -5
                y: -2
                width: 100
                height: 100
                color: toto.couleurs[12]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 0
                anchors.topMargin: 300
                border.width: 2
                Text{
                    id: g12
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[12]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[12]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r13
                x: -9
                y: 4
                width: 100
                height: 100
                color: toto.couleurs[13]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 100
                anchors.topMargin: 300
                border.width: 2
                Text{
                    id: g13
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[13]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[13]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r14
                x: 2
                y: 9
                width: 100
                height: 100
                color: toto.couleurs[14]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 200
                anchors.topMargin: 300
                border.width: 2
                Text{
                    id: g14
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[14]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[14]
                }
                anchors.left: parent.left
            }

            Rectangle {
                id: r15
                x: 7
                y: 9
                width: 100
                height: 100
                color: toto.couleurs[15]
                radius: 5
                anchors.top: parent.top
                border.color: "#505050"
                anchors.leftMargin: 300
                anchors.topMargin: 300
                border.width: 2
                Text{
                    id: g15
                    x: 12
                    y: 40
                    width: 80
                    height: 20
                    text: toto.liste[15]
                    horizontalAlignment: Text.AlignHCenter
                    font.letterSpacing: -2
                    font.pixelSize: 23
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.family: "Verdana"
                    anchors.verticalCenter: parent.verticalCenter
                    color: toto.couleurtext[15]
                }
                anchors.left: parent.left
            }
        }

        Text {
            id: titre
            x: 100
            y: 100
            width: 171
            height: 77
            color: "#808080"
            text: qsTr("2048")
            horizontalAlignment: Text.AlignHCenter
            font.letterSpacing: 5
            enabled: false
            font.pixelSize: 50
        }

        Item {
            id: reset
            x: 450
            y: 175
            width: 50
            height: 50

            MouseArea {
                id: mouseArea
                x: 0
                y: 0
                width: 50
                height: 50

                onClicked: {
                    toto.Init();
                }

                Image {
                    id: image
                    x: 0
                    y: 0
                    width: 50
                    height: 50
                    source: "reset.jpg"
                }
            }
        }

        Text {
            id: score
            x: 425
            y: 100
            width: 100
            height: 50
            text: toto.scor
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 20
        }

        Text {
            id: perdu
            x: 195
            y: 218
            width: 219
            height: 50
            text: toto.texteperdu
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 20
        }
    }
}
