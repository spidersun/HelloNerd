#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "NeedlesHall.h"
using namespace std;
NeedlesHall::NeedlesHall(int site, Textdisplay* board):
 NonProperty(false,"NeedlesHall",site, board){
}
void NeedlesHall::method(Player* p){
 int n = getNumRoll();
 if(n == 0){
 }else{
  int x = rand()%1-100;
  if(x == 1){
   cout << "Congrats! You've received a Tim Cup!" << endl;
   setNumRoll(n-1);
   p->receiveCup();
  }
 }
 int y = rand()%1-18;
 if(y==1){
  y= -200;
 }else if(y>=2&&y<=3){
  y= -100;
 }else if(y>=4&&y<=6){
  y= -50;
 }else if(y>=7&&y<=12){
  y=25;
 }else if(y>=13&&y<=15){
  y=50;
 }else if(y>=16&&y<=17){
  y=100;
 }else{
  y=200;
 }
 if(y>0){
  cout<<"You lost "<<y <<" dollars !"<<endl;
 }else{
  cout<<"You get "<<y<<" dollars !"<<endl;
 }
 p->changeBalance(y);
}
NeedlesHall::~NeedlesHall(){}