#pragma once
#include "Objects/Particle.h"
#include "Forces/ParticleForceGenerator.h"

class ParticleRod : public ParticleForceGenerator
{
public:
    float k;
    float length;
    Particle *particle1, *particle2;
    ParticleRod(float k, float length, Particle* particle1, Particle* particle2);
    void updateForce(Particle* particle, float duration) override;
};