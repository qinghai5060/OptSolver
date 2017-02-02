#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_OptSolver.h"

class OptSolver : public QMainWindow
{
    Q_OBJECT

public:
    OptSolver(QWidget *parent = Q_NULLPTR);

private:
    Ui::OptSolverClass ui;
};
