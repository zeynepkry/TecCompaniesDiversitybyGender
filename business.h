#pragma once

#include <QString>
#include <iostream>
#include <string>
using namespace std;
//base calss of teccompany
class Business{
protected:
  QString name;


public:
  Business();
  void SetName(QString s);
  QString GetName();

};

