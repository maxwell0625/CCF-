#include<stdio.h>


int main(void)
{
	int n, k;//nΪ����������kΪҪ�ﵽ������
	int a[1001];//��ʾÿ�鵰�������
	int i;
	int sum;
	sum = 0;
	int count = 0;//ͳ������
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++)//���뵰����
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] >= k)//���ĳ�鵰�����������kֵ����ֵ����������+1
		{
			count++;
		}
		else
		{
			sum += a[i];//δ�ﵽ��׼����ͣ�������ĵ����������ֱ�����ϱ�׼
			if (sum >= k)
			{
				count++;
				sum = 0;//ע�����㣬Ϊ��֮��Ҫ������Ҫ
			}
			if (sum != 0 && i == n - 1)//������һ��δ����kֵ��ǰ�涼�ѷ��ϣ�ҲҪ������һ������
			{
				count++;
			}
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}