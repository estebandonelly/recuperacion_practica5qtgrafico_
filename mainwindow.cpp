#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

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

void MainWindow::on_boton1_clicked()
{
    nombre = ui->textonombre->text();
    edad = ui->edad->value();
    nivel = ui->nivel->currentText();

    ui->radio1->s;

    informacion = "Nombre: "+nombre+"\n"+"Edad: "+QString::number(edad)+"\n"+"Nivel educativo: "+nivel;

    QMessageBox::information(this, "Caption", informacion);

}
