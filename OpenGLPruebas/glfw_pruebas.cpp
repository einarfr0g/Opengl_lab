#include <GLFW/glfw3.h>
#include <iostream>

void framebuffer_size_callback(GLFWwindow* window,int width,int height){
    glViewport(0,0,width,height);
}

void processInput(GLFWwindow *window){
    if(glfwGetKey(window,GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window,true);
}

int main(void)
{
    //GLFW setup
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);


    //GLFW Window create
    GLFWwindow* window = glfwCreateWindow(800, 600,"LearningOpengl",NULL,NULL);
    if (window == NULL){
        std::cout<<"Failed to create GLFW window"<<"\n";
        glfwTerminate();
        return -1;
    }
    //aply setup to the window
    glfwMakeContextCurrent(window);

    //size managment
    glfwSetFramebufferSizeCallback(window,framebuffer_size_callback);

    //Render loop
    while(!glfwWindowShouldClose(window)){
        //input process  
        processInput(window);

        //artifacts managment
        glfwSwapBuffers(window);

        //Events managment
        glfwPollEvents();    
    }

    //Clearing allocated memory.
    glfwTerminate();
    
    
    return 0;
}