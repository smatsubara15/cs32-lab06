#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include "IceCreamItem.h"
#include <string>
#include <iterator>
#include <map>
#include <vector>

class CustomItem: public IceCreamItem{
 public:
  CustomItem(std::string size);
  virtual ~CustomItem();
  virtual double getPrice();
  void addTopping(std::string topping);
  virtual std::string composeItem();
 private:
  struct top{
    std::string name;
    int count;
  };
  void sort(top *a, size_t size); 
  std::vector<top> toppings;
};

#endif
  
