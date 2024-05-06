#include <stdio.h>
int main()
{
    int a = 4;
    char str[] = "hello world";
    printf("%#X,%#X\n", &a, str);

    // 定义指针变量
    // dataType *dataName;  dataType *dateName=value;
    int *p1;
    int b = 10;
    int *p2 = &b;

    //也可以和普通变量一样连续定义
    int *p3,*p4;
    //错误写法:只有*p5是指针变量，p5,p6是普通变量
    int *p5,p6,p7;

    //通过指针变量获取数据:这里的*称为指针运算符，用来取得某个地址上的数据
    int c=100;
    int *p8=&c;
    printf("%d,%d\n",c,*p8);
    

    return 0;
}