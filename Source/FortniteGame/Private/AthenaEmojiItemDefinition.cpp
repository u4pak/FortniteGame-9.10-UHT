#include "AthenaEmojiItemDefinition.h"

void UAthenaEmojiItemDefinition::ConfigureParticleSystem(UParticleSystemComponent* ParticleSystem, TSoftObjectPtr<UTexture2D> OverrideImage) {
}

UAthenaEmojiItemDefinition::UAthenaEmojiItemDefinition() {
    this->FrameIndex = 0;
    this->FrameCount = 1;
    this->BaseMaterial = NULL;
    this->LifetimeIntroSeconds = 0.00f;
    this->LifetimeMidSeconds = 0.00f;
    this->LifetimeOutroSeconds = 0.00f;
    this->GeneratedMaterial = NULL;
}

