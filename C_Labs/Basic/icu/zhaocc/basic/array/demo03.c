#include <stdio.h>
#include <string.h>
void test1();
void test2();
void test3();
int main()
{
    // 字符数组/字符串
    char a[10];                                                           // 一维字符数组
    char b[5][10];                                                        // 二维字符数组
    char c[20] = {'H', 'E', 'L', 'L', 'O', ',', 'W', 'O', 'R', 'L', 'D'}; // 给部分赋值
    char d[] = {'H', 'E', 'L', 'L', 'O', ',', 'W', 'O', 'R', 'L', 'D'};   // 对全体元素赋值时可以省去长度

    // C语言规定，可以将字符串直接赋值给字符数组，例如：
    char str1[11] = {"Hello,World"};
    char str2[11] = "Hello,World"; // 这种形式更加简洁，实际开发中常用

    // 简略写法；
    char str3[] = {"Hello,World"};
    char str4[] = "Hello,World"; // 这种形式更加简洁，实际开发中常用

    // 字符串结束标志(重点) '\0'

    // 不会自动加上  \0
    char str5[11] = {'H', 'E', 'L', 'L', 'O', ',', 'W', 'O', 'R', 'L', 'D'};
    // 会自动加上\0
    char str6[] = "Hello,World";
    // 会自动加上\0 数组长度要比字符串大1 留一个位置
    char str7[11] = "Hello,World";

    // lab:将 26 个大写英文字符存入字符数组，并以字符串的形式输出
    test1();
    test2();
    test3();

    // 字符串长度：使用 string.h头文件中的函数计算
    // 字符串长度：字符串包含了多少字符 不包含\0
    int str7Len = strlen(str7);
    printf("计算字符串长度：%d\n", str7Len);

    // 字符串的输出
    // puts  printf()
    printf("printf()->字符串输出：%s\n", d);
    puts(d);

    // 字符串输入
    // scanf() 读取字符串时以空格为分隔，遇到空格就认为当前字符串结束了，所以无法读取含有空格的字符串。
    // gets() 认为空格也是字符串的一部分，只有遇到回车键时才认为字符串输入结束，所以，不管输入了多少个空格，只要不按下回车键，对 gets() 来说就是一个完整的字符串。换句话说，gets() 用来读取一整行字符串。

    char str8[30] = {0};
    char str9[30] = {0};
    char str10[30] = {0};
    // puts("gets() demo");
    printf("Input a string:");
    gets(str8);

    puts("Input a string:");
    scanf("%s", str9);
    scanf("%s", str10);

    printf("\nstr8: %s\n", str8);
    printf("str9: %s\n", str9);
    printf("str10: %s\n", str10);

    return 0;
}
/**
 * lab:将26个大写英文字符存入字符数组，并以字符串的形式输出
 * 演示：缺失字符串结束标志
 */
void test1()
{
    puts("======lab:将26个大写英文字符存入字符数组,并以字符串的形式输出======");
    char str[30];
    int i;
    int c;
    for (i = 0, c = 65; c <= 90; c++, i++)
    {
        str[i] = c;
    }
    // ABCDEFGHIJKLMNOPQRSTUVWXYZ烫烫烫烫烫烫烫[烫烫烫烫烫?
    printf("%s\n", str);
}

/**
 * lab:将26个大写英文字符存入字符数组，并以字符串的形式输出
 * 解决：test1()
 * 手动加上结束表示'\0'
 */
void test2()
{
    puts("======lab:将26个大写英文字符存入字符数组,并以字符串的形式输出======");
    char str[30];
    int i;
    int c;
    for (i = 0, c = 65; c <= 90; c++, i++)
    {
        str[i] = c;
    }
    // 也可以写成:str[i]='\0'
    str[i] = 0;
    // ABCDEFGHIJKLMNOPQRSTUVWXYZ
    printf("%s\n", str);
}
/**
 * lab:将26个大写英文字符存入字符数组，并以字符串的形式输出
 *  优化test2(),定义数组时初始化默认值
 */
void test3()
{
    puts("======lab:将26个大写英文字符存入字符数组,并以字符串的形式输出======");
    char str[30] = {0};
    int i;
    int c;
    for (i = 0, c = 65; c <= 90; c++, i++)
    {
        str[i] = c;
    }
    // ABCDEFGHIJKLMNOPQRSTUVWXYZ
    printf("%s\n", str);
}