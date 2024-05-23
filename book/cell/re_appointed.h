#ifndef RE_APPOINTED_H
#define RE_APPOINTED_H

#include <QWidget>

namespace Ui {
class re_appointed;
}

class re_appointed : public QWidget
{
    Q_OBJECT

public:
    explicit re_appointed(QWidget *parent = nullptr);
    ~re_appointed();

private:
    Ui::re_appointed *ui;
};

#endif // RE_APPOINTED_H
