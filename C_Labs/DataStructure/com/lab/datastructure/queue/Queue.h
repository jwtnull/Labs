/**
 * 数据结构：静态队列
 * @anchor 冰美式
 */
#ifndef DATA_STRUCTURE_QUEUE_H
#define DATA_STRUCTURE_QUEUE_H
#include <stdbool.h>
typedef struct LoopQueue{
    int* pBase;

    /**
     * 指向队列的第一个元素
     */
    int front;
    /**
     * 指向队列最后一个元素的下一位
     */
    int rear;

} LOOPQUEUE,*PLOOPQUEUE;

/**
 * 队列初始化
 * @return
 */
PLOOPQUEUE init_loopQueue();

/**
 * 添加数据
 * @return
 */
bool add_loopQueue(PLOOPQUEUE pLoopQueue,int val);

/**
 * 获取数据
 * @param pLoopQueue
 * @return
 */
int get_loopQueue(PLOOPQUEUE pLoopQueue);

/**
 * 判断队列是否为空
 * @return
 */
bool isEmpty_loopQueue(PLOOPQUEUE pLoopQueue);

/**
 * 判断队列是否已满
 * @param pLoopQueue
 * @return
 */
bool isFull_loopQueue(PLOOPQUEUE pLoopQueue);

/**
 * 打印队列
 * @param pLoopQueue
 */
void show_loopQueue(PLOOPQUEUE pLoopQueue);


#endif
