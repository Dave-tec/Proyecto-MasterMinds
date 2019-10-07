#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configuracion.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//////////////////////////////////////////
/// \brief MainWindow::on_Inicia_juego_clicked

void MainWindow::on_Inicia_juego_clicked()
{

}

/////////////////////////////////////////
/// \brief MainWindow::on_Termi_juego_clicked


void MainWindow::on_Termi_juego_clicked()
{

}

////////////////////////////////////////
/// \brief MainWindow::on_Deshacer_clicked

void MainWindow::on_Deshacer_clicked()
{

}

////////////////////////////////////////
/// \brief MainWindow::on_Guardar_clicked

void MainWindow::on_Guardar_clicked()
{

}

///////////////////////////////////////
/// \brief MainWindow::on_Ayuda_clicked

void MainWindow::on_Ayuda_clicked()
{

}

///////////////////////////////////////
/// \brief MainWindow::on_Cargar_clicked

void MainWindow::on_Cargar_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{
    Configuracion *configuracion = new Configuracion();
    configuracion->show();
    destroy();
}
