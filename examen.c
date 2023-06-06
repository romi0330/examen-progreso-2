#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
    srand(time(NULL));
    int suma, alu=0, p1=0,p2,p3, pro=0;
    int promedio;
    int alumnos[24][4];

    for (int i = 1; i <= 23; i++)
    {
        pro=suma/3;
        suma=0;
        for (int j = 1; j <= 3; j++)
        {
    //en el rand se pone un rango maximo de ingreso de estudiantes de 300
            alumnos[i][j]=rand()%10;
            suma+=alumnos[i][j];
            
        }
        
        if (suma>alu)
        {
            alu=suma;
            
            p1=i;
        }
        promedio=alu/3;
        
    }
    
    for (int i = 1; i <= 23; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("Estudiante #%d. Progreso #%d Calificacion=%d \n", i, j, alumnos[i][j]);
 
        }
                   printf("El promedio del estudiante %d es %d \n", i, pro);
    }
    printf("El alumno con mejor promedio en todo el semestre es el #%d con %d de promedio", p1, promedio);
   
    return 0;
}