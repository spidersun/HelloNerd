#ifndef __COLLECTOSAP_H__
#define __COLLECTOSAP_H__
#include "NonProperty.h"
class CollectOSAP: public NonProperty{
	public:
CollectOSAP(int site, TextDisplay* board);
void method(Player* p);
}
#endif