#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 0;
    while (i < 26){
        char character = 'a' + i;
        if (character != 'q' && character != 'e') {
            putchar(character);
        }
        i++;
    }
    putchar('\n');
}