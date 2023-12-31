﻿#pragma once
#include "GameObject.h"
#include "Quaternion.h"
#include "Vector.h"

/**
 * @brief A class that represents a rigid body and set the physics for a game object
 * 
 */
class RigidBody : public GameObject
{
public:
    Vector linearVelocity;
    Vector angularVelocity = Vector(10, 0, 0);
    Vector linearAcceleration;
    Vector angularAcceleration = Vector(0, 0, 0);
    Vector accumForce;
    Quaternion orientation_0 = Quaternion(1, 0, 0, 0);
    float gravity;
    Quaternion orientation = Quaternion(1, 0, 0, 0);
    Matrix tenseurJ = Matrix::zero();
    Matrix inversedTenseurJ = Matrix::zero();
    Vector torque = Vector(0,0,0);
    Vector massCenter = Vector(0, 0, 0);
    float colliderRadius;

    RigidBody();
    RigidBody(float gravity, Vector linearVelocity, Vector angularVelocity,
              Vector linearAcceleration);

    void eulerIntegration(float delta_t);
    void addForce(Vector force);
    void addForce(Vector force, Vector pointApplication);
    void clearAccum();

    void setPosition(Vector newPosition);
    float calculateDistance(GameObject* other);
    void setGravity(float gravity);
    float getGravity();
    void setAngularVelocity(Vector angularVelocity);
    void setLinearVelocity(Vector linearVelocity);
    void setAngularAcceleration(Vector angularAcceleration);
    void setLinearAcceleration(Vector linearAcceleration);
    void calculateAngularAcceleration();
    void updateInversedJ();
    void moveCenterMass(Vector translation);
};
