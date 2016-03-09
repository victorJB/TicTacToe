#ifndef GATO_H
#define GATO_H

#include <QDialog>
#include "ticTacToe.h"

namespace Ui {
class Gato;
}

class Gato : public QDialog
{
    Q_OBJECT

public:
    explicit Gato(QWidget *parent = 0);
    ~Gato();
    TicTacToe jugar;



private slots:


    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_radioButton_1_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::Gato *ui;
};

#endif // GATO_H
