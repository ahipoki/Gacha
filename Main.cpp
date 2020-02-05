#include <iostream>
#include <cstring>
#include <vector>
#include "Unit.h"

void strupper(char* str);
void box(vector<Unit*>*uListU);
void fight();
void add(vector<Unit*>*uListU);
void deleteUnit(vector<Unit*>*uListU);
void search(vector<Unit*>*uListU);

int main()
{
    char input[80];
    vector<Unit*> uList;
    vector<Unit*>*uListU = &uList;
    while (true){
        cout << "Do you want to fight, manage your box, or quit?" << endl;
        cin.getline(input, 80);
        strupper(input);
        if (strcmp(input, "FIGHT") == 0){
            fight();
        }
        else if (strcmp(input, "BOX") == 0){
            box(uListU);
        }
        else if (strcmp(input, "QUIT") == 0){
            return false;
        }
        else{
            cout << "That's an invalid option" << endl;
        }
    }
}

void strupper(char* str){
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        str[i] = toupper(str[i]);
    }
}

void fight()
{
    cout << "Fight!" << endl;
}

void box(vector<Unit*>*uListU){
    char input[80];
    cout << "Do you want to add a unit, delete a unit, or search your box for a unit?" << endl;
    cin.getline(input, 80);
    strupper(input);
    if (strcmp(input, "ADD") == 0){
        add(uListU);
        cin.clear();
        cin.ignore(999, '\n');
    }
    else if (strcmp(input, "DELETE") == 0){
        deleteUnit(uListU);
        cin.clear();
    }
    else if (strcmp(input, "SEARCH") == 0){
        search(uListU);
        cin.clear();
    }
    else{
        cout << "That's an invalid option" << endl;
    }
}

void deleteUnit(vector<Unit*>*uListU){
    bool stillDeleting = true;
    while (stillDeleting == true){
        vector<Unit*>::iterator uListIt;
        char nameInput[80];
        cout << "What is the unit's name?" << endl;
        cin.getline(nameInput, 80);
        for (uListIt = uListU->begin(); uListIt != uListU->end();){
            if (strcmp((*uListIt)->getName(), nameInput) == 0){
                cout << "Name: " << (*uListIt)->getName() << ", NP Level: " << (*uListIt)->getNP() << ", Level: " << (*uListIt)->getLevel() << ", HP Fous: " << (*uListIt)->getHPFou() << ", ATK Fous: " << (*uListIt)->getATKFou() << ", Skill Level 1: " << (*uListIt)->getSkillLvl1() << ", Skill Level 2: " << (*uListIt)->getSkillLvl2() << ", Skill Level 3: " << (*uListIt)->getSkillLvl3() << endl;
            }
            cout << "Are you sure you want to delete this?" << endl;
            char confirmDelete[80];
            cin.getline(confirmDelete, 80);
            strupper(confirmDelete);
            if (strcmp(confirmDelete, "YES") == 0){
                delete *uListIt;
                uListIt = uListU->erase(uListIt);
                stillDeleting = false;
            }
            else if (strcmp(confirmDelete, "NO") == 0){
                cout << "You cancelled the deletion" << endl;
                ++uListIt;
                stillDeleting = true;
            }
            else{
                cout << "That's an invalid option" << endl;
                stillDeleting = true;
            }
        }
    }
}

void search(vector<Unit*>*uListU){
    vector<Unit*>::iterator uListIt;
    char nameInput[80];
    cout << "What is the unit's name?" << endl;
    cin.getline(nameInput, 80);
    for (uListIt = uListU->begin(); uListIt != uListU->end(); ++uListIt){
        if (strcmp((*uListIt)->getName(), nameInput) == 0){
            cout << "Name: " << (*uListIt)->getName() << ", NP Level: " << (*uListIt)->getNP() << ", Level: " << (*uListIt)->getLevel() << ", HP Fous: " << (*uListIt)->getHPFou() << ", ATK Fous: " << (*uListIt)->getATKFou() << ", Skill Level 1: " << (*uListIt)->getSkillLvl1() << ", Skill Level 2: " << (*uListIt)->getSkillLvl2() << ", Skill Level 3: " << (*uListIt)->getSkillLvl3() << endl;
        }
    }
}

void add(vector<Unit*>*uListU){
    char tempName[80];
    int tempNP;
    int tempLevel;
    int tempHPFou;
    int tempATKFou;
    int tempSkillLvl1;
    int tempSkillLvl2;
    int tempSkillLvl3;
    cout << "What is the unit's name?" << endl;
    cin.getline(tempName, 80);
    cout << "What is the unit's NP Level?" << endl;
    cin >> tempNP;
    cin.clear();
    cin.ignore(999, '\n');
    cout << "What is the unit's level?" << endl;
    cin >> tempLevel;
    cin.clear();
    cin.ignore(999, '\n');
    cout << "How many HP fous does they have?" << endl;
    cin >> tempHPFou;
    cin.clear();
    cin.ignore(999, '\n');
    cout << "How many ATK fous does they have?" << endl;
    cin >> tempATKFou;
    cin.clear();
    cin.ignore(999, '\n');
    cout << "What level is their first skill?" << endl;
    cin >> tempSkillLvl1;
    cin.clear();
    cin.ignore(999, '\n');
    cout << "What level is their second skill?" << endl;
    cin >> tempSkillLvl2;
    cin.clear();
    cin.ignore(999, '\n');
    cout << "What level is their third skill?" << endl;
    cin >> tempSkillLvl3;
    uListU->push_back(new Unit(tempName, tempNP, tempLevel, tempHPFou, tempATKFou, tempSkillLvl1, tempSkillLvl2, tempSkillLvl3));
}
