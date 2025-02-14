#ifndef OPENGL_WINDOW
#define OPENGL_WINDOW

#include <iostream>
#include <GLFW/glfw3.h>

class OpenGLWindow {
private:
    int height;
    int width;
    std::string name;
    GLFWwindow* window;
public:
    OpenGLWindow(
        const std::string& name,
        int height,
        int width
    ) : name(name), height(height), width(width), window(nullptr) {};

    ~OpenGLWindow(){
        if(this->checkWindow()) {
            glfwDestroyWindow(this.window);
        }
        glfwTerminate();
    };

    void initialize(){
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        this.window = glfwCreateWindow(this.width, this.height, this.name.c_str(), NULL, NULL);
    };

    void makeCurrentContext() {
        glfwMakeContextCurrent(this.window);
    };

    bool checkWindow() {
        return this.window != nullptr;
    };
};

#endif