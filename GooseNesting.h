#ifndef __GOOSENESTING_H__
#define __GOOSENESTING_H__
#include <map>
#include "NonProperty.h"
class GooseNesting: public NonProperty{
	public:
GooseNesting(int site, TextDisplay* board);
void method(Player* p);
}
#endif