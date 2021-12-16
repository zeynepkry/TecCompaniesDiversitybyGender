#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "companysystem.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(CompanySystem& _companySystem, QWidget *parent = nullptr);
    ~MainWindow();

    friend class CompanySystem;

private slots:
    void on_actionSearch_Company_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_label_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;

    CompanySystem& companySystem;
};
#endif // MAINWINDOW_H
