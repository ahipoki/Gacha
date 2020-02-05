#include <iostream>
#include <cstring>
#include <vector>
#include "Unit.h"

Unit::Unit(char* newName, int newNP, int newLevel, int newHPFou, int newATKFou, int newSkillLvl1, int newSkillLvl2, int newSkillLvl3)
{
    name = new char[strlen(newName)+1];
    strcpy(name, newName);
    NP = newNP;
    level = newLevel;
    HPFou = newHPFou;
    ATKFou = newATKFou;
    skillLvl1 = newSkillLvl1;
    skillLvl2 = newSkillLvl2;
    skillLvl3 = newSkillLvl3;
}

char* Unit::getName()
{
    return name;
}

int Unit::getNP()
{
    return NP;
}

int Unit::getLevel()
{
    return level;
}

int Unit::getHPFou()
{
    return HPFou;
}

int Unit::getATKFou()
{
    return ATKFou;
}

int Unit::getSkillLvl1()
{
    return skillLvl1;
}

int Unit::getSkillLvl2()
{
    return skillLvl2;
}

int Unit::getSkillLvl3()
{
    return skillLvl3;
}
