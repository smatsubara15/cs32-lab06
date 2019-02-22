#include "PreMadeItem.h"

using namespace std;

PreMadeItem::PreMadeItem(std::string name, std::string size):IceCreamItem(size){
  this->name=name;
  if(size=="small"){
    price=4.00;
  }
  else if(size=="medium"){
    price=6.00;
  }
  else if(size=="large"){
    price=7.50;
  }
}

PreMadeItem::~PreMadeItem(){
}

double PreMadeItem::getPrice(){
  return price;
}

std::string PreMadeItem::composeItem(){
  std::ostringstream oss;

  oss<<"Pre-made Size: "<<size<<"\n"
     <<"Pre-made Item: "<<name<<"\n"
     <<"Price: $"<<std::fixed<<std::setprecision(2)<<price<<"\n";
  return oss.str();
}
