/********************************************************************************
** Form generated from reading UI file 'Simple CalculatorZwdlfj.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SIMPLE_20_CALCULATORZWDLFJ_H
#define SIMPLE_20_CALCULATORZWDLFJ_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_add;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_del;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(515, 582);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/_calculator_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(7);
        gridLayout->setVerticalSpacing(20);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_1->setFont(font1);

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setFont(font1);

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setFont(font1);

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setFont(font1);

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName(QStringLiteral("pushButton_sub"));
        sizePolicy2.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy2);
        pushButton_sub->setFont(font1);

        gridLayout->addWidget(pushButton_sub, 2, 3, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setFont(font1);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setFont(font1);

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QStringLiteral("pushButton_AC"));
        sizePolicy2.setHeightForWidth(pushButton_AC->sizePolicy().hasHeightForWidth());
        pushButton_AC->setSizePolicy(sizePolicy2);
        pushButton_AC->setFont(font1);

        gridLayout->addWidget(pushButton_AC, 0, 3, 1, 1);

        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        sizePolicy2.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy2);
        pushButton_add->setFont(font1);

        gridLayout->addWidget(pushButton_add, 1, 3, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setFont(font1);

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setFont(font1);

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy3);
        pushButton_0->setFont(font1);

        gridLayout->addWidget(pushButton_0, 3, 0, 1, 2);

        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        sizePolicy3.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy3);
        pushButton_equal->setFont(font1);
        pushButton_equal->setCheckable(true);

        gridLayout->addWidget(pushButton_equal, 3, 3, 1, 1);

        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        sizePolicy3.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_dot->setFont(font2);

        gridLayout->addWidget(pushButton_dot, 3, 2, 1, 1);

        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));
        sizePolicy3.setHeightForWidth(pushButton_del->sizePolicy().hasHeightForWidth());
        pushButton_del->setSizePolicy(sizePolicy3);
        pushButton_del->setFont(font1);

        gridLayout->addWidget(pushButton_del, 0, 4, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 5);

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 515, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);
        menuFile->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(pushButton_AC, SIGNAL(clicked()), label, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QString());
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_sub->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Subtract Numbers</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_sub->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_AC->setText(QApplication::translate("MainWindow", "AC", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_add->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Add numbers</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_add->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_del->setText(QApplication::translate("MainWindow", "DEL", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SIMPLE_20_CALCULATORZWDLFJ_H
