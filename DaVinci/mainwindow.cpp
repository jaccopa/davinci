#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWidth(1600);
    this->setHeight(1200);
}

MainWindow::~MainWindow()
{
}

void MainWindow::setWidth(int w)
{
    if( w > 0 ) this->screenW = w;
}

void MainWindow::setHeight(int h)
{
    if( h > 0 ) this->screenH = h;
}

int MainWindow::getWidth()
{
    return this->screenW;
}

int MainWindow::getHeight()
{
    return this->screenH;
}

void MainWindow::initUI()
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
}
