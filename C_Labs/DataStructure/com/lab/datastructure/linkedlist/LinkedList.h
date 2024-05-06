

#ifndef DATA_STRUCTURE_LINKED_LIST_H
#define DATA_STRUCTURE_LINKED_LIST_H

#include <stdbool.h>

/**
 * 档链表
 */
typedef struct LinkedList{
    //存放数据
    int data;
    //指向下一个指针
    struct LinkedList* nextNode;

} LINKEDLIST,*PLINKEDLIST;

/**
 * 链表初始化
 * @return 返回头指针
 */
PLINKEDLIST init_linkedList();

/**
 * 添加数据
 * @param header 头指针
 * @return true:成功 false:失败
 */
bool add_linkedList(PLINKEDLIST header,int val);

/**
 * 删除指针最后一个元素
 * @param header
 * @return
 */
bool remove_linkedList(PLINKEDLIST header);

/**
 * 删除指定元素
 * @param header
 * @param val
 * @return
 */
bool removeByVal_linkedList(PLINKEDLIST header,PLINKEDLIST val);

/**
 * 修改指定元素
 * @param header
 * @param val
 * @return
 */
bool update_linkedList(PLINKEDLIST header,PLINKEDLIST update);

/**
 * 清空链表
 * @param header 头指针
 * @return true:成功 false:失败
 */
bool clean_linkedList(PLINKEDLIST header);

/**
 * 判断链表是否为空
 * @return
 */
bool isEmpty_linkedList(PLINKEDLIST header);

/**
 * 打印链表
 * @param header
 */
void show_linkedList(PLINKEDLIST header);
/**
 * 排序
 * @param header
 */
void sort_linkedList(PLINKEDLIST header);

/**
 * 获取链表大小
 * @return
 */
int getSize_linkedList(PLINKEDLIST header);

#endif
