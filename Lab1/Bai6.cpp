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
//void drawRectangle(GLint x, GLint y, GLint width, GLint height) {
//	glBegin(GL_POLYGON);
//	glVertex2i(x, y);
//	glVertex2i(x + width, y);
//	glVertex2i(x + width, y + height);
//	glVertex2i(x, y + height);
//	glEnd();
//}
//
//void display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	GLint w = 400, h = 200;
//	GLint x = (screenWidth - w) / 2;
//	GLint y = (screenHeight - h) / 2;
//	glColor3f(1.0, 0.0, 0.0);
//
//	drawRectangle(x, y, w, h);
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
