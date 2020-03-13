#define _CRT_SECURE_NO_WARNINGS
//判断一个数是否为素数
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0; int j = 0; int count = 0;
//	//sqrt -开平方的数字库函数需要头文件<math.h>
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断i是否为素数
//		//素数判断的规则，素数只能整除1和它本身
//		//试除法
//		//产生2 -> i-1个j
//		for (j = 2; j <=sqrt(i); j++)  //出现错误 error C2668: “sqrt”: 对重载函数的调用不明确
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j >sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//1000-2000年闰年及数量
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年 
//		//能被4整除并且不能被100整除或能被400整除是闰年
//		
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		
//	} 
//	printf("\ncount=%d\n", count);
//	return 0;
//}
////求两个数的最大公约数（辗转相除法）
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (a%b )//a%b!=0,循环继续
//	{
//		r = a%b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}
////打印1-100的3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
////输入三个数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//输入三个数2  3  6
//	//算法实现，a放最大值，b次之，c放最小值
//	if (a < b)//若a>=b，此时a是相对b的较大值，无需变
//	{
//		int tmp = a;//创建  临时变量tmp
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}
