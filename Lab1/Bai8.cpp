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
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glShadeModel(GL_FLAT);
//}
//void display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0, 1.0, 1.0);
//	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//
//	glBegin(GL_TRIANGLES);
//	/*glVertex3f(350.0, 250.0, 0.0);
//	glVertex3f(200.0, 50.0, 0.0);
//	glVertex3f(100.0, 150.0, 0.0);
//
//	glVertex3f(350.0, 250.0, 0.0);
//	glVertex3f(200.0, 50.0, 0.0);
//	glVertex3f(300.0, 100.0, 0.0);*/
//
//	glVertex3f(50.0, 50.0, 0.0);
//	glVertex3f(200.0, 50.0, 0.0);
//	glVertex3f(100.0, 150.0, 0.0);
//
//	glVertex3f(300.0, 100.0, 0.0);
//	glVertex3f(450.0, 150.0, 0.0);
//	glVertex3f(350.0, 250.0, 0.0);
//
//	glEnd();
//
//	glBegin(GL_TRIANGLE_STRIP);
//	glVertex3f(50.0, 50.0, 0.0);
//	glVertex3f(100.0, 150.0, 0.0);
//	glVertex3f(200.0, 50.0, 0.0);
//
//	glVertex3f(350.0, 250.0, 0.0);
//	glVertex3f(300.0, 100.0, 0.0);
//	glVertex3f(450.0, 150.0, 0.0);
//
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
//}
//int main(int argc, char **argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutInitWindowSize(screenWidth, screenHeight);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow("argv[0]");
//	init();
//	glutDisplayFunc(display);
//	glutReshapeFunc(reshape);
//	glutMainLoop();
//	return 0;
//}
//
//
