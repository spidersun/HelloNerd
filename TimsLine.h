#ifndef __TIMSLINE_H__
#define __TIMSLINE_H__
#include <map>
#include "NonProperty.h"
class TimsLine: public NonProperty{
	public:
TimsLine(int site,Textdisplay* board);
void method(Player* p);
};
#endif
