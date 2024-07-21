#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() {
	// Initialize GLFW
	glfwInit();
	
	// Stating version of GLFW
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	// Stating usage of CORE profile
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create a GLFWwindow
	GLFWwindow* window = glfwCreateWindow(800, 800, "OpenGLProject", NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	// Loads GLAD
	gladLoadGL();
	glViewport(0, 0, 800, 800);

	// Setting Background Color
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	// Clears the back buffer and sets new color
	glClear(GL_COLOR_BUFFER_BIT);
	// Swaps the back and front buffer
	glfwSwapBuffers(window);

	// Main loop
	while (!glfwWindowShouldClose(window)) {
		// Processes GFLW events
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}