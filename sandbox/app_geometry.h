#pragma once

#include <memory>
#include <vector>
#include "purple.h"
#include "glm/common.hpp"

struct Vertex{
    glm::vec3 pos;
    glm::vec3 normal;
    glm::vec2 uv;
};

struct Material{
    std::string id;
    std::string name;
    glm::vec4 color;
};

struct Mesh{
    std::string name;
    std::vector<Vertex> vertices;
};

class GeometryHelper{
public:
    static std::shared_ptr<Mesh> createMeshCube();
};

class Camera{
public:
    Camera(){}
    
    ~Camera(){}
};

class AppGeometry : public purple::IApp{
public:
    virtual void onInit() override;
    virtual void onTick() override;
    virtual void onDispose() override;

private:
};