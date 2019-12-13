#include<stdio.h>


int main(void)
{
	int n;
	int a[1001];
	int judge;//作为判断位
	int count1 = 0, count2 = 0;//分别存放大于该数、小于该数的数量
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[j] > a[i])
			{
				count1++;
			}
			if (a[j] < a[i])
			{
				count2++;
			}
		}
		if (count1 == count2)
		{
			judge = j;//如果相等，表示找到了中间数，并将该数的下标赋值给judge
		}
		else
		{
			//没有找到中间数，将两个比较变量置零，做下一次的比较
			count1 = 0;
			count2 = 0;
		}
	    if (count1 == 0 && count2 == 0)//没有找到中间数
		{
			judge = 0;//置零做判断用
		}
	}
	if (judge != 0)
	{
		printf("%d",a[judge]);
	}
	else
	{
		printf("-1");
	}
	system("pause");
	return 0;
}