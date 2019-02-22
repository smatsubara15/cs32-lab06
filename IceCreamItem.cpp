#include "IceCreamItem.h"

IceCreamItem::IceCreamItem(std::string size){
  //if(size!="small"&&size!="medium"&&size!="large")
  this->size=size;
}

//std::string IceCreamItem::composeItem(){
//std::ostringstream oss;

  //oss<<"Size: "<<size<<"\n"
    // <<"Price: "<<price<<"\n";
  //return oss.str();
  //}

double IceCreamItem::getPrice(){
  return price;
}
