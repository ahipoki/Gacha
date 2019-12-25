#include <iostream>
#include <cstring>
#include "Room.h"

using namespace std;

Printable::~Printable()
{
  delete[] this->description;
  delete[] this->name;
}

void Printable::print()
{
  cout << CC_BLD << CC_BLU << (this->name) << CC_CLR << endl;
  cout << (this->description) << endl;
}

void Printable::init(char const* name, char const* description)
{
  this->description = new char[strlen(description)+1];
  this->name = new char[strlen(name)+1];
  strcpy(this->description, description);
  strcpy(this->name, name);
}

void Room::printUnit()
{
  cout << CC_GRN << "Units: " << CC_CLR;
  vector<Unit*>::iterator it = this->units.begin();
  while (it != this->units.end())
  {
    cout << ((*it)->name) << " ";
    it++;
  }
  cout << endl;
}

void Room::deleteUnit(Unit* toDelete)
{
  vector<Unit*>::iterator it = this->units.begin();
  while (it != this->units.end())
  {
    if ((*it) == toDelete)
    {
      this->units.erase(it);
      return;
    }
    it++;
  }
}
