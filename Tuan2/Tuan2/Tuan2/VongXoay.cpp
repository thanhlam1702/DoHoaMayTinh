// Lab_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"

#define PI 3.14159265358979323846

const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}
void glCircle(float radius) {
	glBegin(GL_POINTS);
	/*glVertex2i(x, y);
	GLint v = 1;

	for (int i = 1; i <= 360; i++) {
		glVertex2i(x + (radius * sin(i)), y + (radius * cos(i)));
	}*/
	int Count = 1024;
	for (int i = 0; i < Count; i++) {
		float theta = 360 * PI * i / Count;
		float x = (screenWidth / 2) + (radius / Count) * i *(sin(-theta));
		float y = (screenHeight / 2) + (radius / Count) * i *(cos(-theta));
		glVertex3f(x, y, 0);
		glColor3f(((float)rand()) / (float)RAND_MAX, ((float)rand()) / (float)RAND_MAX, ((float)rand()) / (float)RAND_MAX);
	}
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);
	glColor3f(1.0, 1.0, 1.0);
	glCircle(204.8);
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}