#include <iostream>
#include <cstring>
#include "Unit.h"

Unit::Unit(char* newName, int newHP, int newATK)
{
  name = new char[strlen(newName)+1];
  strcpy(name, newName);
  HP = newHP;
  ATK = newATK;
}

char* Unit::getName()
{
  return name;
}

int Unit::getHP()
{
  return HP;
}

int Unit::getATK()
{
  return ATK;
}

Unit::~Unit()
{
  delete []name;
}
