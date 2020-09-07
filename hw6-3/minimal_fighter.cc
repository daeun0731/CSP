#include "minimal_fighter.h"

MinimalFighter::MinimalFighter(){
    mHp=0;
    mPower=0;
    mStatus=Invalid;
}

MinimalFighter::MinimalFighter(int _hp, int _power){
    mHp=_hp;
    mPower=_power;
    if (mHp<=0) {
        mStatus=Dead;
    }
    else {
        mStatus=Alive;
    }
}

int MinimalFighter::hp() const {
    return mHp;
}

int MinimalFighter::power() const {
    return mPower;
}

FighterStatus MinimalFighter::status() const {
    return mStatus;
}

void MinimalFighter::setHp(int _hp){
    mHp=_hp;
    if (mHp<=0){
        mStatus=Dead;
    }
}

void MinimalFighter::hit(MinimalFighter * _enemy){
 	if (status() == Alive && _enemy->status() == Alive) {
		_enemy->setHp(_enemy->mHp - mPower);
		setHp(mHp - _enemy->mPower);
	}
}

void MinimalFighter::attack(MinimalFighter * _target){
	if (status() == Alive) {
		_target->setHp(_target->mHp - mPower);
		mPower = 0;
	}
}

void MinimalFighter::fight(MinimalFighter * _enemy){
	while (status() == Alive && _enemy->status() == Alive) {
		_enemy->setHp(_enemy->mHp - mPower);
		setHp(mHp - _enemy->mPower);
	}
}
