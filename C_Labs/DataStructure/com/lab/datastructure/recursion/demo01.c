#include <stdio.h>
void move(int, char, char, char);
int main()
{
    /**
     * 递归：汉诺塔
     */
    char a = 'A';
    char b = 'B';
    char c = 'C';
    int n;
    printf("请输入要移动的盘子：");
    scanf("%d", &n);
    move(n, a, b, c);

    return 0;
}

void move(int n, char a, char b, char c)
{
    if (1 == n)
    {
        printf("将编号%d为的数字直接从%c柱子移动到%c柱子\n", n, a, c);
    }
    else
    {
        move(n - 1, a, c, b);
        printf("将编号%d为的数字直接从%c柱子移动到%c柱子\n", n, a, c);
        move(n - 1, b, a, c);
    }
}