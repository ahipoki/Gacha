#include <iostream>
#include <cstring>

class Player
{
 public:
  Player(char*, int, int);
  char* getName();
  int getHP();
  int getATK();
  ~Player();
 private:
  char* name;
  int HP;
  int ATK;
};
