#include <stdio.h>
void bubbleSort1();
void bubbleSort2();
int main(){
    //数组的查找和排序

    bubbleSort1();
    bubbleSort2();

    return 0;




}
/**
 * 冒泡排序:
 */
void bubbleSort1(){
    int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
    int temp=0;
    //记录总共排序了多少次
    int count=0;
    for (int i = 0; i <10-1 ; i++) {
        for (int j = 0; j < 10-1-i; j++) {
            count++;
            //每一轮比较前 n-1-i 个，也就是说，已经排序好的最后 i 个不用比较
            if(nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }

        }

    }
    printf("排序次数：%d\n",count);
    //输出排序后的数组
    for(int i=0; i<10; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
}

/**
 * 冒泡排序:
 * 优化：bubbleSort1();
 */
void bubbleSort2(){
    int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
    int temp=0;
    int count=0;
    for (int i = 0; i <10-1 ; i++) {
        int flag=1;//假设剩下的元素已经排序好了
        for (int j = 0; j < 10-1-i; j++) {
            count++;
            //每一轮比较前 n-1-i 个，也就是说，已经排序好的最后 i 个不用比较
            if(nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                //一旦需要交换数组元素，就说明剩下的元素没有排序好
                flag=0;
            }

        }
        //如果没有发生交换，说明剩下的元素已经排序好了
        if(flag){
            break;
        }

    }
    printf("排序次数：%d\n",count);
    //输出排序后的数组
    for(int i=0; i<10; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
}