#define N 5
#define M 7
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, j;
    int mt[N][M];
    int *p;

    p = &mt[0][0]; // Asigna la dirección de mt[0][0] a p

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(p + i * M + j) = 1 + rand() % 100; // Asigna valores utilizando aritmética de punteros
            printf("%4d", *(p + i * M + j));
        }
        printf("\n");
    }

    getchar();
    return 0;
}
