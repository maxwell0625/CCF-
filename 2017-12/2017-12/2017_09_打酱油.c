//#include<stdio.h>
//
////小明带着N元钱去买酱油。酱油10块钱一瓶，商家进行促销，每买3瓶送1瓶，或者每买5瓶送2瓶。请问小明最多可以得到多少瓶酱油。
////　　输入的第一行包含一个整数N，表示小明可用于买酱油的钱数。N是10的整数倍，N不超过300。
//
//#define danjia 10;
//
//int main(void)
//{
//	int n, geshu = 0, wushi, sanshi;
//	scanf_s("%d", &n);
//	while (n % 10 == 0 && n <= 300)
//	{
//		wushi = n / 50;//五十的组数
//		sanshi = (n - wushi * 50) / 30;//三十的组数
//		geshu = wushi * 7 + sanshi * 4 + n % 50 % 30 / danjia;//注意第三个算式，用取余来查看是否满足促销活动
//		//geshu = n / 10 + n / 50 * 2 + n % 50 / 30;//不理解第二个算式为什么*2
//		printf("%d", geshu);
//		break;
//	}
//	system("pause");
//	return 0;
//}