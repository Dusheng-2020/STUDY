#include <stdio.h>

// 函数声明，用于交换两个变量的值
void swap(int *xp, int *yp);

int main()
{
    int arr[10];
    int i, j;
    int temp;

    // 提示用户输入10个数字
    printf("请输入10个数字：\n");
    for (i = 0; i < 10; i++)
	{
        scanf("%d", &arr[i]);
    }

    // 冒泡排序算法
    for (i = 0; i < 9; i++)
	{         // 外层循环控制排序的轮数，总共需要9轮
        for (j = 0; j < 9 - i; j++)
		{ // 内层循环控制每轮比较的次数，每轮后一个元素已经排好序
            if (arr[j] > arr[j + 1])
			{ // 相邻元素两两比较
                swap(&arr[j], &arr[j + 1]); // 如果顺序错误，则交换
            }
        }
    }

    // 输出排序后的数组
    printf("排序后的数组：\n");
    for (i = 0; i < 10; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 函数定义，用于交换两个变量的值
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
