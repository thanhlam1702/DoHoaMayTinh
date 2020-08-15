#include "stdafx.h"

#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"

static float alpha = 0;
static float beta = 0;
int doiChieu = 1;
float speed = 0.05f;
void	 DisplayFunc(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0, 0, -10);
	glRotatef(beta, 1, 0, 0);
	glRotatef(alpha, 0, 1, 0);
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0); glVertex3f(-1, -1, -1);
	glColor3f(0, 0, 1); glVertex3f(-1, -1, 1);
	glColor3f(0, 1, 1); glVertex3f(-1, 1, 1);
	glColor3f(0, 1, 0); glVertex3f(-1, 1, -1);

	glColor3f(1, 0, 0); glVertex3f(1, -1, -1);
	glColor3f(1, 0, 1); glVertex3f(1, -1, 1);
	glColor3f(1, 1, 1); glVertex3f(1, 1, 1);
	glColor3f(1, 1, 0); glVertex3f(1, 1, -1);

	glColor3f(0, 0, 0); glVertex3f(-1, -1, -1);
	glColor3f(0, 0, 1); glVertex3f(-1, -1, 1);
	glColor3f(1, 0, 1); glVertex3f(1, -1, 1);
	glColor3f(1, 0, 0); glVertex3f(1, -1, -1);

	glColor3f(0, 1, 0); glVertex3f(-1, 1, -1);
	glColor3f(0, 1, 1); glVertex3f(-1, 1, 1);
	glColor3f(1, 1, 1); glVertex3f(1, 1, 1);
	glColor3f(1, 1, 0); glVertex3f(1, 1, -1);

	glColor3f(0, 0, 0); glVertex3f(-1, -1, -1);
	glColor3f(0, 1, 0); glVertex3f(-1, 1, -1);
	glColor3f(1, 1, 0); glVertex3f(1, 1, -1);
	glColor3f(1, 0, 0); glVertex3f(1, -1, -1);

	glColor3f(0, 0, 1); glVertex3f(-1, -1, 1);
	glColor3f(0, 1, 1); glVertex3f(-1, 1, 1);
	glColor3f(1, 1, 1); glVertex3f(1, 1, 1);
	glColor3f(1, 0, 1); glVertex3f(1, -1, 1);
	glEnd();
	alpha = alpha + speed*doiChieu;
	//beta = beta + speed*doiChieu;
	glFlush();
	glutSwapBuffers();

	glutPostRedisplay();
}

void ReshapeFunc(int width, int height)
{
	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();
	gluPerspective(20, width / (float)height, 5, 15);
	glViewport(0, 0, width, height);
	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay();
}
void KeyboardFunc(unsigned char key, int x, int y)
{
	int foo;
	printf("%c", key);
	foo = x + y;
	if ('q' == key || 'Q' == key || 27 == key)
		exit(0);
	if ('e' == key || 'E' == key) {
		if (doiChieu == -1) {
			doiChieu = 1;
		}
		else
		{
			doiChieu = -1;
		}
	}
	if ('a' == key || 'A' == key) {
		speed -= 0.02;
	}
	if ('d' == key || 'D' == key) {
		speed += 0.02;
	}
	
	
}
int
main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Spinning cube");

	glClearColor(0, 0, 0, 0);
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(&DisplayFunc);
	glutReshapeFunc(&ReshapeFunc);
	glutKeyboardFunc(&KeyboardFunc);
	glutMainLoop();
	return 0;
}