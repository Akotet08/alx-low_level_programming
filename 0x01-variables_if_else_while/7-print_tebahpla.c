#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 0;
    while (i < 26){
        putchar('z' - i);
        i++;
    }
    putchar('\n');
}