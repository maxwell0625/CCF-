//#include<stdio.h>
//#include<math.h>
//
////给定n个数，请找出其中相差（差的绝对值）最小的两个数，输出它们的差值的绝对值。
//
////输入第一行包含一个整数n。
////第二行包含n个正整数，相邻整数之间使用一个空格分隔。
//
////输出一个整数，表示答案
//int main(void)
//{
//	int n, i, j;
//	int a[1001];
//	int min = 10000, gap;//额外设置一个参考值来与差值进行比较
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j <= n; j++)
//		{
//			gap = abs(a[i] - a[j]);
//			if (min > gap)
//			{
//				min = gap;
//			}
//		}
//	}
//	printf("%d", min);
//	system("pause");
//	return 0;
//}