#include "configuracion.h"
#include "ui_configuracion.h"

Configuracion::Configuracion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Configuracion)
{
    ui->setupUi(this);
}

Configuracion::~Configuracion()
{
    delete ui;
}
