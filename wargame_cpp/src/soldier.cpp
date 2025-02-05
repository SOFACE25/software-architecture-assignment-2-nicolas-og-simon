#include "soldier.hpp"

Soldier::Soldier(int health, int damage) : Unit(health), damage(damage)
{
}

// Implementation of the virtual function attack from class Unit:
void Soldier::attack(Unit &target)
{
    // Affecting the damage from a soldier to the target.
    // So after this the new health of the target will be: get_health() - damage
    target.take_hit(damage);
}
void Soldier::heal(Unit &target)
{
    // Soldiers are not able to heal. Therefore just a default implementation.
}
