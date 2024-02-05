#ifndef MENUPAUSE_H
#define MENUPAUSE_H

#include <QDialog>

namespace Ui {
class MenuPause;
}

class MenuPause : public QDialog
{
    Q_OBJECT

public:
    explicit MenuPause(QWidget *parent = nullptr);
    ~MenuPause();

private:
    Ui::MenuPause *ui;
};

#endif // MENUPAUSE_H
