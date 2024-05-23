#ifndef APPOINTED_H
#define APPOINTED_H

#include <QWidget>

namespace Ui {
class appointed;
}

class appointed : public QWidget
{
    Q_OBJECT

public:
    explicit appointed(QWidget *parent = nullptr);
    ~appointed();

private:
    Ui::appointed *ui;
};

#endif // APPOINTED_H
