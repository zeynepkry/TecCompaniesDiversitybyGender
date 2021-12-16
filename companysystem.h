#pragma once

#include <vector>
#include <QString>

class TecCompany;
//i use this class to put companies together in a vector and file input/output
class CompanySystem{
public:
    CompanySystem();

    void AddCompanies(TecCompany company);

    void ReadCompanyInfoFromTextFile();

    QString GetCompanyInfo(QString companyName);

    void ListAllCompanies();

    std::vector<TecCompany> companies;
};
