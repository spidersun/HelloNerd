#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "GooseNesting.h"
using namespace std;
GooseNesting::GooseNesting(int site, TextDisplay* board){
 Nonproperty(false, "goose",site, board);
}

void TimsLine::method(Player* p){
 cout<<"ATTACKED BY GOOSE!"<<endl;
}
