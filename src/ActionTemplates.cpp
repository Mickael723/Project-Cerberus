#include "../header/ActionTemplates.h"

void AttackAction::performAction(Humanoid& target) {
        damageTarget(target);
}

void AttackAction::damageTarget(Humanoid& target) {
    if (target.getPersonalEffects().checkBlocking()) {
        target.setHealthPoints(target.getHealthPoints() - (attackPotency * 0.50));
    }
    else {
        target.setHealthPoints(target.getHealthPoints() - attackPotency);
    }
    target.updateIsAlive();
}

