//// Lab_1.cpp : Defines the entry point for the console application.
////
//
#include "stdafx.h"
//#include "Dependencies\glew\glew.h"
//#include "Dependencies\freeglut\freeglut.h"
//
//
//const int screenWidth = 640;
//const int screenHeight = 480;
//
//void init(void)
//{
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//}
//void display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	GLint size = 200;
//	GLint x = (screenWidth - size) / 2;
//	GLint y = (screenHeight - size) / 2;
//	glColor3f(1.0, 0.0, 0.0);
//
//	glBegin(GL_POLYGON);
//	glVertex3f(x, y, 0.0);
//	glVertex3f(x + size, y, 0.0);
//	glVertex3f(x + size, y + size, 0.0);
//	glVertex3f(x, y + size, 0.0);
//	glEnd();
//
//	glFlush();
//}
//void reshape(int w, int h)
//{
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
//	glMatrixMode(GL_MODELVIEW);
//}
//int main(int argc, char **argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutInitWindowSize(screenWidth, screenHeight);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow("Point");
//	init();
//	glutDisplayFunc(display);
//	glutReshapeFunc(reshape);
//	glutMainLoop();
//	return 0;
//}
//
//
