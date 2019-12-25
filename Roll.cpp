#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include "Roll.h"

using namespace std;

//int roll = rand()%100 + 1;

void getSSR()
{
  int unit = rand()%13+1;
  char* unitClass;
  if (unit == 1)
  {
    cout << "Class: Foreigner" << endl;
    cout << "Unit: Katsushika Hokusai" << endl;
  }
  else if (unit == 2)
  {
    cout << "Class: Saber" << endl;
    cout << "Unit: Artoria Pendragon" << endl;
  }
  else if (unit == 3)
  {
    cout << "Class: Saber" << endl;
    cout << "Unit: Atilla" << endl;
  }
  else if (unit == 4)
  {
    cout << "Class: Saber" << endl;
    cout << "Unit: Mordred" << endl;
  }
  else if (unit == 5)
  {
    cout << "Class: Archer" << endl;
    cout << "Unit: Orion" << endl;
  }
  else if (unit == 6)
  {
    cout << "Class: Archer" << endl;
    cout << "Unit: Nikola Tesla" << endl;
  }
  else if (unit == 7)
  {
    cout << "Class: Archer" << endl;
    cout << "Unit: Arjuna" << endl;
  }
  else if (unit == 8)
  {
    cout << "Class: Lancer" << endl;
    cout << "Unit: Karna" << endl;
  }
  else if (unit == 9)
  {
    cout << "Class: Lancer" << endl;
    cout << "Unit: Artoria Pendragon" << endl;
  }
  else if (unit == 10)
  {
    cout << "Class: Lancer" << endl;
    cout << "Unit: Enkidu" << endl;
  }
  else if (unit == 11)
  {
    cout << "Class: Rider" << endl;
    cout << "Unit: Francis Drake" << endl;
  }
  else if (unit == 12)
  {
    cout << "Class: Rider" << endl;
    cout << "Unit: Medb" << endl;
  }
  else if (unit == 13)
  {
    cout << "Class: Rider" << endl;
    cout << "Unit: Ozymandias" << endl;
  }
  else if (unit == 14)
  {
    cout << "Class: Rider" << endl;
    cout << "Unit: Quetzalcoatl" << endl;
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

void checkResult()
{
  int roll = rand()%100 +1;
  if (roll == 1)
  {
    getSSR();
  }
  else if (roll > 1 && roll <= 5)
  {
    get5CE();
  }
  else if (roll > 5 && roll <= 8)
  {
    getSR();
  }
  else if (roll > 8 && roll <= 20)
  {
    get4CE();
  }
  else if (roll > 20 && roll <= 60)
  {
    getR();
  }
  else
  {
    get3CE();
  }
}

void roll()
{
  //roll = rand()%100 +1;
  cout << "Roll: " << endl;
  checkResult();
}
