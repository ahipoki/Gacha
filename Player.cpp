#include <iostream>
#include <cstring>
#include "Player.h"

Player::Player(char* newName, int newHP, int newATK)
{
  name = new char[strlen(newName)+1];
  strcpy(name, newName);
  HP = newHP;
  ATK = newATK;
}

char* Player::getName()
{
  return name;
}

int Player::getHP()
{
  return HP;
}

int Player::getATK()
{
  return ATK;
}

Player::~Player()
{
  delete []name;
}
