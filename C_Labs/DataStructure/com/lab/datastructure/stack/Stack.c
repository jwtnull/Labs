#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * 栈初始化
 * @param pStack
 */
PSTACK init_stack(){
    PSTACK pStack;
    pStack->button=pStack->top=(PNODE) malloc(sizeof(PNODE));
    if (NULL==pStack->button){
        puts("栈初始化失败，动态内存分配异常");
        exit(EXIT_FAILURE);
    }
    pStack->button->nextNode=NULL;
    pStack->button->data=0;

    return pStack;
}

/**
 * 压栈
 * @param val
 */
bool push(PSTACK pStack,int val){
    PNODE newPNode= (PNODE)malloc(sizeof(PNODE));
    if (NULL==newPNode){
        puts("压栈失败，动态内存分配异常");
        return false;
    }
    newPNode->data=val;
    newPNode->nextNode=pStack->top;
    pStack->top=newPNode;

    return true;
}

/**
 * 出栈
 * @return
 */
int pull(PSTACK pStack){
    if (isEmpty_stack(pStack)){
        puts("出栈失败，栈为空");
        exit(EXIT_FAILURE);
    }
    PNODE top=pStack->top;
    int res=top->data;
    pStack->top=top->nextNode;
    free(top);
    return res;

}

/**
 * 打印栈
 * @param pStack
 */
void show_stack(PSTACK pStack){
    if (isEmpty_stack(pStack)){
        puts("打印失败，栈为空");
        exit(EXIT_FAILURE);
    }
    PNODE pNode=pStack->top;
    while (1){

        printf("%d\n",pNode->data);
        pNode=pNode->nextNode;
        if (pStack->button==pNode){
            break;
        }
    }


}

/**
 * 判断栈是否为空
 * @param pStack
 * @return
 */
bool isEmpty_stack(PSTACK pStack){
    return pStack->button==pStack->top;
}
