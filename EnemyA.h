#pragma once
#include "Enemy.h"

class EnemyA : public Enemy {
public:
    EnemyA(int pos, int speed, int radius)
        : Enemy(pos, speed, radius) {}

    void Update() override {
 
        pos_ += speed_;
        if (pos_ < 0 || pos_ > 1280) {
            speed_ *= -1;
        }
    }

    void Draw() override {
        Novice::DrawEllipse(pos_, 360, radius_, radius_,0.0f,RED,kFillModeSolid);
    }
};
