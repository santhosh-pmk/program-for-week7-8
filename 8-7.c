#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("hello.txt", "r");
    printf("ASCII numbers:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c: %d\n", ch, ch);
    }
    fclose(fp);
    return 0;
}
