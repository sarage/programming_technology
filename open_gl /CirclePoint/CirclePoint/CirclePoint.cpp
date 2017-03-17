#include <glut.h>

void SetPixel(int xp, int yp)
{
	double x = double(xp) / 320, y = double(yp) / 240;
	//glPointSize(5);
	glBegin(GL_POINTS);
	glColor3d(0, 0, 1);
	glVertex2d(x, y);
	glEnd();
}

void BrCircle(int xc, int yc, int r)
{
	int x = 0, y = r, d = 3 - 2 * r;

	while (x <= y) {
		SetPixel(xc + x, yc + y);
		SetPixel(xc + y, yc + x);
		SetPixel(xc - y, xc + x);
		SetPixel(xc - x, xc + y);
		SetPixel(xc - x, xc - y);
		SetPixel(xc - y, xc - x);
		SetPixel(xc + y, xc - x);
		SetPixel(xc + x, xc - y);
		if (d<0)
			d = d + 4 * x + 6;
		else {
			d = d + 4 * (x - y) + 10;
			y--;
		}
		x++;
	}

}

void renderScene(void) {
	glClearColor(1.0f, 0.0f, 0.0f, 0.0f);// Очистка экрана в  цвет red
	glClear(GL_COLOR_BUFFER_BIT);// Очистка экрана 

	BrCircle(10, 90, 100);

	glPointSize(5);
	glBegin(GL_POINTS);
	glColor3d(0, 1, 0);//green вторая точка
	glVertex3d(0, 0, 0);
	glColor3d(1, 1, 0);//yellow третья точка
	glVertex3d(-0.5, 0.5, 0);
	glEnd();

	glutSwapBuffers();
}

int main(int argc, char **argv) {

	// инициализация
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Урок 1");

	// регистрация обратных вызовов
	glutDisplayFunc(renderScene);

	// Основной цикл GLUT
	glutMainLoop();

	return 1;
}