#include "business.h"

#include <QString>
//Bussines
Business::Business(){
    name= "";
}
void Business::SetName(QString s){
        name = s;
}
QString Business:: GetName(){
        return name;
}


