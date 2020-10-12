#include <stdio.h>

int main() {
    char value = 0;
    printf("This program prints most of the ASCII table!\n\n");
    for(int i = 1; i < 256; i++){
        value = i;
        printf("%i. %c  ", i, value);
        if (i%10 == 0 && i != 0 && i != 10){
            printf("\n");
        }
    }
    printf("\n\nPress enter to exit");
    scanf("%c");
    return 0;
}
