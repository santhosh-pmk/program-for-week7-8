#include<stdio.h>
struct abc{
    int h1;
};
struct bcd{
    struct abc a1;
}b1;
int main(){
    b1.a1.h1=5;
    printf("value:%d",b1.a1.h1);
    return 0;
}