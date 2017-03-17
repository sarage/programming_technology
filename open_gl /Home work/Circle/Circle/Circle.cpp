#include <glut.h>

void SetPixel(int xp, int yp)
{
	double x = double(xp) / 320, y = double(yp) / 320;
	glBegin(GL_POINTS);
	glColor3d(1, 1, 1);
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
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	BrCircle(100, 100, 150);
	glutSwapBuffers();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Circle");
	glutDisplayFunc(renderScene);
	glutMainLoop();
	return 1;
}