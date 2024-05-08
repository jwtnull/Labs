#include <stdio.h>
#include "com/lab/datastructure/array/Array.h"
#include "com/lab/datastructure/linkedlist/LinkedList.h"
#include "com/lab/datastructure/stack/Stack.h"
#include "com/lab/datastructure/queue/Queue.h"

// 函数声明
void arrayTest();
void linkedListTest();
void stackTest();
void loopQueueTest();

int main(void)
{
    arrayTest();
    linkedListTest();
    stackTest();
    loopQueueTest();

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

/**
 * 栈测试：
 */
void stackTest(){
    puts("=====Stack=====");
    PSTACK pStack = init_stack();
    push(pStack,1);
    push(pStack,2);
    show_stack(pStack);
    printf("出栈：%d\n",pull(pStack));
    show_stack(pStack);
}

void loopQueueTest(){
    puts("=====loop queue=====");
    PLOOPQUEUE pLoopQueue=init_loopQueue();
    add_loopQueue(pLoopQueue,1);
    add_loopQueue(pLoopQueue,2);
    add_loopQueue(pLoopQueue,3);
    show_loopQueue(pLoopQueue);
    printf("获取队列数据：%d\n",get_loopQueue(pLoopQueue));
    show_loopQueue(pLoopQueue);


}
