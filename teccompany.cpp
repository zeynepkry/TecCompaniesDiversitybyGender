#include "teccompany.h"

#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>


TecCompany::TecCompany(QString companyName, float percentage){

    name = companyName;
    this->percentage = percentage;

}
void TecCompany:: SetPercentage(float d){
        percentage = d;
}
float TecCompany::GetPercentage(){
    return percentage;
}
