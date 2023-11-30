#include <stdio.h>
struct examp {
    unsigned int a : 5;
    unsigned int b : 4;
    unsigned int c : 12;
};

int main() {
    struct examp s1;
    s1.a=10;
    s1.b=12;
    s1.c=5;
    printf("%d %d %d",s1.a,s1.b,s1.c);

    return 0;
}
