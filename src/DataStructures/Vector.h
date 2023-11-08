﻿#pragma once
#include <ofMain.h>

class Vector
{
public:
    glm::vec2 v2() { return glm::vec2(x, y); }
    glm::vec2 v3() { return glm::vec3(x, y, z); }

    float x, y, z, w;

    // Constructors
    Vector();
    Vector(float x, float y);
    Vector(float x, float y, float z);
    Vector(float x, float y, float z, float w);

    // Operators
    Vector operator +(Vector v);
    Vector operator +=(Vector v);
    Vector operator -(Vector v);
    Vector operator -=(Vector v);
    // Scalar product
    float operator *(Vector v); 
    float operator *=(Vector v);
    // Multiplication by scalar
    Vector operator *(float k); 
    Vector operator *=(float k);
    
    std::string to_string();

    // Methods
    static Vector zero();
    static Vector oneX();
    static Vector oneY();
    static Vector oneZ();
    Vector opposite();
    float magnitude();
    float squaredMagnitude();
    float distance(Vector other);
    Vector normalized();
    Vector vectorialProduct(Vector w);
};