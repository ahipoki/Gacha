#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Item.h"

using namespace std;

void getSSR();
void getSR();
void getR();
void get5CE();
void get4CE();
void get3CE();

int main() 
{
  srand (time(NULL));
  int roll = rand()%100 + 1;
  cout << "Roll: " << roll << endl;
  if (roll == 1)
  {
    getSSR();
  }
  else if (roll > 1 && roll <= 5)
  {
    cout << "5* CE" << endl;
    get5CE();
  }
  else if (roll > 5 && roll <= 8)
  {
    cout << "SR Servant" << endl;
    getSR();
  }
  else if (roll > 8 && roll <= 20)
  {
    cout << "4* CE" << endl;
    get4CE();
  }
  else if (roll > 20 && roll <= 60)
  {
    cout << "3* Servant" << endl;
    getR();
  }
  else
  {
    cout << "3* CE" << endl;
    get3CE();
  }
  
  return 0;
}

void getSSR()
{
  int unit = rand()%13+1;
  char* unitClass;
  if (unit == 1)
  {
    cout << "Class: Saber" << endl;
  }
  else if (unit == 2)
  {
    cout << "Class: Archer" << endl;
  }
  else if (unit == 3)
  {
    cout << "Class: Lancer" << endl;
  }
  else if (unit == 4)
  {
    cout << "Class: Rider" << endl;
  }
  else if (unit == 5)
  {
    cout << "Class: Caster" << endl;
  }
  else if (unit == 6)
  {
    cout << "Class: Assassin" << endl;
  }
  else if (unit == 7)
  {
    cout << "Class: Berserker" << endl;
  }
  else if (unit == 8)
  {
    cout << "Class: Shielder" << endl;
  }
  else if (unit == 9)
  {
    cout << "Class: Ruler" << endl;
  }
  else if (unit == 10)
  {
    cout << "Class: Avenger" << endl;
  }
  else if (unit == 11)
  {
    cout << "Class: Moon Cancer" << endl;
  }
  else if (unit == 12)
  {
    cout << "Class: Alter Ego" << endl;
  }
  else
  {
    cout << "Class: Foreigner" << endl;
  }
}

void getSR()
{
  int unit = rand()%13+1;
  char* unitClass;
  if (unit == 1)
  {
    cout << "Class: Saber" << endl;
  }
  else if (unit == 2)
  {
    cout << "Class: Archer" << endl;
  }
  else if (unit == 3)
  {
    cout << "Class: Lancer" << endl;
  }
  else if (unit == 4)
  {
    cout << "Class: Rider" << endl;
  }
  else if (unit == 5)
  {
    cout << "Class: Caster" << endl;
  }
  else if (unit == 6)
  {
    cout << "Class: Assassin" << endl;
  }
  else if (unit == 7)
  {
    cout << "Class: Berserker" << endl;
  }
  else if (unit == 8)
  {
    cout << "Class: Shielder" << endl;
  }
  else if (unit == 9)
  {
    cout << "Class: Ruler" << endl;
  }
  else if (unit == 10)
  {
    cout << "Class: Avenger" << endl;
  }
  else if (unit == 11)
  {
    cout << "Class: Moon Cancer" << endl;
  }
  else if (unit == 12)
  {
    cout << "Class: Alter Ego" << endl;
  }
  else
  {
    cout << "Class: Foreigner" << endl;
  }
}

void getR()
{
  int unit = rand()%13+1;
  char* unitClass;
  if (unit == 1)
  {
    cout << "Class: Saber" << endl;
  }
  else if (unit == 2)
  {
    cout << "Class: Archer" << endl;
  }
  else if (unit == 3)
  {
    cout << "Class: Lancer" << endl;
  }
  else if (unit == 4)
  {
    cout << "Class: Rider" << endl;
  }
  else if (unit == 5)
  {
    cout << "Class: Caster" << endl;
  }
  else if (unit == 6)
  {
    cout << "Class: Assassin" << endl;
  }
  else if (unit == 7)
  {
    cout << "Class: Berserker" << endl;
  }
  else if (unit == 8)
  {
    cout << "Class: Shielder" << endl;
  }
  else if (unit == 9)
  {
    cout << "Class: Ruler" << endl;
  }
  else if (unit == 10)
  {
    cout << "Class: Avenger" << endl;
  }
  else if (unit == 11)
  {
    cout << "Class: Moon Cancer" << endl;
  }
  else if (unit == 12)
  {
    cout << "Class: Alter Ego" << endl;
  }
  else
  {
    cout << "Class: Foreigner" << endl;
  }
}

void get5CE()
{
  int unit = rand()%13+1;
  char* unitClass;
  if (unit == 1)
  {
    cout << "Class: Saber" << endl;
  }
  else if (unit == 2)
  {
    cout << "Class: Archer" << endl;
  }
  else if (unit == 3)
  {
    cout << "Class: Lancer" << endl;
  }
  else if (unit == 4)
  {
    cout << "Class: Rider" << endl;
  }
  else if (unit == 5)
  {
    cout << "Class: Caster" << endl;
  }
  else if (unit == 6)
  {
    cout << "Class: Assassin" << endl;
  }
  else if (unit == 7)
  {
    cout << "Class: Berserker" << endl;
  }
  else if (unit == 8)
  {
    cout << "Class: Shielder" << endl;
  }
  else if (unit == 9)
  {
    cout << "Class: Ruler" << endl;
  }
  else if (unit == 10)
  {
    cout << "Class: Avenger" << endl;
  }
  else if (unit == 11)
  {
    cout << "Class: Moon Cancer" << endl;
  }
  else if (unit == 12)
  {
    cout << "Class: Alter Ego" << endl;
  }
  else
  {
    cout << "Class: Foreigner" << endl;
  }
}

void get4CE()
{
  int unit = rand()%13+1;
  char* unitClass;
  if (unit == 1)
  {
    cout << "Class: Saber" << endl;
  }
  else if (unit == 2)
  {
    cout << "Class: Archer" << endl;
  }
  else if (unit == 3)
  {
    cout << "Class: Lancer" << endl;
  }
  else if (unit == 4)
  {
    cout << "Class: Rider" << endl;
  }
  else if (unit == 5)
  {
    cout << "Class: Caster" << endl;
  }
  else if (unit == 6)
  {
    cout << "Class: Assassin" << endl;
  }
  else if (unit == 7)
  {
    cout << "Class: Berserker" << endl;
  }
  else if (unit == 8)
  {
    cout << "Class: Shielder" << endl;
  }
  else if (unit == 9)
  {
    cout << "Class: Ruler" << endl;
  }
  else if (unit == 10)
  {
    cout << "Class: Avenger" << endl;
  }
  else if (unit == 11)
  {
    cout << "Class: Moon Cancer" << endl;
  }
  else if (unit == 12)
  {
    cout << "Class: Alter Ego" << endl;
  }
  else
  {
    cout << "Class: Foreigner" << endl;
  }
}

void get3CE()
{
  int unit = rand()%13+1;
  char* unitClass;
  if (unit == 1)
  {
    cout << "Class: Saber" << endl;
  }
  else if (unit == 2)
  {
    cout << "Class: Archer" << endl;
  }
  else if (unit == 3)
  {
    cout << "Class: Lancer" << endl;
  }
  else if (unit == 4)
  {
    cout << "Class: Rider" << endl;
  }
  else if (unit == 5)
  {
    cout << "Class: Caster" << endl;
  }
  else if (unit == 6)
  {
    cout << "Class: Assassin" << endl;
  }
  else if (unit == 7)
  {
    cout << "Class: Berserker" << endl;
  }
  else if (unit == 8)
  {
    cout << "Class: Shielder" << endl;
  }
  else if (unit == 9)
  {
    cout << "Class: Ruler" << endl;
  }
  else if (unit == 10)
  {
    cout << "Class: Avenger" << endl;
  }
  else if (unit == 11)
  {
    cout << "Class: Moon Cancer" << endl;
  }
  else if (unit == 12)
  {
    cout << "Class: Alter Ego" << endl;
  }
  else
  {
    cout << "Class: Foreigner" << endl;
  }
}
