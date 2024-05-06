
#ifndef DATA_STRUCTURE_STACK_H
#define DATA_STRUCTURE_STACK_H
#include <stdbool.h>
typedef struct Node{
    //数据
    int data;
    //下一个节点
    struct Node *nextNode;

} NODE,*PNODE;

typedef struct Stack{
    //顶部
    PNODE top;
    //底部
    PNODE button;
} STACK ,*PSTACK;

/**
 * 栈初始化
 * @param pstack
 */
PSTACK init_stack();

/**
 * 压栈
 * @param val
 */
bool push(PSTACK pStack,int val);

/**
 * 出栈
 * @param pStack
 * @return
 */
int pull(PSTACK pStack);

/**
 * 打印栈
 * @param pStack
 */
void show_stack(PSTACK pStack);

/**
 * 判断栈是否为空
 * @param pStack
 * @return
 */
bool isEmpty_stack(PSTACK pStack);
#endif
