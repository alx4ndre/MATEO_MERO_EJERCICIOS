#include <stdio.h>

int main (int argc, char *argv[]) {
    int arreglo[]={3,6,9,12,15,18};
    int *ptr;
    ptr = &arreglo[0];          //ptr = arreglo;
    printf("%p %d\t", ptr, *ptr);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arreglo[i]);
    }

    return 0;
}