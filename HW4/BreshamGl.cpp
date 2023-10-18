#include <windows.h>
#include <GL/glut.h>
#include <iostream>

int x1, y1, x2, y2; 

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    
    glColor3f(1.0, 0.0, 0.0);

    
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int duaDy = 2 * dy;
    int duaDyMinusDx = 2 * (dy - dx);
    int duaDx = 2 * dx;
    int duaDxMinusDy = 2 * (dx - dy);

    int x, y;
    if (dx > dy) {
        if (x1 > x2) {
            x = x2;
            y = y2;
            x2 = x1;
        }
        else {
            x = x1;
            y = y1;
        }

        glBegin(GL_POINTS);
        glVertex2i(x, y);

        while (x < x2) {
            x++;
            if (duaDyMinusDx < 0) {
                duaDyMinusDx += duaDy;
            }
            else {
                y++;
                duaDyMinusDx += duaDyMinusDx - duaDx;
            }
            glVertex2i(x, y);
        }
    }
    else {
        if (y1 > y2) {
            x = x2;
            y = y2;
            y2 = y1;
        }
        else {
            x = x1;
            y = y1;
        }

        glBegin(GL_POINTS);
        glVertex2i(x, y);

        while (y < y2) {
            y++;
            if (duaDxMinusDy < 0) {
                duaDxMinusDy += duaDx;
            }
            else {
                x++;
                duaDxMinusDy += duaDxMinusDy - duaDy;
            }
            glVertex2i(x, y);
        }
    }

    glEnd();
    glFlush();
}

void init() {
    gluOrtho2D(-300, 300, -300, 300);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Garis Koordinat");

    init();

    std::cout << "Masukkan koordinat A (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Masukkan koordinat A (x2 y2): ";
    std::cin >> x2 >> y2;

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
