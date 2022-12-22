/********************************************************************************
** Form generated from reading UI file 'signmateUQHsyz.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SIGNMATEUQHSYZ_H
#define SIGNMATEUQHSYZ_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignMateClass
{
public:
    QTabWidget *tabWidget;
    QWidget *home_tab;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_28;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_29;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_30;
    QLabel *label_6;
    QWidget *play_tab;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_25;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_26;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QWidget *learn_tab;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_23;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_24;
    QLabel *label_5;
    QWidget *settings_tab;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_8;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer_9;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_6;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QWidget *SignMateClass)
    {
        if (SignMateClass->objectName().isEmpty())
            SignMateClass->setObjectName("SignMateClass");
        SignMateClass->resize(602, 448);
        tabWidget = new QTabWidget(SignMateClass);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-10, 0, 651, 491));
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(50, 39));
        home_tab = new QWidget();
        home_tab->setObjectName("home_tab");
        layoutWidget_8 = new QWidget(home_tab);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(0, 0, 611, 60));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_27);

        label_11 = new QLabel(layoutWidget_8);
        label_11->setObjectName("label_11");
        QFont font1;
        font1.setPointSize(32);
        font1.setBold(true);
        label_11->setFont(font1);

        horizontalLayout_11->addWidget(label_11);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_28);

        layoutWidget_9 = new QWidget(home_tab);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(0, 170, 611, 45));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_29);

        label_12 = new QLabel(layoutWidget_9);
        label_12->setObjectName("label_12");
        QFont font2;
        font2.setPointSize(17);
        font2.setBold(false);
        label_12->setFont(font2);

        horizontalLayout_12->addWidget(label_12);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_30);

        label_6 = new QLabel(home_tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 70, 581, 71));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../images/ASL_Sign.JPG")));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/homeIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(home_tab, icon, QString());
        play_tab = new QWidget();
        play_tab->setObjectName("play_tab");
        layoutWidget_7 = new QWidget(play_tab);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(0, 0, 611, 45));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_25);

        label_10 = new QLabel(layoutWidget_7);
        label_10->setObjectName("label_10");
        QFont font3;
        font3.setPointSize(24);
        font3.setBold(true);
        label_10->setFont(font3);

        horizontalLayout_10->addWidget(label_10);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_26);

        pushButton = new QPushButton(play_tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 340, 81, 41));
        QFont font4;
        font4.setPointSize(2);
        pushButton->setFont(font4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/videoOnIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(40, 40));
        pushButton_2 = new QPushButton(play_tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(370, 340, 81, 41));
        pushButton_2->setFont(font4);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../images/camerOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(50, 40));
        label_7 = new QLabel(play_tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 50, 471, 281));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../images/background.png")));
        label_7->setScaledContents(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../images/playIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(play_tab, icon3, QString());
        learn_tab = new QWidget();
        learn_tab->setObjectName("learn_tab");
        layoutWidget_6 = new QWidget(learn_tab);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(0, 0, 641, 45));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_23);

        label_9 = new QLabel(layoutWidget_6);
        label_9->setObjectName("label_9");
        label_9->setFont(font3);

        horizontalLayout_9->addWidget(label_9);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_24);

        label_5 = new QLabel(learn_tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 40, 571, 361));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../images/ASL_Alpha.JPG")));
        label_5->setScaledContents(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../images/learnIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(learn_tab, icon4, QString());
        settings_tab = new QWidget();
        settings_tab->setObjectName("settings_tab");
        layoutWidget_2 = new QWidget(settings_tab);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(11, 190, 461, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");
        QFont font5;
        font5.setPointSize(14);
        label_3->setFont(font5);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_8 = new QSpacerItem(60, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        lcdNumber = new QLCDNumber(layoutWidget_2);
        lcdNumber->setObjectName("lcdNumber");

        horizontalLayout_3->addWidget(lcdNumber);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        layoutWidget = new QWidget(settings_tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(12, 72, 462, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font5);

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font5);

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(settings_tab);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 130, 461, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font5);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setFont(font5);
        comboBox->setIconSize(QSize(30, 16));

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        layoutWidget2 = new QWidget(settings_tab);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 10, 611, 45));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../images/settingIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(settings_tab, icon5, QString());

        retranslateUi(SignMateClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SignMateClass);
    } // setupUi

    void retranslateUi(QWidget *SignMateClass)
    {
        SignMateClass->setWindowTitle(QCoreApplication::translate("SignMateClass", "SignMate - Home", nullptr));
        label_11->setText(QCoreApplication::translate("SignMateClass", "Sign Mate", nullptr));
        label_12->setText(QCoreApplication::translate("SignMateClass", "Your Personal ASL Study Buddy", nullptr));
        label_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(home_tab), QString());
        label_10->setText(QCoreApplication::translate("SignMateClass", "Play", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(play_tab), QString());
        label_9->setText(QCoreApplication::translate("SignMateClass", "Learn", nullptr));
        label_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(learn_tab), QString());
        label_3->setText(QCoreApplication::translate("SignMateClass", "Score", nullptr));
        label->setText(QCoreApplication::translate("SignMateClass", "User Name", nullptr));
        label_2->setText(QCoreApplication::translate("SignMateClass", "Difficulty", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SignMateClass", "Easy", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SignMateClass", "Medium", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("SignMateClass", "Hard", nullptr));

        label_4->setText(QCoreApplication::translate("SignMateClass", "Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(settings_tab), QString());
    } // retranslateUi

};

namespace Ui {
    class SignMateClass: public Ui_SignMateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SIGNMATEUQHSYZ_H
