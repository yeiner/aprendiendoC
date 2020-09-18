// Include Standard Headers 
#include <stdio.h>
#include <stdlib.h>

//Include GLEW. 
#include <GL/glew.h>
#include <GLFW/glfw3.h>

//Mathematics 3D
//GLM
#include <glm/glm.hpp>

using namespace glm;

int main(){
	//initialize GLWF
	if( !glfwInit() ) {
		fprintf( stderr, "Error al inicializar GLFW\n" );
		return -1;
	}
	
	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//Create a window and your context OpenGl
	GLFWwindow* window;
	window = glfwCreateWindow( 1024, 768, "Tuto 01", NULL, NULL);
	if( window == NULL ) {
		fprintf( stderr, "Falla al abrir una ventana GLFW. Si usted tiene una GPU Intel, está no es compatible con 3.3 Intente con la versión 2.1\n" );
		glfwTerminate();
		return -1;
	}
	
	glfwMakeContextCurrent(window); // Inicializar GLEW
	glewExperimental=true; // Se necesita en el perfil de base.
	if (glewInit() != GLEW_OK) {
    		fprintf(stderr, "Falló al inicializar GLEW\n");
	    return -1;
	}

	// Capturar la tecla ESC cuando sea presionada
	glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

	do{
		// No vamos a pintar nada, nos vemos en el tutorial 2 !

		// Intercambiar buffers
		glfwSwapBuffers(window);
		glfwPollEvents();

	} // Revisar que la tecla ESC fue presionada y cerrar la ventana
	while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
			glfwWindowShouldClose(window) == 0 );
}
