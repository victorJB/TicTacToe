#include "bienvenida.h"
#include "ui_bienvenida.h"
#include "gato.h"

Bienvenida::Bienvenida(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bienvenida)
{
    ui->setupUi(this);
    QPixmap mensajeBienvenida("BienvenidoGato2.png");
    ui->label_1->setPixmap(mensajeBienvenida);
}

Bienvenida::~Bienvenida()
{
    delete ui;
}

void Bienvenida::on_pushButton_clicked()
{
    Gato * iniciarJuego = new Gato(this);
    this->close();
    iniciarJuego->show();
}

void Bienvenida::on_pushButton_2_clicked()
{
    Gato * iniciarJuego = new Gato(this);
    this->close();
    iniciarJuego->show();

}

void Bienvenida::on_pushButton_3_clicked()
{
    Gato * iniciarJuego = new Gato(this);
    this->close();
    iniciarJuego->show();
}
