#include <stdio.h>

// �������������ڽ�������������ֵ
void swap(int *xp, int *yp);

int main()
{
    int arr[10];
    int i, j;
    int temp;

    // ��ʾ�û�����10������
    printf("������10�����֣�\n");
    for (i = 0; i < 10; i++)
	{
        scanf("%d", &arr[i]);
    }

    // ð�������㷨
    for (i = 0; i < 9; i++)
	{         // ���ѭ������������������ܹ���Ҫ9��
        for (j = 0; j < 9 - i; j++)
		{ // �ڲ�ѭ������ÿ�ֱȽϵĴ�����ÿ�ֺ�һ��Ԫ���Ѿ��ź���
            if (arr[j] > arr[j + 1])
			{ // ����Ԫ�������Ƚ�
                swap(&arr[j], &arr[j + 1]); // ���˳������򽻻�
            }
        }
    }

    // �������������
    printf("���������飺\n");
    for (i = 0; i < 10; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// �������壬���ڽ�������������ֵ
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
