// Lab_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"


const int screenWidth = 640;
const int screenHeight = 480;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
}
void glCircle(GLint x, GLint y, GLint radius) {
	glBegin(GL_POLYGON);
	glVertex2i(x, y);
	GLint v = 1;

	for (int i = 1; i <= 360; i++) {
		glVertex2i(x +(radius * sin(i)), y + (radius * cos(i)));
		if (i % 2 ==0) {
			glColor3f(1.0, 0.0 ,0.0);
		}
		else if(i % 3 ==0)
		{
			glColor3f(0.0, 1.0, 0.0);
		}

		else {
			glColor3f(0.0, 0.0, 1.0);

		}
	}

	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glCircle(320, 240, 150);


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
	glutCreateWindow("Point");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}


