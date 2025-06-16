#include <iostream> // For console output
#include <GLFW/glfw3.h> // Include the GLFW header

int main() {
    std::cout << "Starting Arena Ascendant Engine..." << std::endl;

    // 1. Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1; // Indicate error
    }

    // Optional: Configure GLFW for specific OpenGL/Vulkan versions if you plan to use them.
    // For now, let's just get a window.
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // Use core profile for modern OpenGL

    // 2. Create a window
    // Parameters: width, height, title, monitor (for fullscreen), share context
    GLFWwindow* window = glfwCreateWindow(800, 600, "Arena Ascendant Engine", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate(); // Clean up GLFW resources
        return -1; // Indicate error
    }

    // Make the window's context current on the calling thread
    glfwMakeContextCurrent(window);

    // 3. The Main Loop (Event handling and rendering placeholder)
    // Loop until the user closes the window or presses ESC
    while (!glfwWindowShouldClose(window)) {
        // --- Input Processing (Placeholder) ---
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, true); // Close window on ESC
        }

        // --- Rendering (Placeholder) ---
        // Clear the screen with a color (e.g., light blue)
        glClearColor(0.2f, 0.3f, 0.5f, 1.0f); // RGBA
        glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer

        // Swap the front and back buffers (double buffering)
        glfwSwapBuffers(window);

        // Poll for and process events (like window closing, key presses)
        glfwPollEvents();
    }

    // 4. Clean up GLFW resources
    glfwTerminate();
    std::cout << "Engine shutdown complete." << std::endl;
    return 0; // Indicate success
}
