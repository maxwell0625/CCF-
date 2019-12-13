//#include<stdio.h>
//
//
//int main(void)
//{
//	int a[1001], b[1001];
//	int n;
//	scanf("%d", &n);//店铺数
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);//每个店铺第一天的价格
//	}
//	b[0] = (a[0] + a[1]) / 2;//第一家店第二天的价格
//	b[n - 1] = (a[n - 1] + a[n-2]) / 2;//最后一家店第二天的价格
//	for (int j = 1; j < n-1; j++)
//	{
//		b[j] = (a[j - 1] + a[j] + a[j + 1]) / 3;//除第一和最后两家店其他家店第二天的价格
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	system("pause");
//	return 0;
//}