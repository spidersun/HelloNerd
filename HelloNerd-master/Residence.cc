#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Residence.h"
using namespace std;
Residence::Residence(string name,int site, Textdisplay* board):
 Property(false, 200,name,site,board){
}
int Residence::getFee(int numOwn){
 if(numOwn == 1){
  return 25;
 }else if(numOwn == 2){
  return 50;
 }else if(numOwn == 3){
  return 100;
 }else{
  return 200;
 }
}

int Residence::getValue(){
 return 200;
}
void Residence::method(Player *p){
 if(getOwner() == nullptr){
 	cout << "This residence is empty, do you want to purchase it?"<<endl;
 	cout << "[Y/N]" << endl;
 
 string s;
 while(cin>>s){
 	if(s == "Y"){
 		cout << "you have pruchased this property!"<<endl;
 		p->purchase(getName());
 		return;
 	}else if(s =="N"){
 		p->auction(getName(),getSite());
 		return;
 	}else{}
  }
 }else{
 	Player *pyr = getOwner();
 	int n = pyr->getNumOwn("res");
 	int fee = getFee(n);
 	cout << "land at res, you need to pay "<<fee <<endl;
 	p->changeBalance(-fee);
 	return;
 }
}
int Residence::getImproveCost(){
 return 0;
}
string Residence::getblock(){
 return "";
}
