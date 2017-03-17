#include <glut.h>

GLfloat rtri;
void changeSize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1, 1, -1, 1);
	glMatrixMode(GL_MODELVIEW);
}

void renderScene(void)
{
	glLoadIdentity();
	glRotatef(rtri, .5f, 0.2f, 0.0f);

	GLUquadricObj *quadObj;

	quadObj = gluNewQuadric(); 
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	glColor3d(.7, 0.2, 0.2);
	gluQuadricDrawStyle(quadObj, GLU_FILL); 

	gluSphere(quadObj, .5, 20, 20); // рисуем сферу
	glColor3d(0, 0, 0);
	glRotated(45, .5, 5, 5); // поворачиваем
	gluCylinder(quadObj, .75, 0.75, 0.01, 50, 50);
	glPopMatrix();

	gluDeleteQuadric(quadObj);
	rtri += 0.2f;
	glutSwapBuffers();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 400);
	glutCreateWindow("Quads");
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(renderScene);
	glutMainLoop();
}
