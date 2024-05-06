
#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

/**
 * ��ʼ������
 * @param capacity ����
 */
PARRAY init_array(int capacity)
{
    PARRAY  array=malloc(sizeof( PARRAY));
    if (NULL==array){
        puts("�����ʼ���쳣���ڴ����ʧ��");
        exit(1);
    }
    array->data = malloc(capacity);
    if (NULL == array->data)
    {
        puts("�����ʼ���쳣���ڴ����ʧ��");
        exit(1);
    }
    array->capacity = capacity;
    array->count = 0;
    return array;
}

/**
 * ��ӡ����
 */
void show_array(PARRAY array)
{
    if (isEmpty_array(array))
    {
        puts("��ӡʧ�ܣ�����Ϊ��");
        exit(1);
        
    }

    for (int i = 0; i < array->count; i++)
    {
        printf("%d\n", array->data[i]);
    }
}

/**
 * �ж������Ƿ�Ϊ��
 * @return true:Ϊ�� false:��Ϊ��
 */
bool isEmpty_array(PARRAY array)
{
    return array->count == 0;
}
/**
 * �ж������Ƿ�����
 * @param array
 * @return
 */
bool isFull_array(PARRAY array)
{
return array->count ==array->capacity;

}

/**
 * ������ݵ�β��
 * @param array
 * @param data
 */
void add_array(PARRAY array,int data){
    if(isFull_array(array)){
        puts("�������ʧ�ܣ���������");
        exit(1);
    }
    array->data[array->count++]=data;
}

/**
 * �������
 * @param array
 */
void clean_array(PARRAY array){
    array->count=0;
    array->capacity=0;
    free(array->data);
    array=NULL;

}
