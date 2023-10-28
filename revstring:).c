#include <stdio.h>

int main() {

    char s[9] = "atsniperP"; // declaration of string

    printf("The reverse string is : ");
    for(int i=8;i>=0; i--){ // loop to convert the string
        printf("%c", s[i]);
    }

return 0;
}
