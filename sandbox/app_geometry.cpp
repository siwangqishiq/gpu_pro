#include "purple.h"
#include "app_geometry.h"

std::shared_ptr<Mesh> GeometryHelper::createMeshCube(){
    return nullptr;
}

void AppGeometry::onInit(){
    purple::Log::i("AppGeometry","onInit");
}

void AppGeometry::onTick(){
    purple::Log::i("AppGeometry","onTick");
}

void AppGeometry::onDispose(){
    purple::Log::i("AppGeometry","onDispose");
}
