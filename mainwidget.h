/**
 * @file widget.h
 * @brief 主窗口头文件
 *
 * 功能：声明串口调试助手的主窗口类
 * 管理：UI 界面、串口通信、数据处理、定时任务
 */
#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWidget;
}
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
};
#endif // MAINWIDGET_H
