#include <stdio.h>

int main(int argc, char *argv[]) {

    char vocales[] = {'a','e','i','o','u'};
    char *ptr;
    ptr = vocales;

    *(ptr + 3) = 'x';

    for (int i = 0; i < 5; i++)
    {
        printf("%c ", vocales[i]);
    }

    return 0;
}