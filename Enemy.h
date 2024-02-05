#pragma once
#include <Novice.h>

class Enemy {
protected:
    int pos_;
    int speed_;
    int radius_;

public:
    Enemy(int pos, int speed, int radius)
        : pos_(pos), speed_(speed), radius_(radius) {}

    virtual void Update() = 0;
    virtual void Draw() = 0;
};

