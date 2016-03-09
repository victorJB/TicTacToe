#ifndef BIENVENIDA_H
#define BIENVENIDA_H

#include <QDialog>

namespace Ui {
class Bienvenida;
}

class Bienvenida : public QDialog
{
    Q_OBJECT

public:
    explicit Bienvenida(QWidget *parent = 0);
    ~Bienvenida();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Bienvenida *ui;
};

#endif // BIENVENIDA_H
