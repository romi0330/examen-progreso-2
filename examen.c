#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
    srand(time(NULL));
    int suma, promedio;
    int alumnos[24][4];

    for (int i = 1; i <= 23; i++)
    {
        suma=0;
        for (int j = 1; j <= 3; j++)
        {
    //en el rand se pone un rango maximo de ingreso de estudiantes de 300
            alumnos[i][j]=rand()%10;
            suma+=alumnos[i][j];
        
    }
    }
    for (int i = 1; i <= 23; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("Estudiante #%d. Progreso #%d Calificacion=%d \n", i, j, alumnos[i][j]);
        }

    }
    return 0;
}