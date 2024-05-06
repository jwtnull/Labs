#include <stdio.h>
#include <string.h>
int main(){
    //字符串函数学习

    //字符串连接函数 strcat();
    char str1[11]="hello";
    char str2[10]="world";
    strcat(str1,str2);
    puts(str1);


    //字符串复制strcpy();
    char str3[11];
    strcpy(str3,str1);
    puts(str3);

    //字符串比较函数：strcmp(st1,str2) str1=str2 返回0 str1>str2 返回大大于0的值 str1<str2 返回小于0的值
    int flat=strcmp(str1,str3);
    printf("%d\n",flat);


    return 0;

}