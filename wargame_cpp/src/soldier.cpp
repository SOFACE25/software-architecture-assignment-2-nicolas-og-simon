#include "soldier.hpp"

Soldier::Soldier(int health, int damage) : Unit(health), damage(damage)
{
}

void Soldier::attack(Unit &target)
{
    target.take_hit(damage);
}
void Soldier::heal(Unit &target)
{
    //soliders cant heal
}
