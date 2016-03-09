#include "gato.h"
#include "ui_gato.h"

#include <QMouseEvent>

Gato::Gato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gato)
{
    ui->setupUi(this);
    QPixmap cuadroBlanco("cuadroBlanco.jpg");
    QPixmap reja("grid.jpg");
    QPixmap reja2("grid2.jpg");


    ui->label_1->setPixmap(cuadroBlanco);
    ui->label_2->setPixmap(cuadroBlanco);
    ui->label_3->setPixmap(cuadroBlanco);
    ui->label_4->setPixmap(cuadroBlanco);
    ui->label_5->setPixmap(cuadroBlanco);
    ui->label_6->setPixmap(cuadroBlanco);
    ui->label_7->setPixmap(cuadroBlanco);
    ui->label_8->setPixmap(cuadroBlanco);
    ui->label_9->setPixmap(cuadroBlanco);
    ui->label_v1->setPixmap(reja);
    ui->label_v2->setPixmap(reja);
    ui->label_h1->setPixmap(reja2);
    ui->label_h2->setPixmap(reja2);
    ui->radioButton_1->setChecked(true);
    ui->radioButton_3->setChecked(true);
    ui->radioButton_5->setChecked(true);


}

Gato::~Gato()
{


    delete ui;
}


void Gato::on_pushButton_1_clicked()
{
   this->jugar.dato = 1;

    if(this->jugar.turnodelJugador == 1)
       {
         this->jugar.insertar = this->jugar.jugador1();

         if(this->jugar.insertar == 1)
         {
             if(this->jugar.quienEmpieza == 1)
             {
                 QPixmap imagen("X2.png");
                 ui->label_1->setPixmap(imagen);
             }

             if(this->jugar.quienEmpieza == 2)
             {
                 QPixmap imagen("circulo1.jpg");
                 ui->label_1->setPixmap(imagen);
             }

             this->jugar.ganador = this->jugar.comprobarGanaP1();

             if(this->jugar.ganador == 1)
             {
                 QPixmap ganar("GanaP1.png");
                 ui->label_12->setPixmap(ganar);
                 ui->pushButton_1->setDisabled(true);
                 ui->pushButton_2->setDisabled(true);
                 ui->pushButton_3->setDisabled(true);
                 ui->pushButton_4->setDisabled(true);
                 ui->pushButton_5->setDisabled(true);
                 ui->pushButton_6->setDisabled(true);
                 ui->pushButton_7->setDisabled(true);
                 ui->pushButton_8->setDisabled(true);
                 ui->pushButton_9->setDisabled(true);
             }

             this->jugar.turnodelJugador = 2;
         }

         this->jugar.insertar = 0;
       }

    else
    {
        this->jugar.insertar = this->jugar.jugador2();

        if(this->jugar.insertar == 1)
        {
            if(this->jugar.quienEmpieza == 2)
            {
                QPixmap imagen("X2.png");
                ui->label_1->setPixmap(imagen);
            }

            if(this->jugar.quienEmpieza == 1)
            {
                QPixmap imagen("circulo1.jpg");
                ui->label_1->setPixmap(imagen);
            }

            this->jugar.ganador = this->jugar.comprobarGanaP2();

            if(this->jugar.ganador == 1)
            {
                QPixmap ganar("GanaP2.png");
                ui->label_12->setPixmap(ganar);
                ui->pushButton_1->setDisabled(true);
                ui->pushButton_2->setDisabled(true);
                ui->pushButton_3->setDisabled(true);
                ui->pushButton_4->setDisabled(true);
                ui->pushButton_5->setDisabled(true);
                ui->pushButton_6->setDisabled(true);
                ui->pushButton_7->setDisabled(true);
                ui->pushButton_8->setDisabled(true);
                ui->pushButton_9->setDisabled(true);
            }

            this->jugar.turnodelJugador = 1;
        }

        this->jugar.insertar = 0;
    }

}

void Gato::on_pushButton_2_clicked()
{
    this->jugar.dato = 2;

     if(this->jugar.turnodelJugador == 1)
        {
          this->jugar.insertar = this->jugar.jugador1();

          if(this->jugar.insertar == 1)
          {
              if(this->jugar.quienEmpieza == 1)
              {
                  QPixmap imagen("X2.png");
                  ui->label_2->setPixmap(imagen);
              }

              if(this->jugar.quienEmpieza == 2)
              {
                  QPixmap imagen("circulo1.jpg");
                  ui->label_2->setPixmap(imagen);
              }

              this->jugar.ganador = this->jugar.comprobarGanaP1();

              if(this->jugar.ganador == 1)
              {
                  QPixmap ganar("GanaP1.png");
                  ui->label_12->setPixmap(ganar);
                  ui->pushButton_1->setDisabled(true);
                  ui->pushButton_2->setDisabled(true);
                  ui->pushButton_3->setDisabled(true);
                  ui->pushButton_4->setDisabled(true);
                  ui->pushButton_5->setDisabled(true);
                  ui->pushButton_6->setDisabled(true);
                  ui->pushButton_7->setDisabled(true);
                  ui->pushButton_8->setDisabled(true);
                  ui->pushButton_9->setDisabled(true);
              }

              this->jugar.turnodelJugador = 2;
          }

          this->jugar.insertar = 0;
        }

     else
     {
         this->jugar.insertar = this->jugar.jugador2();

         if(this->jugar.insertar == 1)
         {
             if(this->jugar.quienEmpieza == 2)
             {
                 QPixmap imagen("X2.png");
                 ui->label_2->setPixmap(imagen);
             }

             if(this->jugar.quienEmpieza == 1)
             {
                 QPixmap imagen("circulo1.jpg");
                 ui->label_2->setPixmap(imagen);
             }

             this->jugar.ganador = this->jugar.comprobarGanaP2();

             if(this->jugar.ganador == 1)
             {
                 QPixmap ganar("GanaP2.png");
                 ui->label_12->setPixmap(ganar);
                 ui->pushButton_1->setDisabled(true);
                 ui->pushButton_2->setDisabled(true);
                 ui->pushButton_3->setDisabled(true);
                 ui->pushButton_4->setDisabled(true);
                 ui->pushButton_5->setDisabled(true);
                 ui->pushButton_6->setDisabled(true);
                 ui->pushButton_7->setDisabled(true);
                 ui->pushButton_8->setDisabled(true);
                 ui->pushButton_9->setDisabled(true);
             }

             this->jugar.turnodelJugador = 1;
         }

         this->jugar.insertar = 0;
     }
}

void Gato::on_pushButton_3_clicked()
{
    this->jugar.dato = 3;

     if(this->jugar.turnodelJugador == 1)
        {
          this->jugar.insertar = this->jugar.jugador1();

          if(this->jugar.insertar == 1)
          {
              if(this->jugar.quienEmpieza == 1)
              {
                  QPixmap imagen("X2.png");
                  ui->label_3->setPixmap(imagen);
              }

              if(this->jugar.quienEmpieza == 2)
              {
                  QPixmap imagen("circulo1.jpg");
                  ui->label_3->setPixmap(imagen);
              }

              this->jugar.ganador = this->jugar.comprobarGanaP1();

              if(this->jugar.ganador == 1)
              {
                  QPixmap ganar("GanaP1.png");
                  ui->label_12->setPixmap(ganar);
                  ui->pushButton_1->setDisabled(true);
                  ui->pushButton_2->setDisabled(true);
                  ui->pushButton_3->setDisabled(true);
                  ui->pushButton_4->setDisabled(true);
                  ui->pushButton_5->setDisabled(true);
                  ui->pushButton_6->setDisabled(true);
                  ui->pushButton_7->setDisabled(true);
                  ui->pushButton_8->setDisabled(true);
                  ui->pushButton_9->setDisabled(true);
              }

              this->jugar.turnodelJugador = 2;
          }

          this->jugar.insertar = 0;
        }

     else
     {
         this->jugar.insertar = this->jugar.jugador2();

         if(this->jugar.insertar == 1)
         {
             if(this->jugar.quienEmpieza == 2)
             {
                 QPixmap imagen("X2.png");
                 ui->label_3->setPixmap(imagen);
             }

             if(this->jugar.quienEmpieza == 1)
             {
                 QPixmap imagen("circulo1.jpg");
                 ui->label_3->setPixmap(imagen);
             }

             this->jugar.ganador = this->jugar.comprobarGanaP2();

             if(this->jugar.ganador == 1)
             {
                 QPixmap ganar("GanaP2.png");
                 ui->label_12->setPixmap(ganar);
                 ui->pushButton_1->setDisabled(true);
                 ui->pushButton_2->setDisabled(true);
                 ui->pushButton_3->setDisabled(true);
                 ui->pushButton_4->setDisabled(true);
                 ui->pushButton_5->setDisabled(true);
                 ui->pushButton_6->setDisabled(true);
                 ui->pushButton_7->setDisabled(true);
                 ui->pushButton_8->setDisabled(true);
                 ui->pushButton_9->setDisabled(true);
             }

             this->jugar.turnodelJugador = 1;
         }

         this->jugar.insertar = 0;
     }
}

void Gato::on_pushButton_4_clicked()
{
    this->jugar.dato = 4;

     if(this->jugar.turnodelJugador == 1)
        {
          this->jugar.insertar = this->jugar.jugador1();

          if(this->jugar.insertar == 1)
          {
              if(this->jugar.quienEmpieza == 1)
              {
                  QPixmap imagen("X2.png");
                  ui->label_4->setPixmap(imagen);
              }

              if(this->jugar.quienEmpieza == 2)
              {
                  QPixmap imagen("circulo1.jpg");
                  ui->label_4->setPixmap(imagen);
              }

              this->jugar.ganador = this->jugar.comprobarGanaP1();

              if(this->jugar.ganador == 1)
              {
                  QPixmap ganar("GanaP1.png");
                  ui->label_12->setPixmap(ganar);
                  ui->pushButton_1->setDisabled(true);
                  ui->pushButton_2->setDisabled(true);
                  ui->pushButton_3->setDisabled(true);
                  ui->pushButton_4->setDisabled(true);
                  ui->pushButton_5->setDisabled(true);
                  ui->pushButton_6->setDisabled(true);
                  ui->pushButton_7->setDisabled(true);
                  ui->pushButton_8->setDisabled(true);
                  ui->pushButton_9->setDisabled(true);
              }

              this->jugar.turnodelJugador = 2;
          }

          this->jugar.insertar = 0;
        }

     else
     {
         this->jugar.insertar = this->jugar.jugador2();

         if(this->jugar.insertar == 1)
         {
             if(this->jugar.quienEmpieza == 2)
             {
                 QPixmap imagen("X2.png");
                 ui->label_4->setPixmap(imagen);
             }

             if(this->jugar.quienEmpieza == 1)
             {
                 QPixmap imagen("circulo1.jpg");
                 ui->label_4->setPixmap(imagen);
             }

             this->jugar.ganador = this->jugar.comprobarGanaP2();

             if(this->jugar.ganador == 1)
             {
                 QPixmap ganar("GanaP2.png");
                 ui->label_12->setPixmap(ganar);
                 ui->pushButton_1->setDisabled(true);
                 ui->pushButton_2->setDisabled(true);
                 ui->pushButton_3->setDisabled(true);
                 ui->pushButton_4->setDisabled(true);
                 ui->pushButton_5->setDisabled(true);
                 ui->pushButton_6->setDisabled(true);
                 ui->pushButton_7->setDisabled(true);
                 ui->pushButton_8->setDisabled(true);
                 ui->pushButton_9->setDisabled(true);
             }

             this->jugar.turnodelJugador = 1;
         }

         this->jugar.insertar = 0;
     }
}

void Gato::on_pushButton_5_clicked()
{
    this->jugar.dato = 5;

     if(this->jugar.turnodelJugador == 1)
        {
          this->jugar.insertar = this->jugar.jugador1();

          if(this->jugar.insertar == 1)
          {
              if(this->jugar.quienEmpieza == 1)
              {
                  QPixmap imagen("X2.png");
                  ui->label_5->setPixmap(imagen);
              }

              if(this->jugar.quienEmpieza == 2)
              {
                  QPixmap imagen("circulo1.jpg");
                  ui->label_5->setPixmap(imagen);
              }

              this->jugar.ganador = this->jugar.comprobarGanaP1();

              if(this->jugar.ganador == 1)
              {
                  QPixmap ganar("GanaP1.png");
                  ui->label_12->setPixmap(ganar);
                  ui->pushButton_1->setDisabled(true);
                  ui->pushButton_2->setDisabled(true);
                  ui->pushButton_3->setDisabled(true);
                  ui->pushButton_4->setDisabled(true);
                  ui->pushButton_5->setDisabled(true);
                  ui->pushButton_6->setDisabled(true);
                  ui->pushButton_7->setDisabled(true);
                  ui->pushButton_8->setDisabled(true);
                  ui->pushButton_9->setDisabled(true);
              }


              this->jugar.turnodelJugador = 2;
          }

          this->jugar.insertar = 0;
        }

     else
     {
         this->jugar.insertar = this->jugar.jugador2();

         if(this->jugar.insertar == 1)
         {
             if(this->jugar.quienEmpieza == 2)
             {
                 QPixmap imagen("X2.png");
                 ui->label_5->setPixmap(imagen);
             }

             if(this->jugar.quienEmpieza == 1)
             {
                 QPixmap imagen("circulo1.jpg");
                 ui->label_5->setPixmap(imagen);
             }

             this->jugar.ganador = this->jugar.comprobarGanaP2();

             if(this->jugar.ganador == 1)
                {
                 QPixmap ganar("GanaP2.png");
                 ui->label_12->setPixmap(ganar);
                 ui->pushButton_1->setDisabled(true);
                 ui->pushButton_2->setDisabled(true);
                 ui->pushButton_3->setDisabled(true);
                 ui->pushButton_4->setDisabled(true);
                 ui->pushButton_5->setDisabled(true);
                 ui->pushButton_6->setDisabled(true);
                 ui->pushButton_7->setDisabled(true);
                 ui->pushButton_8->setDisabled(true);
                 ui->pushButton_9->setDisabled(true);
             }

             this->jugar.turnodelJugador = 1;
         }

         this->jugar.insertar = 0;
     }
}

void Gato::on_pushButton_6_clicked()
{
    this->jugar.dato = 6;

     if(this->jugar.turnodelJugador == 1)
        {
          this->jugar.insertar = this->jugar.jugador1();

          if(this->jugar.insertar == 1)
          {
              if(this->jugar.quienEmpieza == 1)
              {
                  QPixmap imagen("X2.png");
                  ui->label_6->setPixmap(imagen);
              }

              if(this->jugar.quienEmpieza == 2)
              {
                  QPixmap imagen("circulo1.jpg");
                  ui->label_6->setPixmap(imagen);
              }

              this->jugar.ganador = this->jugar.comprobarGanaP1();

              if(this->jugar.ganador == 1)
                 {
                  QPixmap ganar("GanaP1.png");
                  ui->label_12->setPixmap(ganar);
                  ui->pushButton_1->setDisabled(true);
                  ui->pushButton_2->setDisabled(true);
                  ui->pushButton_3->setDisabled(true);
                  ui->pushButton_4->setDisabled(true);
                  ui->pushButton_5->setDisabled(true);
                  ui->pushButton_6->setDisabled(true);
                  ui->pushButton_7->setDisabled(true);
                  ui->pushButton_8->setDisabled(true);
                  ui->pushButton_9->setDisabled(true);
                 }

              this->jugar.turnodelJugador = 2;
          }

          this->jugar.insertar = 0;
        }

     else
     {
         this->jugar.insertar = this->jugar.jugador2();

         if(this->jugar.insertar == 1)
         {
             if(this->jugar.quienEmpieza == 2)
             {
                 QPixmap imagen("X2.png");
                 ui->label_6->setPixmap(imagen);
             }

             if(this->jugar.quienEmpieza == 1)
             {
                 QPixmap imagen("circulo1.jpg");
                 ui->label_6->setPixmap(imagen);
             }

             this->jugar.ganador = this->jugar.comprobarGanaP2();

             if(this->jugar.ganador == 1)
             {
                 QPixmap ganar("GanaP2.png");
                 ui->label_12->setPixmap(ganar);
                 ui->pushButton_1->setDisabled(true);
                 ui->pushButton_2->setDisabled(true);
                 ui->pushButton_3->setDisabled(true);
                 ui->pushButton_4->setDisabled(true);
                 ui->pushButton_5->setDisabled(true);
                 ui->pushButton_6->setDisabled(true);
                 ui->pushButton_7->setDisabled(true);
                 ui->pushButton_8->setDisabled(true);
                 ui->pushButton_9->setDisabled(true);
             }

             this->jugar.turnodelJugador = 1;
         }

         this->jugar.insertar = 0;
     }
}

void Gato::on_pushButton_7_clicked()
{
    this->jugar.dato = 7;

     if(this->jugar.turnodelJugador == 1)
        {
          this->jugar.insertar = this->jugar.jugador1();

          if(this->jugar.insertar == 1)
          {
              if(this->jugar.quienEmpieza == 1)
              {
                  QPixmap imagen("X2.png");
                  ui->label_7->setPixmap(imagen);
              }

              if(this->jugar.quienEmpieza == 2)
              {
                  QPixmap imagen("circulo1.jpg");
                  ui->label_7->setPixmap(imagen);
              }

              this->jugar.ganador = this->jugar.comprobarGanaP1();

              if(this->jugar.ganador == 1)
              {
                  QPixmap ganar("GanaP1.png");
                  ui->label_12->setPixmap(ganar);
                  ui->pushButton_1->setDisabled(true);
                  ui->pushButton_2->setDisabled(true);
                  ui->pushButton_3->setDisabled(true);
                  ui->pushButton_4->setDisabled(true);
                  ui->pushButton_5->setDisabled(true);
                  ui->pushButton_6->setDisabled(true);
                  ui->pushButton_7->setDisabled(true);
                  ui->pushButton_8->setDisabled(true);
                  ui->pushButton_9->setDisabled(true);
              }

              this->jugar.turnodelJugador = 2;
          }

          this->jugar.insertar = 0;
        }

     else
     {
         this->jugar.insertar = this->jugar.jugador2();

         if(this->jugar.insertar == 1)
         {
             if(this->jugar.quienEmpieza == 2)
             {
                 QPixmap imagen("X2.png");
                 ui->label_7->setPixmap(imagen);
             }

             if(this->jugar.quienEmpieza == 1)
             {
                 QPixmap imagen("circulo1.jpg");
                 ui->label_7->setPixmap(imagen);
             }

             this->jugar.ganador = this->jugar.comprobarGanaP2();

             if(this->jugar.ganador == 1)
             {
                 QPixmap ganar("GanaP2.png");
                 ui->label_12->setPixmap(ganar);
                 ui->pushButton_1->setDisabled(true);
                 ui->pushButton_2->setDisabled(true);
                 ui->pushButton_3->setDisabled(true);
                 ui->pushButton_4->setDisabled(true);
                 ui->pushButton_5->setDisabled(true);
                 ui->pushButton_6->setDisabled(true);
                 ui->pushButton_7->setDisabled(true);
                 ui->pushButton_8->setDisabled(true);
                 ui->pushButton_9->setDisabled(true);
             }

             this->jugar.turnodelJugador = 1;
         }

         this->jugar.insertar = 0;
     }
}

void Gato::on_pushButton_8_clicked()
{
    this->jugar.dato = 8;

     if(this->jugar.turnodelJugador == 1)
        {
          this->jugar.insertar = this->jugar.jugador1();

          if(this->jugar.insertar == 1)
          {
              if(this->jugar.quienEmpieza == 1)
              {
                  QPixmap imagen("X2.png");
                  ui->label_8->setPixmap(imagen);
              }

              if(this->jugar.quienEmpieza == 2)
              {
                  QPixmap imagen("circulo1.jpg");
                  ui->label_8->setPixmap(imagen);
              }

              this->jugar.ganador = this->jugar.comprobarGanaP1();

              if(this->jugar.ganador == 1)
              {
                  QPixmap ganar("GanaP1.png");
                  ui->label_12->setPixmap(ganar);
                  ui->pushButton_1->setDisabled(true);
                  ui->pushButton_2->setDisabled(true);
                  ui->pushButton_3->setDisabled(true);
                  ui->pushButton_4->setDisabled(true);
                  ui->pushButton_5->setDisabled(true);
                  ui->pushButton_6->setDisabled(true);
                  ui->pushButton_7->setDisabled(true);
                  ui->pushButton_8->setDisabled(true);
                  ui->pushButton_9->setDisabled(true);
              }

              this->jugar.turnodelJugador = 2;
          }

          this->jugar.insertar = 0;
        }

     else
     {
         this->jugar.insertar = this->jugar.jugador2();

         if(this->jugar.insertar == 1)
         {
             if(this->jugar.quienEmpieza == 2)
             {
                 QPixmap imagen("X2.png");
                 ui->label_8->setPixmap(imagen);
             }

             if(this->jugar.quienEmpieza == 1)
             {
                 QPixmap imagen("circulo1.jpg");
                 ui->label_8->setPixmap(imagen);
             }

             this->jugar.ganador = this->jugar.comprobarGanaP2();

             if(this->jugar.ganador == 1)
             {
                 QPixmap ganar("GanaP2.png");
                 ui->label_12->setPixmap(ganar);
                 ui->pushButton_1->setDisabled(true);
                 ui->pushButton_2->setDisabled(true);
                 ui->pushButton_3->setDisabled(true);
                 ui->pushButton_4->setDisabled(true);
                 ui->pushButton_5->setDisabled(true);
                 ui->pushButton_6->setDisabled(true);
                 ui->pushButton_7->setDisabled(true);
                 ui->pushButton_8->setDisabled(true);
                 ui->pushButton_9->setDisabled(true);
             }

             this->jugar.turnodelJugador = 1;
         }

         this->jugar.insertar = 0;
     }
}

void Gato::on_pushButton_9_clicked()
{
    this->jugar.dato = 9;

     if(this->jugar.turnodelJugador == 1)
        {
          this->jugar.insertar = this->jugar.jugador1();

          if(this->jugar.insertar == 1)
          {
              if(this->jugar.quienEmpieza == 1)
              {
                  QPixmap imagen("X2.png");
                  ui->label_9->setPixmap(imagen);
              }

              if(this->jugar.quienEmpieza == 2)
              {
                  QPixmap imagen("circulo1.jpg");
                  ui->label_9->setPixmap(imagen);
              }

              this->jugar.ganador = this->jugar.comprobarGanaP1();

              if(this->jugar.ganador == 1)
              {
                  QPixmap ganar("GanaP1.png");
                  ui->label_12->setPixmap(ganar);
                  ui->pushButton_1->setDisabled(true);
                  ui->pushButton_2->setDisabled(true);
                  ui->pushButton_3->setDisabled(true);
                  ui->pushButton_4->setDisabled(true);
                  ui->pushButton_5->setDisabled(true);
                  ui->pushButton_6->setDisabled(true);
                  ui->pushButton_7->setDisabled(true);
                  ui->pushButton_8->setDisabled(true);
                  ui->pushButton_9->setDisabled(true);
              }

              this->jugar.turnodelJugador = 2;
          }

          this->jugar.insertar = 0;
        }

     else
     {
         this->jugar.insertar = this->jugar.jugador2();

         if(this->jugar.insertar == 1)
         {
             if(this->jugar.quienEmpieza == 2)
             {
                 QPixmap imagen("X2.png");
                 ui->label_9->setPixmap(imagen);
             }

             if(this->jugar.quienEmpieza == 1)
             {
                 QPixmap imagen("circulo1.jpg");
                 ui->label_9->setPixmap(imagen);
             }

             this->jugar.ganador = this->jugar.comprobarGanaP2();

             if(this->jugar.ganador == 1)
             {
                 QPixmap ganar("GanaP2.png");
                 ui->label_12->setPixmap(ganar);
                 ui->pushButton_1->setDisabled(true);
                 ui->pushButton_2->setDisabled(true);
                 ui->pushButton_3->setDisabled(true);
                 ui->pushButton_4->setDisabled(true);
                 ui->pushButton_5->setDisabled(true);
                 ui->pushButton_6->setDisabled(true);
                 ui->pushButton_7->setDisabled(true);
                 ui->pushButton_8->setDisabled(true);
                 ui->pushButton_9->setDisabled(true);
             }

             this->jugar.turnodelJugador = 1;
         }

         this->jugar.insertar = 0;
     }
}


void Gato::on_radioButton_1_clicked()
{
    ui->radioButton_2->setChecked(false);
}

void Gato::on_radioButton_2_clicked()
{
    ui->radioButton_1->setChecked(false);
}

void Gato::on_radioButton_3_clicked()
{
    ui->radioButton_4->setChecked(false);
}

void Gato::on_radioButton_4_clicked()
{
    ui->radioButton_3->setChecked(false);
}

void Gato::on_radioButton_5_clicked()
{
    ui->radioButton_6->setChecked(false);
}

void Gato::on_radioButton_6_clicked()
{
    ui->radioButton_5->setChecked(false);
}

void Gato::on_pushButton_clicked()
{
    if(ui->pushButton_1->isChecked() == false)
        ui->pushButton_1->setEnabled(true);

    if(ui->pushButton_2->isChecked() == false)
        ui->pushButton_2->setEnabled(true);

    if(ui->pushButton_3->isChecked() == false)
        ui->pushButton_3->setEnabled(true);

    if(ui->pushButton_4->isChecked() == false)
        ui->pushButton_4->setEnabled(true);

    if(ui->pushButton_5->isChecked() == false)
        ui->pushButton_5->setEnabled(true);

    if(ui->pushButton_6->isChecked() == false)
        ui->pushButton_6->setEnabled(true);

    if(ui->pushButton_7->isChecked() == false)
        ui->pushButton_7->setEnabled(true);

    if(ui->pushButton_8->isChecked() == false)
        ui->pushButton_8->setEnabled(true);

    if(ui->pushButton_9->isChecked() == false)
        ui->pushButton_9->setEnabled(true);

    QPixmap cuadroBlanco("cuadroBlanco.jpg");
    ui->label_1->setPixmap(cuadroBlanco);
    ui->label_2->setPixmap(cuadroBlanco);
    ui->label_3->setPixmap(cuadroBlanco);
    ui->label_4->setPixmap(cuadroBlanco);
    ui->label_5->setPixmap(cuadroBlanco);
    ui->label_6->setPixmap(cuadroBlanco);
    ui->label_7->setPixmap(cuadroBlanco);
    ui->label_8->setPixmap(cuadroBlanco);
    ui->label_9->setPixmap(cuadroBlanco);

    this->jugar.resetearDatos();


    if(ui->radioButton_1->isChecked() == true && ui->radioButton_3->isChecked() == true && ui->radioButton_5->isChecked() == true)
    {
       this->jugar.quienEmpieza = 2;

    }

    if(ui->radioButton_1->isChecked() == true && ui->radioButton_3->isChecked() == true && ui->radioButton_6->isChecked() == true)
    {
       this->jugar.quienEmpieza = 1;
    }

    if(ui->radioButton_1->isChecked() == true && ui->radioButton_4->isChecked() == true && ui->radioButton_5->isChecked() == true)
    {

    }

    if(ui->radioButton_1->isChecked() == true && ui->radioButton_4->isChecked() == true && ui->radioButton_6->isChecked() == true)
    {

    }

    if(ui->radioButton_2->isChecked() == true && ui->radioButton_3->isChecked() == true && ui->radioButton_5->isChecked() == true)
    {

    }

    if(ui->radioButton_2->isChecked() == true && ui->radioButton_3->isChecked() == true && ui->radioButton_6->isChecked() == true)
    {

    }

    if(ui->radioButton_2->isChecked() == true && ui->radioButton_4->isChecked() == true && ui->radioButton_5->isChecked() == true)
    {

    }

    if(ui->radioButton_2->isChecked() == true && ui->radioButton_4->isChecked() == true && ui->radioButton_6->isChecked() == true)
    {

    }
}

