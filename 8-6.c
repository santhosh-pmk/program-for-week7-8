#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int num, sum = 0;
    fp = fopen("hello.txt", "r");
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
    }
    fclose(fp);
    fp = fopen("hello.txt", "a");
    fprintf(fp, "\nSum of integers: %d\n", sum);
    fclose(fp);
    return 0;
}
