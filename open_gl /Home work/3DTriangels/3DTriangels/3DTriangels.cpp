#include <glut.h>
GLfloat rtri;
void changeSize(int w, int h)
{
	if (h == 0)
		h = 1;
	float ratio = 1.0* w / h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	gluPerspective(45, ratio, 1, 1000);
	glMatrixMode(GL_MODELVIEW);
}
void renderScene(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();


	glTranslatef(0.0f, 0.0f, -6.0f);
	glRotatef(rtri, 0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);                      // Красный
	glVertex3f(0.0f, 1.0f, 0.0f);                  // Верх треугольника (Передняя)
	glColor3f(0.0f, 1.0f, 0.0f);                      // Зеленный
	glVertex3f(-1.0f, -1.0f, 1.0f);                  // Левая точка
	glColor3f(0.0f, 0.0f, 1.0f);                      // Синий
	glVertex3f(1.0f, -1.0f, 1.0f);                  // Правая точка

	glColor3f(1.0f, 0.0f, 0.0f);                      // Красная
	glVertex3f(0.0f, 1.0f, 0.0f);                  // Верх треугольника (Правая)
	glColor3f(0.0f, 0.0f, 1.0f);                      // Синия
	glVertex3f(1.0f, -1.0f, 1.0f);                  // Лево треугольника (Правая)
	glColor3f(0.0f, 1.0f, 0.0f);                      // Зеленная
	glVertex3f(1.0f, -1.0f, -1.0f);                 // Право треугольника (Правая)

	glColor3f(1.0f, 0.0f, 0.0f);                      // Красный
	glVertex3f(0.0f, 1.0f, 0.0f);                  // Низ треугольника (Сзади)
	glColor3f(0.0f, 1.0f, 0.0f);                      // Зеленный
	glVertex3f(1.0f, -1.0f, -1.0f);                 // Лево треугольника (Сзади)
	glColor3f(0.0f, 0.0f, 1.0f);                      // Синий
	glVertex3f(-1.0f, -1.0f, -1.0f);                 // Право треугольника (Сзади)

	glColor3f(1.0f, 0.0f, 0.0f);                      // Красный
	glVertex3f(0.0f, 1.0f, 0.0f);                  // Верх треугольника (Лево)
	glColor3f(0.0f, 0.0f, 1.0f);                      // Синий
	glVertex3f(-1.0f, -1.0f, -1.0f);                  // Лево треугольника (Лево)
	glColor3f(0.0f, 1.0f, 0.0f);                      // Зеленный
	glVertex3f(-1.0f, -1.0f, 1.0f);                  // Право треугольника (Лево)

	glEnd();
	rtri += 0.01f;
	glutSwapBuffers();

}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Triangels");
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(renderScene);
	glutMainLoop();
}