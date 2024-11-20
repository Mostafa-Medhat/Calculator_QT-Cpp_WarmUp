#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include "ui_Simple Calculator.h" // Include the generated UI header

class App : public QMainWindow
{
    Q_OBJECT // Macro required for signal-slot functionality

        public : explicit App(QWidget *parent = nullptr);

private slots:
    void set_NumText();
    void back_space();
    void process();
    double evaluateExpression(const QString &expression);
    void exitMenu();

private:
    Ui::MainWindow ui; // UI object from the generated header
    int num1, num2;
};

#endif // APP_H
