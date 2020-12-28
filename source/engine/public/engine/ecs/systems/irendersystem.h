#pragma once

#include <application/commondefinitions.h>

#include <engine/ecs/base/entity.h>
#include <engine/ecs/base/isystem.h>

namespace puma
{
    namespace app
    {
        class IRenderer;
    }

    constexpr u32 kConcurrentTexturePool = 500;

    class IRenderSystem : public ISystem
    {
    public:

        virtual ~IRenderSystem() {}

        virtual void init( app::Extent _windowExtent, const char* _windowName ) = 0;

        virtual app::IRenderer* getRenderer() = 0;
        virtual const app::IRenderer* getRenderer() const = 0;

        virtual void    setCameraEntity( Entity _cameraEntity ) = 0;
        virtual Entity  getCameraEntity() const = 0;

        virtual void registerEntity( Entity _entity ) = 0;
        virtual void unregisterEntity( Entity _entity ) = 0;
    };
}