/*********************************************************************
** Program name: Fantasy Combat Tournament
** Author: Devin Gendron
** Date: 3/5/18
** Description: Using dice rolls, have characters battle it out... in
** a tournament!
*********************************************************************/
#include "Medusa.h"
#include <iostream>
//default constructor
Medusa::Medusa()
{
    //attributes
    attack = 0;             //attack
    defense = 0;            //defense
    armor = 3;              //armor
    strengthPoints = 8;    //strength
    name = "Medusa";
    type = "Medusa";
}

//overload constructor

//destructor
Medusa::~Medusa()
{

}

//functions
void Medusa::characteristics()     //characteristics
{
    std::cout << "Scrawny lady with snakes for hair which helps her during combat. Just don’t look at her!" << std::endl;
}

int Medusa::rollAttack()           //roll attack
{
    int rollOne = 0;
    int rollTwo = 0;
    //int glare = 99999;

    //std::cout << "Rolling for attack!..." << std::endl;
    rollOne = (rand() % 6 + 1);
    //std::cout << "First roll was: " << rollOne << std::endl;
    rollTwo = (rand() % 6 + 1);
    //std::cout << "Second roll was: " << rollTwo << std::endl;
    attack = rollOne + rollTwo;
    if (attack == 12)
    {
        specialAbility();
        return attack;
    }
    else
    {
        return attack;
    }
}
int Medusa::rollDefense()          //roll defense
{
    int rollOne = 0;

    //std::cout << "Rolling for defense!..." << std::endl;
    rollOne = (rand() % 6 + 1);
    //std::cout << "First roll was: " << rollOne << std::endl;
    defense = rollOne;

    return defense;
}

void Medusa::specialAbility()
{
    int glare = 99999;
    if (strengthPoints > 0)
    {
        //std::cout << "Medusa used glare! She turned her opponent to stone!" << std::endl;
        attack = glare;
    }
}
void Medusa::recovery()
{
    int healthVar = 8;
    int healthRec = 0;
    int healthRange = 0;
    int hpHealed = 0;

    if(healthVar == strengthPoints)
    {
        std::cout << "No Recovery needed!" << std::endl;
    }
    else
    {
        healthRange = healthVar - strengthPoints;

        std::cout << "Recovering health..." << std::endl;
        healthRec = (rand() % healthRange + 1);
        hpHealed = strengthPoints + healthRec;
        heal(hpHealed);
        std::cout << healthRec << " recovered." << std::endl;
        if (strengthPoints == healthVar)
        {
            std::cout << "Full Recovery!!" << std::endl;
        }
        else
        {
            std::cout << "Health is now " << strengthPoints << "!" << std::endl;
        }
    }
}