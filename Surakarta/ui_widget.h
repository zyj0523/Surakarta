/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H
//#include "surakarta_common.h"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QMessageBox>
#include <QString>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        pushButton = new QPushButton(Widget);
        pushButton2 = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton2->setObjectName("pushButton2");

        pushButton->setGeometry(QRect(650, 510, 92, 28));
        pushButton2->setGeometry(QRect(650, 470, 92, 28));

        retranslateUi(Widget);
        QObject::connect(pushButton, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));
        QObject::connect(pushButton2, &QPushButton::clicked, &Ui_Widget::resign);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi



    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        pushButton2->setText(QCoreApplication::translate("Widget", "认输", nullptr));
    } // retranslateUi

    static void resign(){
        QMessageBox msgBox;
        msgBox.setWindowTitle("GAME OVER");
        msgBox.setText("The game is over!");
        msgBox.addButton(QMessageBox::Ok);
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }



    /*unsigned int board_size_;
    std::shared_ptr<SurakartaBoard> board_;
    std::shared_ptr<SurakartaGameInfo> game_info_;*/
    //std::shared_ptr<SurakartaRuleManager> rule_manager_;


};






namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui



QT_END_NAMESPACE

#endif // UI_WIDGET_H
