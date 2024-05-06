
#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

/**
 * 初始化数组
 * @param capacity 容量
 */
PARRAY init_array(int capacity)
{
    PARRAY  array=malloc(sizeof( PARRAY));
    if (NULL==array){
        puts("数组初始化异常，内存分配失败");
        exit(1);
    }
    array->data = malloc(capacity);
    if (NULL == array->data)
    {
        puts("数组初始化异常，内存分配失败");
        exit(1);
    }
    array->capacity = capacity;
    array->count = 0;
    return array;
}

/**
 * 打印数组
 */
void show_array(PARRAY array)
{
    if (isEmpty_array(array))
    {
        puts("打印失败，数组为空");
        exit(1);
        
    }

    for (int i = 0; i < array->count; i++)
    {
        printf("%d\n", array->data[i]);
    }
}

/**
 * 判断数组是否为空
 * @return true:为空 false:不为空
 */
bool isEmpty_array(PARRAY array)
{
    return array->count == 0;
}
/**
 * 判断数组是否已满
 * @param array
 * @return
 */
bool isFull_array(PARRAY array)
{
return array->count ==array->capacity;

}

/**
 * 添加数据到尾部
 * @param array
 * @param data
 */
void add_array(PARRAY array,int data){
    if(isFull_array(array)){
        puts("添加数据失败，数组已满");
        exit(1);
    }
    array->data[array->count++]=data;
}

/**
 * 清空数组
 * @param array
 */
void clean_array(PARRAY array){
    array->count=0;
    array->capacity=0;
    free(array->data);
    array=NULL;

}
