#include <iostream>
#include <cstring>
#include "Item.h"

Item::Item(char* newName)
{
  name = new char[strlen(newName)+1];
  strcpy(name, newName);
}

char* Item::getName()
{
  return itemName;
}
