#include "app.h"
#include <QRegExp>
#include <QStringList>
#include <string>
#include <QString>

using namespace std;

App::App(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);
    QPushButton *num_buttons[] = {
        ui.pushButton_0,
        ui.pushButton_1,
        ui.pushButton_2,
        ui.pushButton_3,
        ui.pushButton_4,
        ui.pushButton_5,
        ui.pushButton_6,
        ui.pushButton_7,
        ui.pushButton_8,
        ui.pushButton_9,
        ui.pushButton_dot,
        ui.pushButton_add,
        ui.pushButton_sub};
    for (int i = 0; i < (sizeof(num_buttons) / sizeof(num_buttons[0])); i++)
    {
        connect(num_buttons[i], &QPushButton::pressed, this, &App::set_NumText);
    }
    connect(ui.pushButton_equal, &QPushButton::pressed, this, &App::process);
    connect(ui.pushButton_del, &QPushButton::pressed, this, &App::back_space);
    connect(ui.actionExit, &QAction::triggered, this, &App::exitMenu);
}

void App::set_NumText()
{
    // Get the button that triggered the slot
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    if (!btn)
        return; // Safety check in case of a null pointer

    else
    {
        if (ui.pushButton_equal->isChecked())
        {
            ui.label->clear();
            ui.pushButton_equal->setChecked(false);
        }
        ui.label->setText(ui.label->text() + btn->text());
    }
}

void App::back_space()
{
    if (ui.pushButton_equal->isChecked())
    {
        ui.label->clear();
        ui.pushButton_equal->setChecked(false);
    }
    QString temp = ui.label->text();
    temp.chop(1);
    ui.label->setText(temp);
}

void App::process()
{
    if (ui.pushButton_equal->isChecked())
    {
        ui.label->clear();
    }
    else
    {
        QString inputText = ui.label->text();

        // If the input has multiple operations, process it
        if (inputText.contains("+") || inputText.contains("-"))
        {
            double result = evaluateExpression(inputText);
            ui.label->setText(ui.label->text() + "\n= " + QString::number(result));
        }
    }
}

double App::evaluateExpression(const QString &expression)
{
    // Regular expression to match operands and operators
    QRegExp regExp("(-?\\d*\\.?\\d+)([\\+-])(-?\\d*\\.?\\d+)");

    QString currentExpression = expression;
    double result = 0;
    bool firstIteration = true;

    // Keep performing operations until no more operators remain
    while (regExp.indexIn(currentExpression) != -1)
    {
        QString operand1 = regExp.cap(1);
        QString operatorSign = regExp.cap(2);
        QString operand2 = regExp.cap(3);

        double num1 = operand1.toDouble();
        double num2 = operand2.toDouble();

        double tempResult = (operatorSign == "+") ? num1 + num2 : num1 - num2;

        result = tempResult;

        // Replace the processed part with the result
        currentExpression = currentExpression.left(regExp.pos(0)) + QString::number(result) + currentExpression.mid(regExp.pos(0) + regExp.matchedLength());
    }

    return result;
}

void App::exitMenu()
{
    this->close();
}
