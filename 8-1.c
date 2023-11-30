#include<stdio.h>
int main(){
    FILE *fp;
    char str[80];
    printf("enter the string:");
    scanf("%[^\n]s",str);
    fp=fopen("hello.txt","w");
    int i=0;
    while(str[i]!='\0'){
        putc(str[i],fp);
        i++;
    }
    fclose(fp);
    FILE *fpr;
    fpr=fopen("hello.txt","r");
    char ch;
    while(ch!=EOF){
        ch=getc(fp);
        printf("%c",ch);
    }
    return 0;
}