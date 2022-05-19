#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), operateur("+")
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::optainValue(int value){
    if(is_reel){
        entrer = entrer + ((double)value / partie_reel);
        partie_reel *= 10;
    }else{
        entrer = entrer * 10 + value;
    }
}

void MainWindow::on_neuf_clicked(){
    optainValue(9);
    ui->afficheur->setText(QString::number(entrer));
}


void MainWindow::on_huit_clicked()
{
    optainValue(8);
    ui->afficheur->setText(QString::number(entrer));
}


void MainWindow::on_sept_clicked()
{
    optainValue(7);
    ui->afficheur->setText(QString::number(entrer));
}


void MainWindow::on_six_clicked()
{
    optainValue(6);
    ui->afficheur->setText(QString::number(entrer));
}



void MainWindow::on_cinq_clicked()
{
    optainValue(5);
    ui->afficheur->setText(QString::number(entrer));
}


void MainWindow::on_quatre_clicked()
{
    optainValue(4);
    ui->afficheur->setText(QString::number(entrer));
}

void MainWindow::on_trois_clicked()
{
    optainValue(3);
    ui->afficheur->setText(QString::number(entrer));
}


void MainWindow::on_deux_clicked()
{
    optainValue(2);
    ui->afficheur->setText(QString::number(entrer));
}


void MainWindow::on_un_clicked()
{
    optainValue(1);
    ui->afficheur->setText(QString::number(entrer));
}



void MainWindow::on_zero_clicked()
{
    optainValue(0);
    ui->afficheur->setText(QString::number(entrer));
}

void MainWindow::doOperation(QString ac_op){

    if(operateur == "+"){
        resultat += entrer;
    }else if(operateur == "-"){
        resultat -= entrer;
    }else if(operateur == "*"){
        resultat *= entrer;
    }else if(operateur == "/"){
        resultat /= entrer;
    }

    if(operateur == "="){
        operateur = "+";
    }else{
        operateur = ac_op;
    }

    entrer = 0;

    ui->afficheur->setText(QString::number(resultat));

    is_reel = false;
}

void MainWindow::on_plus_clicked(){
    doOperation("+");
}


void MainWindow::on_moins_clicked()
{
   doOperation("-");
}


void MainWindow::on_fois_clicked()
{
    doOperation("*");
}


void MainWindow::on_diviser_clicked()
{
    doOperation("/");
}


void MainWindow::on_egal_clicked()
{
    doOperation("=");
}


void MainWindow::on_supprime_clicked(){
    entrer = 0;
    optainValue(0);
    ui->afficheur->setText(QString::number(entrer));
}


void MainWindow::on_point_clicked()
{
    if(!is_reel){
        is_reel = true;
    }
}


void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}

