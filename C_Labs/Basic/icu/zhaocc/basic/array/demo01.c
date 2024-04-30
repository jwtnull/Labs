#include <stdio.h>
int main(){
    puts("数组学习");
    //数组(一维数组)
    //定义：dataType arrayName[length]
    int init[5];

    //数组初始化
    int a[5] ={1,2,3,4,5};
    //遍历
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
        
    }
    
    puts("================");
    //只给部分元素初始化，其它元素使用默认值
    int b[5]={1,2};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",b[i]);
        
    }

    //给所有元素初始化为0
    int c[5]={0};


    return 1;

}