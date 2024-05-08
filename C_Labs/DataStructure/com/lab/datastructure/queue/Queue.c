/**
 * 数据结构：静态队列
 * @anchor 冰美式
 */
#include <stdlib.h>
#include <stdio.h>
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
int main(int argc, char const *argv[])
{
     puts("=====loop queue=====");
    PLOOPQUEUE pLoopQueue=init_loopQueue();
    add_loopQueue(pLoopQueue,1);
    add_loopQueue(pLoopQueue,2);
    add_loopQueue(pLoopQueue,3);
    show_loopQueue(pLoopQueue);
    printf("获取队列数据：%d\n",get_loopQueue(pLoopQueue));
    show_loopQueue(pLoopQueue);
    return 0;
}

/**
 * 队列初始化
 * @return
 */
PLOOPQUEUE init_loopQueue(){
    PLOOPQUEUE  pLoopQueue;
    pLoopQueue->pBase = malloc(sizeof(int)*6);
    pLoopQueue->front=0;
    pLoopQueue->rear=0;

    return pLoopQueue;
}

/**
 * 添加数据
 * @return
 */
bool add_loopQueue(PLOOPQUEUE pLoopQueue,int val){
    if (isFull_loopQueue(pLoopQueue)){
        puts("队列已满");
        return false;
    }
    pLoopQueue->pBase[pLoopQueue->rear]=val;
    pLoopQueue->rear=(pLoopQueue->rear+1)%6;
    return true;


}

/**
 * 获取数据
 * @param pLoopQueue
 * @return
 */
int get_loopQueue(PLOOPQUEUE pLoopQueue){
    if (isEmpty_loopQueue(pLoopQueue)){
        puts("队列为空，获取数据失败");
        exit(EXIT_FAILURE);
    }
    int val=pLoopQueue->pBase[pLoopQueue->front];
    pLoopQueue->front=(pLoopQueue->front+1)%6;
    return val;
}

/**
 * 判断队列是否为空
 * @return
 */
bool isEmpty_loopQueue(PLOOPQUEUE pLoopQueue){
    return pLoopQueue->rear==pLoopQueue->front;
}

/**
 * 判断队列是否已满
 * @param pLoopQueue
 * @return
 */
bool isFull_loopQueue(PLOOPQUEUE pLoopQueue){
    return (pLoopQueue->rear+1)%6 == pLoopQueue->front?true:false;

}

/**
 * 打印队列
 * @param pLoopQueue
 */
void show_loopQueue(PLOOPQUEUE pLoopQueue){
    int t=pLoopQueue->front;
    while (t!= pLoopQueue->rear){
        printf("%d\n",pLoopQueue->pBase[t]);
        t=(t+1)%6;
    }
}
