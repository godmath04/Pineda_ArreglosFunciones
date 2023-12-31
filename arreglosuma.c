#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fila = 0, columna = 0, fila2 = 0, columna2 = 0;


void randomMatrices(int Matriz[fila][columna]){
for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            Matriz[i][j] = rand()%100;
            printf("%4d |", Matriz[i][j]);
        }
        printf("\n");
    }
    
}

void sumaMatrices(int MatrizA[fila][columna], int MatrizB[fila2][columna2])
{
    int MatrizSuma[fila][columna];
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            MatrizSuma[i][j] = MatrizA[i][j] + MatrizB[i][j];
            printf("%4d |", MatrizSuma[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("****** EJERCICIOS DE MATRICES CON FUNCIONES\n");
    printf("Ingrese el valor de la fila de la Matriz A:\n");
    scanf("%d", &fila);
    printf("Ingrese el valor de la columna de la Matriz A:\n");
    scanf("%d", &columna);


    printf("Ingrese el valor de la fila de la Matriz B:\n");
    scanf("%d", &fila2);
    printf("Ingrese el valor de la columna de la Matriz B:\n");
    scanf("%d", &columna2);

    int MatrizA[fila][columna];
    int MatrizB[fila2][columna2];

    randomMatrices(MatrizA);
    printf("\n");
    randomMatrices(MatrizB);

    if (fila == fila2 &&columna == columna2)
    {
        printf("La suma de las matrices esta dada por: \n");
        printf("\n");
        sumaMatrices(MatrizA, MatrizB);
    }
    else
    {
        printf("\n");
        printf("Las Matrices no se pueden sumar.\n");
    }

    return 0;
}
