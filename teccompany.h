#ifndef TECCOMPANY_H
#define TECCOMPANY_H
#include "business.h"
#include <QString>
//subclass of bussiness, contains women percentage of companies
class TecCompany : public Business{
public:
    TecCompany(QString companyName, float perc);
    void SetPercentage(float d);
    float GetPercentage();

private:
    float percentage;

};

#endif // TECCOMPANY_H
