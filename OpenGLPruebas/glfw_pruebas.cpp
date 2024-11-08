#include <GLFW/glfw3.h>
#include <iostream>

void framebuffer_size_callback(GLFWwindow* window,int width,int height){
        glViewport(0,0,width,height);
}

int main(void)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600,"LearningOpengl",NULL,NULL);
    if (window == NULL){
        std::cout<<"Failed to create GLFW window"<<"\n";
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    glfwSetFramebufferSizeCallback(window,framebuffer_size_callback);

    glViewport(0,0,600,450);
    
    return 0;
}