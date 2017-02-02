/********************************************************************************
** Form generated from reading UI file 'OptSolver.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTSOLVER_H
#define UI_OPTSOLVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptSolverClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OptSolverClass)
    {
        if (OptSolverClass->objectName().isEmpty())
            OptSolverClass->setObjectName(QStringLiteral("OptSolverClass"));
        OptSolverClass->resize(600, 400);
        menuBar = new QMenuBar(OptSolverClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        OptSolverClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OptSolverClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OptSolverClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(OptSolverClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        OptSolverClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(OptSolverClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OptSolverClass->setStatusBar(statusBar);

        retranslateUi(OptSolverClass);

        QMetaObject::connectSlotsByName(OptSolverClass);
    } // setupUi

    void retranslateUi(QMainWindow *OptSolverClass)
    {
        OptSolverClass->setWindowTitle(QApplication::translate("OptSolverClass", "OptSolver", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OptSolverClass: public Ui_OptSolverClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTSOLVER_H
