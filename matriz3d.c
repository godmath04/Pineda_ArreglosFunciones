/*Actualice el ejercicio de matriz tridimensional, utilizando el concepto de Funciones.
 Crear e imprimir todos los elementos de un arreglo tridimensional, cuyas dimensiones sean ingresadas por el
usuario. El programa debe inicializar todas las matrices del arreglo en ceros, a excepción de la última matriz que debe ser inicializada
en unos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fila = 0, columna = 0, profundidad = 0;

void tridifMatriz(int Matriz3D[profundidad][fila][columna]){
    for (int k = 0; k < profundidad; k++)
    {
        for (int i = 0; i < fila; i++)
        {
            for (int j = 0; j < columna; j++)
            {
                Matriz3D[k][i][j] = 0;
                printf("%4d |", Matriz3D[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
}

int main()
{
    printf("***** MATRIZ TRIDIMENSIONAL******\n");
    printf("Ingrese el numero de filas: \n");
    scanf("%d", &fila);
    printf("Ingrese el numero de columna: \n");
    scanf("%d", &columna);
    printf("Ingrese el numero de profundidad: \n");
    scanf("%d", &profundidad);

    int Matriz[fila][columna][profundidad];
    tridifMatriz(Matriz);

    return 0;
}
