#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "teccompany.h"
#include "companysystem.h"

#include <QFile>
using namespace std;
//initializing reference in constructor
MainWindow::MainWindow(CompanySystem& _companySystem, QWidget *parent)
    : companySystem(_companySystem)
    , QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSearch_Company_triggered()
{

}

//takes the input and send it to the function that returns company information QString
void MainWindow::on_pushButton_clicked()
{
    QString uText;
    uText = ui->textEdit->toPlainText();
    ui->label->setText(companySystem.GetCompanyInfo(uText));
}


void MainWindow::on_pushButton_2_clicked()
{

}

//a QString vector created to collect all company names in a big QString to print in the window
void MainWindow::on_pushButton_3_clicked(){
    std::vector<QString> theList;
    for (TecCompany comp : companySystem.companies){
        theList.push_back(companySystem.GetCompanyInfo(comp.GetName()));
    }
    QString labelText;
    for(auto &val:theList){
        labelText += val + " \r\n";
    }
    ui->label->setText(labelText);
}


void MainWindow::on_label_linkActivated(const QString &link)
{

}

