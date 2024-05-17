# 数据结构与算法

## 衡量算法的好坏

● **时间复杂度**

○ 大概程序要执行的次数，而非时间
● **空间复杂度**
○ 算法执行过程中大概所占用的最大内存
● 可读性（不是最主要的）
○ 算法给人看 要能看懂
● 健壮性（不是最主要的）
○ 实用中不能出错

## 数据结构的区别

- 逻辑存储

  - 线性结构
    - 数组
    - 链表
    - 栈
    - 队列
  
  - 非线形结构
    - 树
    - 图

- 物理存储





## 线性结构

### 连续存储（数组）

### 离散存储（链表）

### 栈

定义：一种可以实现"先进后出"的存储结构。

分类：静态栈、动态栈

操作：压栈、出栈

应用场景：函数调用、表达式求值、内存分配、缓冲处理

代码实现：

```c
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

```

```c

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

```

main.c

```c
#include <stdio.h>
#include "com/lab/datastructure/stack/Stack.h"

// 函数声明
void stackTest();

int main(void)
{

    stackTest();

    return 0;
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

```

### 队列

定义：一种可以实现“先进先出”的存储结构

分类：

链式队列(链表实现)

静态队列(数组实现)

## 非线性结构

### 树

### 图

## 查找和排序
