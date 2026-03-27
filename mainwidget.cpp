#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    this->resize(800,700);
    this->setWindowTitle("智能串口工具");
    this->setWindowIcon(QIcon("://image/mianicon.png"));

}

MainWidget::~MainWidget()
{
    delete ui;
}
