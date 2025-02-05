#include "combat_medic.h"

void combat_medic_heal(Unit *self, Unit *target)
{
    // Checks if the target is still alive (health > 0)
    if (unit_get_health(target) <= 0)
    {
        // Printing that he is gone if health <= 0. *We added "=" to make sure we test if he is dead
        // If he is dead he won't be able to "resurrect" him:
        printf("He is gone...");
    }
    else
    {
        printf("Hang in there!");
        unit_set_health(target, unit_get_health(target) + 10);
    }
}

void make_combat_medic(CombatMedic *self, int health, int damage)
{
    make_soldier(&self->inherited, health, damage);
    self->inherited.inherited.vt->heal_target = combat_medic_heal;
}
