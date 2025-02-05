#include "combat_medic.hpp"

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{
}

void CombatMedic::heal(Unit &target)
{
    int current_health = target.get_health();
    if (current_health <= 0)
    {
        //cant heal if target is dead.
    }
    else
    {
        target.set_health(current_health + 10);
    }
}