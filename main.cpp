#include "gato.h"
#include "bienvenida.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Bienvenida w;
    w.show();

    return a.exec();
}
