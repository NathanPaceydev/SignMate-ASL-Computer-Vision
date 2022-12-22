#pragma once

#include <QtWidgets/QWidget>
#include "ui_signmate.h"

class SignMate : public QWidget
{
    Q_OBJECT

public:
    SignMate(QWidget *parent = nullptr);
    ~SignMate();

private:
    Ui::SignMateClass ui;
};
