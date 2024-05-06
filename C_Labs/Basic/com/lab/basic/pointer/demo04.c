#include <stdio.h>
#include <string.h>
int main()
{
    // 字符串指针 字符数组归根结底还是一个数组，上节讲到的关于指针和数组的规则同样也适用于字符数组
    char array[] = "Hello World";
    int len = strlen(array);
    puts(array);

    for (int i = 0; i < len; i++)
    {
        printf("%c", array[i]);
    }
    puts("");

    char *pstr = array;

    char *str="hello wrold";
    puts(str);
    return 0;
}