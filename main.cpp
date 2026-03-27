/**
 * @brief 主函数 - 程序入口点
 * @param argc 命令行参数个数
 * @param argv 命令行参数数组
 * @return int 程序运行状态码（0 表示成功）
 *
 * 执行流程：
 * 1. 创建 QApplication 对象（管理 GUI 资源）
 * 2. 创建 Widget 主窗口对象
 * 3. 显示主窗口
 * 4. 进入事件循环（等待用户操作）
 */
#include "mainwidget.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    w.show();
    return a.exec();
}
