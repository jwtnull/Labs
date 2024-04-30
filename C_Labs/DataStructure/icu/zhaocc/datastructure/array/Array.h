
#ifndef DATASTRUCTURE_ARRAY_H
#define DATASTRUCTURE_ARRAY_H
#include <stdbool.h>
typedef struct Array
{
    // 容量
    int capacity;
    // 有效个数
    int count;
    // 存储数据
    int* data;
}  *PARRAY,ARRAY;

/**
 * 数组初始化
 * @param capacity 容量
 */
PARRAY init_array(int capacity);


/**
 * 判断数组是否为空、
 * @param array struct Array*
 */
bool isEmpty_array(PARRAY array);

/**
 * 判断数组是否已满
 * @param array struct Array*
 * @return
 */
bool isFull_array(PARRAY array);

/**
 * 清空数组
 */
void clean_array(PARRAY array);

/**
 * 打印数组
 */
void show_array(PARRAY array);

/**
 * 添加数据到数组尾部
 */
void add_array(PARRAY array,int data);

#endif //DATASTRUCTURE_ARRAY_H
