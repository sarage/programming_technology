#include <glut.h>

/*GLvoid InitGL(GLsizei Width, GLsizei Height)    // Вызвать после создания окна GL
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);   // Очистка экрана в черный цвет
	glClearDepth(1.0);                      // Разрешить очистку буфера глубины
	glDepthFunc(GL_LESS);                   // Тип теста глубины
	glEnable(GL_DEPTH_TEST);                // разрешить тест глубины
	glShadeModel(GL_SMOOTH);        // разрешить плавное цветовое сглаживание
	glMatrixMode(GL_PROJECTION);    // Выбор матрицы проекции
	glLoadIdentity();               // Сброс матрицы проекции
	gluPerspective(45.0f, (GLfloat)Width / (GLfloat)Height, 0.1f, 100.0f);
	// Вычислить соотношение геометрических размеров для окна
	glMatrixMode(GL_MODELVIEW);     // Выбор матрицы просмотра модели
}

GLvoid ReSizeGLScene(GLsizei Width, GLsizei Height)
{
	if (Height == 0)          // Предотвращение деления на ноль, если окно слишком мало
		Height = 1;

	glViewport(0, 0, Width, Height);
	// Сброс текущей области вывода и перспективных преобразований

	glMatrixMode(GL_PROJECTION);            // Выбор матрицы проекций
	glLoadIdentity();                       // Сброс матрицы проекции

	gluPerspective(45.0f, (GLfloat)Width / (GLfloat)Height, 0.1f, 100.0f);
	// Вычисление соотношения геометрических размеров для окна
	glMatrixMode(GL_MODELVIEW);     // Выбор матрицы просмотра модели
}*/



GLvoid DrawGLScene(GLvoid)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(-1.5f, 0.0f, -6.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);      // Красный цвет
	glVertex3f(0.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);      // Зеленный цвет
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);      // Синий цвет
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();

	glTranslatef(3.0f, 0.0f, 0.0f);
	glColor3f(0.5f, 0.5f, 1.0f);      // Установим синий цвет только один раз
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glEnd();

	glutSwapBuffers();
}

/*void renderScene(void) {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0f, 1.0f, 0.0f);  // Вверх
	glVertex3f(-1.0f, -1.0f, 0.0f);  // Слева снизу
	glVertex3f(1.0f, -1.0f, 0.0f);  // Справа снизу
	glEnd();
	glutSwapBuffers();
}*/

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("MY");
	glutDisplayFunc(DrawGLScene);
	glutMainLoop();
	return 1;
}
