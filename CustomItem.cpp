#include "CustomItem.h"

using namespace std;

CustomItem::CustomItem(std::string size): IceCreamItem(size){
  //  if(size!="small"&&size!="medium"&&size!="large"){
  //return;
  //}
  //this->size=size;
  //this->toppings=new vector<top>;
  if(size=="small"){
   price=3.00;
  }
  else if(size=="medium"){
  price=5.00;
  }
  else if(size=="large"){
  price=6.50;
  }
}

CustomItem::~CustomItem(){
  toppings.clear();
  //  delete [] toppings;
}

double CustomItem::getPrice(){
  return price;
}

void CustomItem::addTopping(std::string topping){
  //  for(vector<top>::iterator i=toppings.begin();i<toppings.end();i++){
  for(size_t i=0;i<toppings.size();i++){
    if(toppings[i].name==topping){
      toppings[i].count=toppings[i].count+1;
      price=price+0.40;
      return;
    }
  }
  top t;
  t.name=topping;
  t.count=1;
  toppings.push_back(t);
  price=price+0.40;
}

std::string CustomItem::composeItem(){
  std::ostringstream oss;

  oss<<"Custom Size: "<<size<<"\n"
     <<"Toppings:"<<"\n";
// for(vector<top>::iterator i=toppings.begin();i<toppings.end();i++){
  //for(size_t i=0;i<toppings.size();i++){
  //oss<<toppings[i].name<<": "<<toppings[i].count<<" oz"<<"\n";
  //}
  if(toppings.size()!=0){
  top a[toppings.size()];
  for(size_t i=0;i<toppings.size();i++){
    a[i]=toppings[i];
  }
  sort(a,toppings.size());
  for(size_t i=0;i<toppings.size();i++){
    oss<<a[i].name<<": "<<a[i].count<<" oz"<<"\n";
  }
  }
  oss<<"Price: $"<<std::fixed<<std::setprecision(2)<<this->getPrice()<<"\n";
  return oss.str();
}

void CustomItem::sort(top *a, size_t size){
  top temp;
  bool swapped;
  for(size_t i=size-1; i>0; i--){
    swapped=false;
    for(int j=0;j<1;j++){
      if((a[j].name).compare(a[j+1].name)>0){
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	swapped=true;
      }
    }
    if(!swapped){
      return;
    }
  }
}
