#include <stdio.h>
void mian()
{
    // 结构体定义
    struct car
    {
        // 车名
        char *name;
        // 价格
        float price;
        // 速度
        int speed;
    };

    // 声明并赋值
    struct car car1;
    car1.name = "Saturn SL/2";
    car1.price = 16000.99;
    car1.speed = 175;

    // 方式2:
    struct car car2 = {"领克03", 200000.00, 250};

    // 方式3：
    struct car car2 = {.name = "领克07", .speed = 250};

    // 数据类型声明语句与变量的声明语句，可以合并为一个语句
    struct book
    {
        char title[500];
        char author[100];
        float value;
    } b1;

    // 优化：如果只有一个地方用到可以再简写
    struct
    {
        char title[500];
        char author[100];
        float value;
    } b2 = {"Harry Potter", "J. K. Rowling", 10.0},
      b3 = {"Cancer Ward", "Aleksandr Solzhenitsyn", 7.85};

    // 为结构体取别名 typedef

    typedef struct cell_phone
    {
        int cell_no;
        float minutes_of_charge;
    } phone;

    phone p = {5551234, 5};

    // 定义指针类型结构体
    struct point1
    {
        char title[500];
        char author[100];
        float value;
    } *p;

    // struct 结构也可以作为数组成员。
    phone phones[10];
    phones[0].cell_no = 11;
    phones[0].minutes_of_charge = 5;
}