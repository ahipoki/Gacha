#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Item.h"
#include "Room.h"
#include "Roll.h"
//#include "Unit.h"
#include "Player.h"
//#include "Enemy.h"

using namespace std;

void strupper(char* str);
int wordLength(char*, int start);
Room* createRooms(vector<Room*> &rooms, vector<Unit*> &units);

int main() 
{
  srand (time(NULL));
  vector<Unit*> units;
  vector<Room*> cleanRooms;
  vector<Unit*> cleanUnits;
  Room* currentRoom = createRooms(cleanRooms, cleanUnits);
  bool playing = true;
  int FP = 0;
  //Friend points
  int SQ = 0;
  //Saint Quartz
  int PSQ = 0;
  //Paid Saint Quartz
  char input[80];
  cout << "Enter a command" << endl;
  while (playing == true)
  {
    while (cin.peek() == '\n')
    {
      cin.ignore();
    }
    cin.get(input, 100, '\n');

    int commandLength = wordLength(input, 0);
    char* command = new char[commandLength + 1];
    command[commandLength] = '\0';
    strncpy(command, input, commandLength);
    strupper(command);

    if (strcmp(command, "QUIT") == 0)
    {
      playing = false;
    }
    else if (strcmp(command, "ROLL") == 0)
    {
      std::cout << "Roll" << std::endl;
      Roll* roll = new Roll();
      //cout << "Roll" << endl;
      //roll->checkResult();
    }
    else if (strcmp(command, "BATTLE") == 0)
    {
      Player* player = new Player("Test", 1, 2);
      std::cout << "Battle" << std::endl;
      std::cout << "Name: " << player->getName() << std::endl;
      std::cout << "HP: " << player->getHP() << std::endl;
      std::cout << "ATK: " << player->getATK() << std::endl;
    }
  }
}

void strupper(char* str)
{
  int length = strlen(str);
  for (int i = 0; i < length; i++)
  {
    str[i] = toupper(str[i]);
  }
}

Room* createRooms(vector<Room*> &rooms, vector<Unit*> &units)
{
  Room* battle = new Room();
  battle->init("Battle Stage", "The battle screen");
  rooms.push_back(battle);
  Room* title = new Room();
  title->init("Title Screen", "The title screen");
  rooms.push_back(title);

  Unit* hokusai = new Unit();
  hokusai->init("Katsushika Hokusai", "Best Girl");
  battle->units.push_back(hokusai);
  units.push_back(hokusai);

  return battle;
}

int wordLength(char* array, int start)
{
  int index = start;
  int length = strlen(array);
  while (index < length && array[index] != ' ')
  {
    index++;
  }
  return (index - start);
}
