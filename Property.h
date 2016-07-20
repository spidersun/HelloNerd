#include "Building.h"
class Property: public Building{
 bool Academic;
 Player* owner;
 int price;
 bool mortgaged;
	public:
 Property(bool Academic, int price);
 Player* getOwner();
 void setOwner(Player* p);
 void removeOwner();
 int getPrice();
 void changeMort();
 bool getMort();
 virtual int getFee();
 virtual void notify() = 0;
 virtual int getValue();
}


