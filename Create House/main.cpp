/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.50f, 0.25f);    // x, y
	glVertex2f(0.0f, 0.60f);
	glVertex2f(0.50f,  0.25f);

	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f); // Green

	glVertex2f(-0.50f, 0.25f);    // x, y
	glVertex2f(-0.50f, -0.50f);
	glVertex2f(0.50f, -0.50f);    // x, y
	glVertex2f(0.50f, 0.25f);

	glEnd();

    glBegin(GL_QUADS);//
    glColor3ub(232, 133, 20);//rgb color picker

    glVertex2f(0.10f, -0.05f);    // x, y
	glVertex2f(0.10f, -0.50f);
	glVertex2f(-0.10f, -0.50f);
	glVertex2f(-0.10f, -0.05f);
	glEnd();

	glBegin(GL_QUADS);//
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow

    glVertex2f(0.20f, 0.07f);    // x, y
	glVertex2f(0.20f, -0.07f);
	glVertex2f(0.35f, -0.07f);
	glVertex2f(0.35f, 0.07f);
	glEnd();

	glBegin(GL_QUADS);//
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow

    glVertex2f(-0.20f, 0.07f);    // x, y
	glVertex2f(-0.20f, -0.07f);
	glVertex2f(-0.35f, -0.07f);
	glVertex2f(-0.35f, 0.07f);
	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Create House");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
