#include <stdio.h>
void rev(char *str) {
    char *n = str;
    while (*n != '\0') {
        n++;
    }
    n--;
    while (n >= str) {
        printf("%c", *n);
        n--;
    }
    printf("\n");
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("String in reverse: ");
    rev(str);
    return 0;
}
