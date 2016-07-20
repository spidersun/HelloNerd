#ifdef   __BUILDING_H__
#define  __BUILDING_H__
#include <vector>
#include "Player.h"
#include "TextDisplay.h"
#include "Board.h"
class Building {
 bool ownable;
 std::string name;
 int site;
 std::vector <Player*> curplayer;
 BoardDisplay* display;
 Board* board;
	public:
 Building(bool ownable, std::string name, int site, TextDisplay* board);
 std::string getName();
 bool getOwn();
 void setPlayer(Player* p);
 void removePlayer(Player* p);
 void notify();
}
#endif