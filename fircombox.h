#ifndef FIRCOMBOX_H
#define FIRCOMBOX_H

#include <QWidget>
#include <QComboBox>


class FirComBox : public QComboBox
{
    Q_OBJECT
public:
    explicit FirComBox(QWidget *parent = nullptr);

signals:
};

#endif // FIRCOMBOX_H
