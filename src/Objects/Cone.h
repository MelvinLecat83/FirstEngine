#pragma once
#include "Shape.h"

class Cone : public Shape
{
private:
    float radius;
    float height;
    
public:
    Cone();
    Cone(float radius, float height);
    Cone(float radius, float height, int color[3]);
    Cone(float radius, float height, float _gravity, Vector _linearVelocity, Vector _angularVelocity,
        Vector _linearAcceleration, int color[3]);
    
    

    float getRadius()
    {
        return radius;
    }

    float getHeight()
    {
        return height;
    }

    /**
* @brief Draw the cone
*
*/
    void draw();
    
};
