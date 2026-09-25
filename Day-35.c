#include <stdio.h>

int main() {
    char str[100] = "Hello";
    int count = 0;
    
    while (str[count] != '\0') {
        count++;
    }
    
    printf("Total characters: %d\n", count);
    return 0;
}
