#include <glut.h>
GLfloat rquad;

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
	
	glLoadIdentity();
	glRotatef(rquad, 0.0f, 1.0f, 0.0f);        // Вращение по оси X

	glBegin(GL_QUADS);                      // Начнем
	glColor3f(0.0f, 1.0f, 0.0f);              // Синий
	glVertex3f(.5f, .5f, -.5f);          // Право верх квадрата (Верх)
	glVertex3f(-.5f, .5f, -.5f);          // Лево верх
	glVertex3f(-.5f, .5f, .5f);          // Лево низ
	glVertex3f(.5f, .5f, .5f);          // Право низ

	glColor3f(1.0f, 0.5f, 0.0f);              // Оранжевый
	glVertex3f(0.5f, -.5f, 0.5f);          // Верх право квадрата (Низ)
	glVertex3f(-.5f, -.5f, 0.5f);          // Верх лево
	glVertex3f(-.5f, -.5f, -0.5f);          // Низ лево
	glVertex3f(.5f, -.5f, -0.5f);          // Низ право

	glColor3f(1.0f, 0.0f, 0.0f);              // Красный
	glVertex3f(.5f, .5f, .5f);          // Верх право квадрата (Перед)
	glVertex3f(-.5f, .5f, .5f);          // Верх лево
	glVertex3f(-.5f, -.5f, .5f);          // Низ лево
	glVertex3f(.5f, -.5f, .5f);          // Низ право

	glColor3f(1.0f, 1.0f, 0.0f);              // Желтый
	glVertex3f(.5f, -.5f, -.5f);          // Верх право квадрата (Зад)
	glVertex3f(-.5f, -.5f, -.5f);          // Верх лево
	glVertex3f(-.5f, .5f, -.5f);          // Низ лево
	glVertex3f(.5f, .5f, -.5f);          // Низ право

	glColor3f(0.0f, 1.0f, 0.0f);              // Синий
	glVertex3f(-0.5f, 0.5f, .5f);          // Верх право квадрата (Лево)
	glVertex3f(-0.5f, 0.5f, -.5f);          // Верх лево
	glVertex3f(-0.5f, -0.5f, -.5f);          // Низ лево
	glVertex3f(-0.5f, -0.5f, .5f);          // Низ право

	glColor3f(1.0f, 0.0f, 1.0f);              // Фиолетовый
	glVertex3f(0.5f, 0.5f, -.5f);          // Верх право квадрата (Право)
	glVertex3f(0.5f, 0.5f, .5f);          // Верх лево
	glVertex3f(0.5f, -0.5f, .5f);          // Низ лево
	glVertex3f(0.5f, -0.5f, -.5f);          // Низ право
	glEnd();                                // Окончим
	rquad -= 0.15f;
	glutSwapBuffers();

}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Quads");
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(renderScene);
	glutMainLoop();
}