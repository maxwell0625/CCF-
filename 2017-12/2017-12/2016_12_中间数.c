#include<stdio.h>


int main(void)
{
	int n;
	int a[1001];
	int judge;//��Ϊ�ж�λ
	int count1 = 0, count2 = 0;//�ֱ��Ŵ��ڸ�����С�ڸ���������
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
			judge = j;//�����ȣ���ʾ�ҵ����м����������������±긳ֵ��judge
		}
		else
		{
			//û���ҵ��м������������Ƚϱ������㣬����һ�εıȽ�
			count1 = 0;
			count2 = 0;
		}
	    if (count1 == 0 && count2 == 0)//û���ҵ��м���
		{
			judge = 0;//�������ж���
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