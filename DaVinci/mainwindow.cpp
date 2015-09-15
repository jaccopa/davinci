#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
   // this->setWidth(1600);
   // this->setHeight(1200);
    QVBoxLayout *mainlayout = new QVBoxLayout();
    mainlayout->addWidget(createName());
    mainlayout->addWidget(createCure());
    mainlayout->addWidget(createSetting());

    QWidget *widget = new QWidget;
    widget->setLayout(mainlayout);
    widget->resize(800,600);
    setCentralWidget(widget);
    setWindowTitle(tr("logwindow"));
}

QLabel* MainWindow::createName()
{
    this->lName = new QLabel(tr("ABC"));
    this->lName->setText("lable");
    return this->lName;
}

QGroupBox* MainWindow::createCure()
{
    QGroupBox *cureGroupBox = new QGroupBox(tr("cure"));
    QVBoxLayout *curelayout = new QVBoxLayout();
    QLabel *infoCure = new QLabel(tr("infoCure"));
    QPushButton *cureButton = new QPushButton(tr("pushbutton"));
    curelayout->addWidget(infoCure);
    curelayout->addWidget(cureButton);
    cureGroupBox->setLayout(curelayout);
    cureGroupBox->setFlat(true);
    return cureGroupBox;
}

QGroupBox* MainWindow::createSetting()
{
    QGroupBox *setGroupBox = new QGroupBox(tr("set"));
    QVBoxLayout *setlayout = new QVBoxLayout();
    QLabel *infoSet = new QLabel(tr("infoSet"));
    QPushButton *setButton = new QPushButton(tr("pushbutton"));
    setlayout->addWidget(infoSet);
    setlayout->addWidget(setButton);
    setGroupBox->setLayout(setlayout);
    return setGroupBox;
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
