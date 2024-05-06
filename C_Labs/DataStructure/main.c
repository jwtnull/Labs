#include <stdio.h>
#include "icu/zhaocc/datastructure/array/Array.h"
#include "icu/zhaocc/datastructure/linkedlist/LinkedList.h"

// 函数声明
void arrayTest();
void linkedListTest();

int main(void)
{
    arrayTest();
    linkedListTest();

    return 0;
}

/**
 * 数组测试
 */
void arrayTest()
{
    puts("=====Array=====");
    PARRAY array = init_array(10);

    printf("%d\n", array->capacity);

    for (int i = 1; i <= 10; ++i)
    {
        add_array(array, i);
    }
    show_array(array);
    clean_array(array);
}
/**
 * 单链表测试
 */
void linkedListTest()
{
    puts("=====LinkedList=====");
    PLINKEDLIST linkedList = init_linkedList();
    add_linkedList(linkedList, 1);
    add_linkedList(linkedList, 3);
    add_linkedList(linkedList, 2);
    sort_linkedList(linkedList);


    int count = getSize_linkedList(linkedList);
    printf("链表有效个数：%d\n", count);
    show_linkedList(linkedList);

    remove_linkedList(linkedList);

    int count2 = getSize_linkedList(linkedList);
    printf("链表有效个数：%d\n", count2);
    show_linkedList(linkedList);
}
