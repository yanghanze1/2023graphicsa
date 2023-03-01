#include <GL/glut.h>
#include <stdio.h>
float X=0, Y=0;
void display()
{
    glBegin(GL_POLYGON);
    glVertex2f(-0.228, 0.148);
    glVertex2f(-0.180, 0.140);
    glVertex2f(-0.120, 0.152);
    glVertex2f(-0.076, 0.172);
    glVertex2f(-0.040, 0.184);
    glVertex2f(-0.040, 0.212);
    glVertex2f(-0.060, 0.224);
    glVertex2f(-0.056, 0.240);
    glVertex2f(-0.036, 0.248);
    glVertex2f(-0.012, 0.240);
    glVertex2f(0.008, 0.236);
    glVertex2f(0.028, 0.240);
    glVertex2f(0.044, 0.216);
    glVertex2f(0.040, 0.196);
    glVertex2f(0.036, 0.184);
    glVertex2f(0.084, 0.164);
    glVertex2f(0.116, 0.156);
    glVertex2f(0.184, 0.140);
    glVertex2f(0.200, 0.148);
    glVertex2f(0.232, 0.120);
    glVertex2f(0.240, 0.080);
    glVertex2f(0.272, 0.036);
    glVertex2f(0.272, 0.004);
    glVertex2f(0.292, -0.008);
    glVertex2f(0.332, 0.008);
    glVertex2f(0.352, 0.048);
    glVertex2f(0.372, 0.092);
    glVertex2f(0.392, 0.112);
    glVertex2f(0.404, 0.132);
    glVertex2f(0.448, 0.136);
    glVertex2f(0.508, 0.136);
    glVertex2f(0.472, 0.112);
    glVertex2f(0.436, 0.068);
    glVertex2f(0.428, 0.024);
    glVertex2f(0.400, -0.024);
    glVertex2f(0.372, -0.076);
    glVertex2f(0.316, -0.108);
    glVertex2f(0.296, -0.128);
    glVertex2f(0.268, -0.164);
    glVertex2f(0.252, -0.200);
    glVertex2f(0.204, -0.224);
    glVertex2f(0.176, -0.224);
    glVertex2f(0.120, -0.236);
    glVertex2f(0.084, -0.240);
    glVertex2f(0.036, -0.240);
    glVertex2f(-0.028, -0.236);
    glVertex2f(-0.068, -0.236);
    glVertex2f(-0.124, -0.236);
    glVertex2f(-0.164, -0.236);
    glVertex2f(-0.196, -0.220);
    glVertex2f(-0.220, -0.224);
    glVertex2f(-0.248, -0.208);
    glVertex2f(-0.280, -0.160);
    glVertex2f(-0.300, -0.144);
    glVertex2f(-0.344, -0.120);
    glVertex2f(-0.404, -0.084);
    glVertex2f(-0.440, -0.024);
    glVertex2f(-0.448, 0.040);
    glVertex2f(-0.448, 0.068);
    glVertex2f(-0.440, 0.088);
    glVertex2f(-0.396, 0.108);
    glVertex2f(-0.352, 0.108);
    glVertex2f(-0.312, 0.104);
    glVertex2f(-0.268, 0.104);
    glVertex2f(-0.252, 0.100);
    glVertex2f(-0.244, 0.100);
    glVertex2f(-0.228, 0.112);
    glVertex2f(-0.228, 0.124);
    glVertex2f(-0.228, 0.144);
    glEnd();

    glutSwapBuffers();
}
void mouse (int button, int state, int x, int y)
{
    X = (x-250)/250.0;
    Y = -(y-250)/250.0;
    if(state==GLUT_DOWN){
        printf("    glVertex2f(%.3f, %.3f);\n", X, Y);
    }
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}
