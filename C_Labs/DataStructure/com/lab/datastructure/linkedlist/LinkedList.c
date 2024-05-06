#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * 链表初始化
 * @return 返回头指针
 */
PLINKEDLIST init_linkedList()
{
    PLINKEDLIST header = malloc(sizeof(LINKEDLIST));
    if (NULL == header)
    {
        puts("链表初始化失败，内存分配异常");
        exit(EXIT_FAILURE);
    }
    header->nextNode = NULL;
    return header;
}

/**
 * 添加数据
 * @param header 头指针
 * @return true:成功 false:失败
 */
bool add_linkedList(PLINKEDLIST header, int val)
{
    if (NULL == header)
    {
        puts("添加失败，头指针为空");
        return false;
    }

    PLINKEDLIST tempNode = header;
    while (1)
    {
        if (NULL == tempNode->nextNode)
        {
            tempNode->nextNode = init_linkedList();
            tempNode->nextNode->data = val;

            break;
        }
        tempNode = tempNode->nextNode;
    }

    return true;
}

/**
 * 删除指针最后一个元素
 * @param header
 * @return
 */
bool remove_linkedList(PLINKEDLIST header)
{
    if (NULL == header)
    {
        puts("删除失败，头指针为空");
        return false;
    }

    PLINKEDLIST tempNode = header;
    //上一个节点
    PLINKEDLIST preNode;
    while (1)
    {

        if (NULL == tempNode->nextNode)
        {
            free(tempNode);
            preNode->nextNode=NULL;
            break;
        }
        preNode=tempNode;
        tempNode = tempNode->nextNode;

    }

    return true;
}

/**
 * 删除指定元素
 * @param header
 * @param val
 * @return
 */
bool removeByVal_linkedList(PLINKEDLIST header, PLINKEDLIST val)
{

}

/**
 * 修改指定元素
 * @param header
 * @param val
 * @return
 */
bool update_linkedList(PLINKEDLIST header, PLINKEDLIST update)
{
}

/**
 * 清空链表
 * @param header 头指针
 * @return true:成功 false:失败
 */
bool clean_linkedList(PLINKEDLIST header)
{
    free(header);
    header=NULL;
    return true;
}

/**
 * 判断链表是否为空
 * @return true:为空 false:不为空
 */
bool isEmpty_linkedList(PLINKEDLIST header)
{
    return header->nextNode == NULL;
}

/**
 * 打印链表
 * @param header
 */
void show_linkedList(PLINKEDLIST header)
{
    if (isEmpty_linkedList(header))
    {
        puts("打印失败，链表为空");
        exit(EXIT_FAILURE);
    }

    PLINKEDLIST tempNode = header->nextNode;
    while (1)
    {
        if (NULL != tempNode)
        {
            printf("%d\n", tempNode->data);
            tempNode = tempNode->nextNode;
            continue;
        }
        break;
    }
}

/**
 * 排序(冒泡排序)
 * @param header
 */
void sort_linkedList(PLINKEDLIST header) {
    if (isEmpty_linkedList(header)) {
        puts("排序失败，链表为空");
        exit(EXIT_FAILURE);
    }
    int count = getSize_linkedList(header);
    PLINKEDLIST pi, pj;
    int i, j, temp;
    for (i = 0, pi = header->nextNode; i < count - 1; ++i, pi = pi->nextNode) {
        for (j = i + 1, pj = pi->nextNode; j < count; ++j, pj = pj->nextNode) {

            if (pi->data > pj->data) {
                temp = pi->data;
                pi->data = pj->data;
                pj->data = temp;
            }

        }
    }
}

/**
 * 获取链表大小
 * @return
 */
int getSize_linkedList(PLINKEDLIST header)
{
    PLINKEDLIST tempNode = header->nextNode;
    int count = 0;
    while (1)
    {
        if (NULL != tempNode)
        {
            ++count;
            tempNode = tempNode->nextNode;
            continue;
        }
        break;
    }
    return count;
}
