//#include<stdio.h>
//#include <limits.h>
//
//int main(void)
//{
//	int n, m, a, drop, i, j;
//
//	/* �������ݣ�����ƻ���������������ֵ���� */
//	int all = 0, maxd = INT_MIN, id = 0;
//
//	scanf_s("%d%d", &n, &m);
//	for (i = 0; i < n; i++) {
//		scanf_s("%d", &a);
//		all += a;
//
//		 �������ֵ����
//		drop = 0;
//		for (j = 0; j < m; j++) {
//			scanf_s("%d", &a);
//			all += a;
//			drop -= a;
//		}
//		if (drop > maxd) maxd = drop, id = i;
//	}
//
//	/* ������ */
//	printf("%d %d %d\n", all, id + 1, maxd);
//	system("pause");
//	return 0;
//}
//
//
//int main(void)
//{
//	int n, m, drop, all = 0, remains = 0;
//	int x;
//	int i, j;
//	int max = INT_MIN;
//	scanf("%d%d", &n, &m);
//	
//	for (j = 0; j < n; j++)
//	{
//		scanf("%d", &x);
//		all += x;
//		drop = 0;
//		for (i = 0; i < m; i++)
//		{
//			scanf("%d", &x);
//			all += x;
//			drop = drop - x;
//		}
//		if (drop > max)
//		{
//			max = drop,
//			remains = i;
//		}
//	}
//	printf("%d %d %d", all, remains-1, max);
//	system("pause");
//	return 0;
//}