#include "companysystem.h"
#include "teccompany.h"
#include "QDebug"
#include <QFile>
#include <QTextStream>
#include <fstream>

CompanySystem::CompanySystem(){

}
//gets a company and adds to the vector
void CompanySystem::AddCompanies(TecCompany company){
    companies.push_back(company);
}
//reads company names an percentages of women from a text file and calls AddCompanies function to store data in vector
void CompanySystem::ReadCompanyInfoFromTextFile(){

        std::ifstream Ifile("/Users/zeynepkiray/GenderDiversityTecCom/companies.txt");
        try{
            if(!Ifile.is_open())
            throw "could not open file";
        }catch(const char* msg){
            cout<<msg;
            return;
        }
        qInfo()<<"Reading file";
        string info1;
        float num1;
        while( Ifile >> info1 >>num1 ){
                qCritical()<< info1.data() << " "<< num1 <<"\r\n";
                TecCompany Company(QString::fromStdString(info1),num1);
                AddCompanies(Company);
        }
}
//checks if the first letter of the company is upper case
bool firstUpper(string& uText){
    return uText.size() && std::isupper(uText[0]);
}
//gets companyName to check if the file contains the information of the company
//returns QString name and percentage of the company or an error message
// used exeption handling to check if its upper case and
QString CompanySystem::GetCompanyInfo(QString companyName){
   try {
        string s = companyName.toStdString();
         if(!firstUpper(s)){
             throw "Please use upper case for the first letter";
         }
    }  catch (const char* msg) {
        return msg;
    }

    for (TecCompany comp : companies){
        if (comp.GetName() == companyName){
            QString info = "Name: "+ comp.GetName() +"\r\n"+ "Percentage of women:  "+ QString::number(comp.GetPercentage());
            return info;
        }
    }

    return "Could not find company";
}
//prints all companies stored in the vector with a for loop
void CompanySystem::ListAllCompanies(){
    for (TecCompany comp : companies){
        qDebug() << comp.GetName() << " " << comp.GetPercentage() << "\n";
    }
}
