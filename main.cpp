#include "mainwindow.h"
#include "teccompany.h"
#include <QApplication>
#include <QDebug>
using namespace std;
static std::map<string, float> a;

int main(int argc, char *argv[]){
    CompanySystem companySystem;
    companySystem.ReadCompanyInfoFromTextFile();
    QApplication a(argc, argv);
    qDebug()<< "hello";
    MainWindow w(companySystem);
    w.show();
    return a.exec();
}
