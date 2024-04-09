#define N 20
#include <stdio.h>
#include <time.h>


void main(){
int i;
double vt[N];
double *array;


srand(time(NULL));


    array = vt;
    
for (i = 0; i < N; i++)
{
    *array = 1 + rand() % 100;
    printf("% f ", vt[i]);
    array++;
}

}
