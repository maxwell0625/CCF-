#include<stdio.h>


int main(void)
{
	int n, k;//n为蛋糕总数，k为要达到的重量
	int a[1001];//表示每块蛋糕的重量
	int i;
	int sum;
	sum = 0;
	int count = 0;//统计人数
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++)//输入蛋糕数
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] >= k)//如果某块蛋糕的重量符合k值，则分到蛋糕的人数+1
		{
			count++;
		}
		else
		{
			sum += a[i];//未达到标准的则不停的与后面的蛋糕数量相加直到符合标准
			if (sum >= k)
			{
				count++;
				sum = 0;//注意置零，为了之后还要计算需要
			}
			if (sum != 0 && i == n - 1)//如果最后一个未符合k值且前面都已符合，也要单独算一个人数
			{
				count++;
			}
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}