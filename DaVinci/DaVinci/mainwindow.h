#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QApplication>
#include <QTextCodec>
#include <QGroupBox>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initUI();
    void setWidth(int);
    void setHeight(int);
    int getWidth();
    int getHeight();

private:
    QGroupBox *gCure;
    QGroupBox *gSettings;
    int screenW;
    int screenH;
};

#endif // MAINWINDOW_H
