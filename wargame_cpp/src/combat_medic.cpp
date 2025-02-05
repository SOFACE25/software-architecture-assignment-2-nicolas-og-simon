#include "combat_medic.hpp"

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{
}

// Implementation of the pure-virtual heal function:
void CombatMedic::heal(Unit &target)
{
    // Saving the current health from the target that the CombatMedic wishes to heal
    int current_health = target.get_health();

    // Checks if the target is already dead.
    if (current_health <= 0)
    {
        // Can't heal the target if it is already dead.
    }
    // If the target is not dead:
    else
    {
        // Incrementing the health of the target by 10:
        target.set_health(current_health + 10);
    }
}