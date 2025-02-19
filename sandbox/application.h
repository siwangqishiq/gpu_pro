#pragma once
#include <string>

#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"
#include <memory>
#include "purple.h"

class Application{
public:
    const std::string TAG = "SandBoxApp";
    //init application
    void init();

    void onCreate();
    
    // main loop
    void runLoop();
    
    //on app close
    void dispose();

    //show debug info
    void showDebugInfo();
    
    //run this app
    int execute(){
        init();
        runLoop();
        dispose();
        return 0;
    }

    void tick();

    static int fps;
private:
    GLFWwindow* window = nullptr;
    int screenWidth = 1280;
    int screenHeight = 800;
    
    std::vector<std::shared_ptr<purple::IApp>> appInstanceList;

    std::wstring fpsStr = L"";
};

