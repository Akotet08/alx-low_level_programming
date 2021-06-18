#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 0;
    while (i < 10){
        putchar(48 + i);
        if (i == 9) {
            putchar(36);
        }
        else {
            putchar(44);
            putchar(32);
        }
        
        i++;
    }
    putchar('\n');
}