#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Unit
{
  public:
    Unit(char*, int, int, int, int, int, int, int);
    char* getName();
    int getNP();
    int getLevel();
    int getHPFou();
    int getATKFou();
    int getSkillLvl1();
    int getSkillLvl2();
    int getSkillLvl3();
  private:
    char* name;
    int NP;
    int level;
    int HPFou;
    int ATKFou;
    int skillLvl1;
    int skillLvl2;
    int skillLvl3;
};


