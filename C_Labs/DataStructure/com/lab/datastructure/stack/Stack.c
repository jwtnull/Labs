#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Node
{
    // 数据
    int data;
    // 下一个节点
    struct Node *nextNode;

} NODE, *PNODE;

typedef struct Stack
{
    // 顶部
    PNODE top;
    // 底部
    PNODE button;
} STACK, *PSTACK;

/**
 * 栈初始化
 * @param pstack
 */
PSTACK init_stack();

/**
 * 压栈
 * @param val
 */
bool push(PSTACK pStack, int val);

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
bool isEmpty(PSTACK pStack);


int main(int argc, char const *argv[])
{
    puts("=====Stack=====");
    PSTACK pStack = init_stack();
    push(pStack, 1);
    push(pStack, 2);
    show_stack(pStack);
    printf("出栈：%d\n", pull(pStack));
    show_stack(pStack);
    return 0;
}

/**
 * 栈初始化
 * @param pStack
 */
PSTACK init_stack()
{
    PSTACK pStack;
    pStack->button = pStack->top = (PNODE)malloc(sizeof(PNODE));
    if (NULL == pStack->button)
    {
        puts("栈初始化失败，动态内存分配异常");
        exit(EXIT_FAILURE);
    }
    pStack->button->nextNode = NULL;
    pStack->button->data = 0;

    return pStack;
}

/**
 * 压栈
 * @param val
 */
bool push(PSTACK pStack, int val)
{
    PNODE newPNode = (PNODE)malloc(sizeof(PNODE));
    if (NULL == newPNode)
    {
        puts("压栈失败，动态内存分配异常");
        return false;
    }
    newPNode->data = val;
    newPNode->nextNode = pStack->top;
    pStack->top = newPNode;

    return true;
}

/**
 * 出栈
 * @return
 */
int pull(PSTACK pStack)
{
    if (isEmpty(pStack))
    {
        puts("出栈失败，栈为空");
        exit(EXIT_FAILURE);
    }
    PNODE top = pStack->top;
    int res = top->data;
    pStack->top = top->nextNode;
    free(top);
    return res;
}

/**
 * 打印栈
 * @param pStack
 */
void show_stack(PSTACK pStack)
{
    if (isEmpty(pStack))
    {
        puts("打印失败，栈为空");
        exit(EXIT_FAILURE);
    }
    PNODE pNode = pStack->top;
    while (1)
    {

        printf("%d\n", pNode->data);
        pNode = pNode->nextNode;
        if (pStack->button == pNode)
        {
            break;
        }
    }
}

/**
 * 判断栈是否为空
 * @param pStack
 * @return
 */
bool isEmpty(PSTACK pStack)
{
    return pStack->button == pStack->top;
}
