#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 0;
    while (i < 26){
        putchar('a' + i);
        i++;
    }
    int j = 0;
    while (j < 26){
        putchar('A' + j);
        j++;
    }
    putchar('\n');
}