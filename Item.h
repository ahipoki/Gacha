#include <iostream>
#include <cstring>

class Item
{
  public:
    Item(char*);
    char* getName();
    char* itemName;
  private:
    char* name;
};
