#pragma once
#include "Vector.h"

/**
 * @brief An abstract class that represents a game object and set global properties
 * 
 */
class GameObject
{
public:
    int color[3] = {255, 255, 255};
    Vector position;
    float inversedMass = 1;

    of3dPrimitive shape;

    GameObject();
    float calculateDistance(GameObject* other);
    void setPosition(Vector newPosition);
    float getMass();
    float getInversedMass();
    void setMass(float m);
};
