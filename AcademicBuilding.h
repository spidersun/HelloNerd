#ifndef __ACADEMICBUILDING_H__
#define __ACADEMICBUILDING_H__
#include "Property.h"


class AcademicBuilding:public Property{
 int improveCost;
 int improveCount;
 int tuition[6];
 std::string block;
putlic:
 AcademicBuilding(int price,int improveCost, int tuition[], std::string lock,std::string name, int site, Textdisplay* board);
 int getImproveCount();
 int getImproveCost();
 int getFee();
 int getValue();
 void improve();
 void setImproveCount(int n);
 std::string getblock();
 void doublebase();
 void halfbase();
 void method(Player* p);
 
}	

#endif
