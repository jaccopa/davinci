#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QApplication>
#include <QTextCodec>
#include <QGroupBox>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initUI();
    void setWidth(int);
    void setHeight(int);
    QLabel *createName();
    QGroupBox *createCure();
    QGroupBox *createSetting();
    int  getWidth();
    int  getHeight();

private:
    QGroupBox *gCure;
    QGroupBox *gSettings;
    QLabel    *lName;
    int screenW;
    int screenH;
};

#endif // MAINWINDOW_H
