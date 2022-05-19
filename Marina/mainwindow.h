#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_neuf_clicked();

    void on_huit_clicked();

    void on_sept_clicked();

    void on_six_clicked();

    void on_cinq_clicked();

    void on_quatre_clicked();

    void on_trois_clicked();

    void on_deux_clicked();

    void on_un_clicked();

    void on_plus_clicked();

    void on_zero_clicked();

    void on_moins_clicked();

    void on_fois_clicked();

    void on_diviser_clicked();

    void on_egal_clicked();

    void on_supprime_clicked();

    void on_point_clicked();

    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

private:

    void doOperation(QString ac_op);
    void optainValue(int value);

private:
    Ui::MainWindow *ui;

    double entrer = 0;
    double resultat = 0;

    QString operateur;

    bool is_reel = false;
    long partie_reel = 10;
};
#endif // MAINWINDOW_H
