#include <glut.h>
void renderSceneLine(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glColor3d(1, 0, 0);
	glVertex2d(-0.45, -0.4);
	glVertex2d(0.4, 0.4);
	glColor3d(1, 1, 0);
	glVertex2d(0.45, -0.4);
	glVertex2d(0.4, 0.4);
	glEnd();
	glutSwapBuffers();
}
int main(int argc, char **argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Line");
	glutDisplayFunc(renderSceneLine);
	glutMainLoop();
	return 1;
}