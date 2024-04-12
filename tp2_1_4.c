#include <stdio.h>
#include <time.h>
#include <string.h>

struct
{
    int velocidad;  // entre 1 y 3
    int anio;       // 2015 y 2023
    int cantidad;   // entre 1 y 8
    char *tipo_cpu; // valores del arreglo tipos
} typedef compu;

int main()
{
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu computadora[5];
    int numRand;

    for (int i = 0; i < 5; i++)
    {
        computadora[i].anio = 2015 + rand() % (2023 - 2015 + 1);
        computadora[i].velocidad = 1 + rand() % (3 - 1 + 1);
        computadora[i].cantidad = 1 + rand() % (8 - 1 + 1);
        numRand = rand() % 6;
        computadora[i].tipo_cpu = tipos[numRand];
    }

    mostrarPc(computadora);
    pcMasVieja(computadora);
    pcMasRapida(computadora);
    return 0;
}

void mostrarPc(compu mostrar[])
{
    for (int j = 0; j < 5; j++)
    {
        printf("anio: %d\n", mostrar[j].anio);
        printf("velo: %d\n", mostrar[j].velocidad);
        printf("canti: %d\n", mostrar[j].cantidad);
        printf("anio: %s\n", mostrar[j].tipo_cpu);
        printf("--------------------------------------------\n");

    }
}

void pcMasVieja(compu mostrar[])
{
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        if (mostrar[i].anio > x)
            {
                x = mostrar[i].anio;
            }
    }
    for ( int j = 0; j < 5; j++)
    {
        if (mostrar[j].anio == x)
        {
            printf("Pc mas vieja: \n");
            printf("anio: %d\n", mostrar[j].anio);
        printf("velo: %d\n", mostrar[j].velocidad);
        printf("canti: %d\n", mostrar[j].cantidad);
        printf("anio: %s\n", mostrar[j].tipo_cpu);
        printf("--------------------------------------------\n");
        }
        
    }
}

void pcMasRapida(compu mostrar[]){

    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        if (mostrar[i].velocidad > x)
            {
                x = mostrar[i].velocidad;
            }
    }
    for ( int j = 0; j < 5; j++)
    {
        if (mostrar[j].velocidad == x)
        {
            printf("Pc mas rapida: \n");
            printf("anio: %d\n", mostrar[j].anio);
        printf("velo: %d\n", mostrar[j].velocidad);
        printf("canti: %d\n", mostrar[j].cantidad);
        printf("anio: %s\n", mostrar[j].tipo_cpu);
        printf("--------------------------------------------\n");
        }
        
    }

}