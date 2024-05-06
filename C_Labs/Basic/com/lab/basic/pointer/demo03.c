#include <stdio.h>
int main()
{
    // 数组指针
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //arr 是数组第 0 个元素的地址
    int *p = array;

    // 计算数组长度:sizeof(arr) 会获得整个数组所占用的字节数，sizeof(int) 会获得一个数组元素所占用的字节数，它们相除的结果就是数组包含的元素个数，也即数组长度。
    int length = sizeof(array) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", *(array + i)); //*(arr+i)等价于arr[i]
    }

    return 0;
}