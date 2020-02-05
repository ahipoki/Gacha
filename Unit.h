#include <iostream>
#include <cstring>

#ifndef UNIT_H
#define UNIT_H

class Unit
{
 public:
  Unit(char*, int, int);
  char* getName();
  int getHP();
  int getATK();
  virtual ~Unit();
 private:
  char* name;
  int HP;
  int ATK;
};

#endif
