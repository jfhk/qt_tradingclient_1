/********************************************************************************
** Form generated from reading UI file 'SubscribeToDataGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSCRIBETODATAGUI_H
#define UI_SUBSCRIBETODATAGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubscribeToDataGUI
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_strategyInstructions;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;
    QSplitter *splitter;
    QTableView *tableView;

    void setupUi(QWidget *SubscribeToDataGUI)
    {
        if (SubscribeToDataGUI->objectName().isEmpty())
            SubscribeToDataGUI->setObjectName(QStringLiteral("SubscribeToDataGUI"));
        SubscribeToDataGUI->resize(616, 407);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(SubscribeToDataGUI->sizePolicy().hasHeightForWidth());
        SubscribeToDataGUI->setSizePolicy(sizePolicy);
        SubscribeToDataGUI->setStyleSheet(QStringLiteral("background-color: rgb(59, 63, 85);"));
        horizontalLayout = new QHBoxLayout(SubscribeToDataGUI);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_strategyInstructions = new QGroupBox(SubscribeToDataGUI);
        groupBox_strategyInstructions->setObjectName(QStringLiteral("groupBox_strategyInstructions"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_strategyInstructions->sizePolicy().hasHeightForWidth());
        groupBox_strategyInstructions->setSizePolicy(sizePolicy1);
        groupBox_strategyInstructions->setMinimumSize(QSize(165, 0));
        groupBox_strategyInstructions->setMaximumSize(QSize(200, 16777215));
        groupBox_strategyInstructions->setBaseSize(QSize(200, 0));
        groupBox_strategyInstructions->setStyleSheet(QStringLiteral("color:white;"));
        layoutWidget = new QWidget(groupBox_strategyInstructions);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(17, 118, 129, 128));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_ok = new QPushButton(layoutWidget);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(79, 79, 79);"));

        verticalLayout->addWidget(pushButton_ok);

        pushButton_cancel = new QPushButton(layoutWidget);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgb(79, 79, 79);"));

        verticalLayout->addWidget(pushButton_cancel);


        horizontalLayout->addWidget(groupBox_strategyInstructions);

        splitter = new QSplitter(SubscribeToDataGUI);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 127);\n"
"selection-background-color: rgb(182, 182, 182);"));
        splitter->addWidget(tableView);

        horizontalLayout->addWidget(splitter);


        retranslateUi(SubscribeToDataGUI);

        QMetaObject::connectSlotsByName(SubscribeToDataGUI);
    } // setupUi

    void retranslateUi(QWidget *SubscribeToDataGUI)
    {
        SubscribeToDataGUI->setWindowTitle(QApplication::translate("SubscribeToDataGUI", "Subscribe to data", 0));
#ifndef QT_NO_WHATSTHIS
        SubscribeToDataGUI->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_strategyInstructions->setTitle(QString());
        pushButton_ok->setText(QApplication::translate("SubscribeToDataGUI", "ok", 0));
        pushButton_cancel->setText(QApplication::translate("SubscribeToDataGUI", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SubscribeToDataGUI: public Ui_SubscribeToDataGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSCRIBETODATAGUI_H
