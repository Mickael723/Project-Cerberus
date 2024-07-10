#include "../header/ActionTemplates.h"

void AttackAction::performAction(Humanoid& target) {
    if (target.checkIsAlive()) {
        damageTarget(target);
    }
}

void AttackAction::damageTarget(Humanoid& target) {
    target.setHealthPoints(target.getHealthPoints() - attackPotency);
    target.updateIsAlive();
}