#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <QMainWindow>

namespace Ui {
class Configuracion;
}

class Configuracion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Configuracion(QWidget *parent = nullptr);
    ~Configuracion();

private:
    Ui::Configuracion *ui;
};

#endif // CONFIGURACION_H
