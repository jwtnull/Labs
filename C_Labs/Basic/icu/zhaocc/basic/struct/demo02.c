#include <stdio.h>
#include <string.h>
void main()
{

    // struct 复制
    struct cat
    {
        char name[20];
        unsigned int age;
    } cat1, cat2;

    strcpy(cat1.name, "Hula");
    cat1.age = 10;

    // 这时会生成一个全新的副本
    cat2 = cat1;
    cat2.name[0] = 'M';

    //Hula
    printf("%s\n",cat1.name);
    //Mula
    printf("%s\n",cat2.name);
}