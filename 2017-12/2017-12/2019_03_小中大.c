//#include<stdio.h>
//
////����n��������������ҳ����ֵ����Сֵ����λ�������մӴ�С����
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
//	if (min > max)//��Ϊ����������������У�����������򣩣�����������Ҫ�����ķ��ڵ�һ��
//	{
//		temp = min;
//		min = max;
//		max = temp;
//	}
//	if (n % 2 == 1)//�ж��Ƿ�Ϊ����
//	{
//		midnumber = a[n / 2];
//		printf("%d %d %d", max, midnumber, min);
//	}
//	else//ż��
//	{
//		midnumber = (a[n / 2] + a[n / 2 - 1]) / 2;
//		if ((a[n / 2] + a[n / 2 - 1]) % 2 == 1)//�ж��Ƿ�Ϊ����
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