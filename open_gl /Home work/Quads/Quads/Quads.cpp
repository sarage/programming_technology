#include <glut.h>
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
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(0, 1, 0);
	glBegin(GL_QUADS);
	glVertex3f(-0.5f, 0.5f, 0.0f);  // Слева вверху
	glVertex3f(0.5f, 0.5f, 0.0f);  // Справа вверху
	glVertex3f(0.5f, -0.5f, 0.0f);  // Справа внизу
	glVertex3f(-0.5f, -0.5f, 0.0f);  // Слева внизу
	glEnd();

	glutSwapBuffers();
}
int main(int argc, char **argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 400);
	glutCreateWindow("Quads");
	glutReshapeFunc(changeSize);
	glutDisplayFunc(renderScene);
	glutMainLoop();
}