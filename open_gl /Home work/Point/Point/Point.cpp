#include <glut.h>

void renderScene(void) 
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);// Покраска экрана 
	glPointSize(10);
	glBegin(GL_POINTS);
	glColor3d(1, 1, 0);// вторая точка
	glVertex3d(0, 0, 0);
	glColor3d(1, 1, .5);// третья точка
	glVertex3d(-0.5, 0.5, 0);
	glEnd();
	glutSwapBuffers();
}

int main(int argc, char **argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Point");
	glutDisplayFunc(renderScene);
	glutMainLoop();
	return 1;
}