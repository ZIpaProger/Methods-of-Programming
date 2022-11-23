/********************************************************************************
** Form generated from reading UI file 'xando.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XANDO_H
#define UI_XANDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XandO
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *X_O;
    QPushButton *statWindow;
    QHBoxLayout *horizontalLayout;
    QPushButton *X;
    QPushButton *O;
    QPushButton *Play;
    QPushButton *Info;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *PLAY;
    QGridLayout *gridLayout_2;
    QWidget *tab1;
    QGridLayout *gridLayout;
    QPushButton *num3;
    QPushButton *num5;
    QPushButton *num8;
    QPushButton *num4;
    QPushButton *num9;
    QPushButton *num7;
    QPushButton *num1;
    QPushButton *num2;
    QPushButton *num6;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;

    void setupUi(QWidget *XandO)
    {
        if (XandO->objectName().isEmpty())
            XandO->setObjectName(QStringLiteral("XandO"));
        XandO->resize(925, 495);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XandO->sizePolicy().hasHeightForWidth());
        XandO->setSizePolicy(sizePolicy);
        XandO->setMinimumSize(QSize(925, 495));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icoprog.png"), QSize(), QIcon::Normal, QIcon::Off);
        XandO->setWindowIcon(icon);
        XandO->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(XandO);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        X_O = new QLabel(XandO);
        X_O->setObjectName(QStringLiteral("X_O"));
        X_O->setMinimumSize(QSize(0, 0));
        X_O->setMaximumSize(QSize(16777215, 80));
        QFont font;
        font.setPointSize(28);
        X_O->setFont(font);
        X_O->setStyleSheet(QStringLiteral(""));
        X_O->setPixmap(QPixmap(QString::fromUtf8(":/icons/myoncenx.png")));
        X_O->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(X_O);

        statWindow = new QPushButton(XandO);
        statWindow->setObjectName(QStringLiteral("statWindow"));

        verticalLayout->addWidget(statWindow);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        X = new QPushButton(XandO);
        X->setObjectName(QStringLiteral("X"));
        X->setMinimumSize(QSize(0, 40));
        X->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(X);

        O = new QPushButton(XandO);
        O->setObjectName(QStringLiteral("O"));
        O->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(O);


        verticalLayout->addLayout(horizontalLayout);

        Play = new QPushButton(XandO);
        Play->setObjectName(QStringLiteral("Play"));
        Play->setMinimumSize(QSize(0, 38));
        Play->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(Play);

        Info = new QPushButton(XandO);
        Info->setObjectName(QStringLiteral("Info"));
        Info->setMinimumSize(QSize(0, 38));
        Info->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(Info);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        tabWidget = new QTabWidget(XandO);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(465, 480));
        tabWidget->setMaximumSize(QSize(470, 470));
        tabWidget->setStyleSheet(QStringLiteral(""));
        PLAY = new QWidget();
        PLAY->setObjectName(QStringLiteral("PLAY"));
        PLAY->setStyleSheet(QLatin1String("QWidget#PLAY{\n"
"\n"
"	border: none;\n"
"	border:0px;\n"
"\n"
"}"));
        gridLayout_2 = new QGridLayout(PLAY);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tab1 = new QWidget(PLAY);
        tab1->setObjectName(QStringLiteral("tab1"));
        tab1->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(tab1);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        num3 = new QPushButton(tab1);
        num3->setObjectName(QStringLiteral("num3"));
        sizePolicy.setHeightForWidth(num3->sizePolicy().hasHeightForWidth());
        num3->setSizePolicy(sizePolicy);
        num3->setMinimumSize(QSize(128, 128));

        gridLayout->addWidget(num3, 2, 2, 1, 1);

        num5 = new QPushButton(tab1);
        num5->setObjectName(QStringLiteral("num5"));
        sizePolicy.setHeightForWidth(num5->sizePolicy().hasHeightForWidth());
        num5->setSizePolicy(sizePolicy);
        num5->setMinimumSize(QSize(128, 128));
        num5->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num5, 1, 1, 1, 1);

        num8 = new QPushButton(tab1);
        num8->setObjectName(QStringLiteral("num8"));
        sizePolicy.setHeightForWidth(num8->sizePolicy().hasHeightForWidth());
        num8->setSizePolicy(sizePolicy);
        num8->setMinimumSize(QSize(128, 128));
        num8->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num8, 0, 1, 1, 1);

        num4 = new QPushButton(tab1);
        num4->setObjectName(QStringLiteral("num4"));
        sizePolicy.setHeightForWidth(num4->sizePolicy().hasHeightForWidth());
        num4->setSizePolicy(sizePolicy);
        num4->setMinimumSize(QSize(128, 128));

        gridLayout->addWidget(num4, 1, 0, 1, 1);

        num9 = new QPushButton(tab1);
        num9->setObjectName(QStringLiteral("num9"));
        sizePolicy.setHeightForWidth(num9->sizePolicy().hasHeightForWidth());
        num9->setSizePolicy(sizePolicy);
        num9->setMinimumSize(QSize(128, 128));

        gridLayout->addWidget(num9, 0, 2, 1, 1);

        num7 = new QPushButton(tab1);
        num7->setObjectName(QStringLiteral("num7"));
        sizePolicy.setHeightForWidth(num7->sizePolicy().hasHeightForWidth());
        num7->setSizePolicy(sizePolicy);
        num7->setMinimumSize(QSize(128, 128));
        num7->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(num7, 0, 0, 1, 1);

        num1 = new QPushButton(tab1);
        num1->setObjectName(QStringLiteral("num1"));
        sizePolicy.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy);
        num1->setMinimumSize(QSize(128, 128));

        gridLayout->addWidget(num1, 2, 0, 1, 1);

        num2 = new QPushButton(tab1);
        num2->setObjectName(QStringLiteral("num2"));
        sizePolicy.setHeightForWidth(num2->sizePolicy().hasHeightForWidth());
        num2->setSizePolicy(sizePolicy);
        num2->setMinimumSize(QSize(128, 128));

        gridLayout->addWidget(num2, 2, 1, 1, 1);

        num6 = new QPushButton(tab1);
        num6->setObjectName(QStringLiteral("num6"));
        sizePolicy.setHeightForWidth(num6->sizePolicy().hasHeightForWidth());
        num6->setSizePolicy(sizePolicy);
        num6->setMinimumSize(QSize(128, 128));

        gridLayout->addWidget(num6, 1, 2, 1, 1);


        gridLayout_2->addWidget(tab1, 0, 0, 1, 1);

        tabWidget->addTab(PLAY, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QStringLiteral("border: none;"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);


        retranslateUi(XandO);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(XandO);
    } // setupUi

    void retranslateUi(QWidget *XandO)
    {
        XandO->setWindowTitle(QApplication::translate("XandO", "XandO", Q_NULLPTR));
        X_O->setText(QString());
        statWindow->setText(QString());
        X->setText(QString());
        O->setText(QString());
        Play->setText(QApplication::translate("XandO", "\320\230\320\223\320\240\320\220\320\242\320\254", Q_NULLPTR));
        Info->setText(QApplication::translate("XandO", "\320\236\320\261 \320\270\320\263\321\200\320\265", Q_NULLPTR));
        num3->setText(QString());
        num5->setText(QString());
        num8->setText(QString());
        num4->setText(QString());
        num9->setText(QString());
        num7->setText(QString());
        num1->setText(QString());
        num2->setText(QString());
        num6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(PLAY), QApplication::translate("XandO", "\320\230\320\223\320\240\320\220", Q_NULLPTR));
        label->setText(QApplication::translate("XandO", "\320\224\320\260\320\275\320\275\320\260\321\217 \320\270\320\263\321\200\320\260 \321\201 \320\263\320\276\321\200\320\265\320\274 \320\270 \320\277\320\265\320\277\320\273\320\276\320\274 \320\275\320\260\320\261\321\200\320\260\320\275\320\260 \320\272\321\200\320\270\320\262\321\213\320\274\320\270 \320\277\320\260\320\273\321\214\321\206\320\260\320\274\320\270. \320\232 \321\201\320\276\320\266\320\260\320\273\320\265\320\275\320\270\321\216, \320\275\320\265 \320\260\320\261\320\276\321\200\320\270\320\263\320\265\320\275\320\260..", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("XandO", "\320\236\320\261 \320\270\320\263\321\200\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class XandO: public Ui_XandO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XANDO_H
