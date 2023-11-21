#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct point {
  int x, y;
};

enum itemType {
  Default = 0,
  Key = 1,
  Sword = 2,
  Potion = 3
};


struct Item {
  Item(itemType _type) {
    type = _type;
    switch (type)
    {
    case Default:
      name = "Default";
      break;
    case Key:
      name = "Key";
      break;
    case Sword:
      name = "Sword";
      break;
    case Potion:
      name = "Potion";
      break;
    default:
      break;
    }
  }
  string name;
  itemType type;
};