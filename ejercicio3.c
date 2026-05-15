#include <stdio.h>

int main (int argc, char *argv[]) {
    char vocales[]={'a','e','i','o','u'};
    char *ptr;
    ptr = vocales;
    for (int i = 0; i < 6; i++)
    {
        printf("%c ", *(ptr+i));
    }

    return 0;
}