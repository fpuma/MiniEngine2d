#pragma once

#include <engine/ecs/base/entity.h>
#include <application/commondefinitions.h>


namespace puma::app
{
    class ITextureManager;
}

void initTest();

void setCamera();
void initWindow();
void initPhysics();

puma::Entity spawnFloor( puma::app::ITextureManager* _textureManager );
void unspawnFloor( puma::Entity _floorEntity );

puma::Entity spawnBall( puma::app::ITextureManager* _textureManager );
void unspawnBall( puma::Entity _floorEntity );
