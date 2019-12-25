#pragma once
#include <vector>
#include <map>

#define CC_BLD "\033[1m"
#define CC_BLU "\033[34m"
#define CC_GRN "\033[32m"
#define CC_CLR "\033[0m"
#define CC_CYN "\033[36m"

using namespace std;

class Printable
{
  public:
    ~Printable();
    char* description;
    char* name;
    void print();
    void init(char const* name, char const* description);
};

class Unit : public Printable
{

};

class Room : public Printable
{
  public:
    void printUnit();
    void deleteUnit(Unit* toDelete);
    map<char, Room*> rooms;
    vector<Unit*> units;
};
