#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 0;
    while (i < 10){
        putchar(48 + i);
        i++;
    }
    int j = 0;
    while (j < 6){
        putchar('a' + j);
        j++;
    }
    putchar('\n');
}