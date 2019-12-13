//#include<stdio.h>
//
////给出n个有序的整数，找出最大值、最小值和中位数，按照从大到小排列
//
//int main(void)
//{
//	int n, temp, min, max;
//	int midnumber;
//	int a[100001];
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	min = a[0];
//	max = a[n - 1];
//	if (min > max)//因为输入的数是有序排列（降序或者升序），根据需求需要把最大的放在第一个
//	{
//		temp = min;
//		min = max;
//		max = temp;
//	}
//	if (n % 2 == 1)//判断是否为奇数
//	{
//		midnumber = a[n / 2];
//		printf("%d %d %d", max, midnumber, min);
//	}
//	else//偶数
//	{
//		midnumber = (a[n / 2] + a[n / 2 - 1]) / 2;
//		if ((a[n / 2] + a[n / 2 - 1]) % 2 == 1)//判断是否为分数
//		{
//			printf("%d %.1lf %d", max, (double)midnumber, min);
//		}
//		else
//		{
//			printf("%d %d %d", max, midnumber, min);
//
//		}
//	}
//	system("pause");
//	return 0;
//}