#define _CRT_SECURE_NO_WARNINGS
//�ж�һ�����Ƿ�Ϊ����
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0; int j = 0; int count = 0;
//	//sqrt -��ƽ�������ֿ⺯����Ҫͷ�ļ�<math.h>
//	for (i = 100; i <= 200; i++)
//	{
//		// �ж�i�Ƿ�Ϊ����
//		//�����жϵĹ�������ֻ������1��������
//		//�Գ���
//		//����2 -> i-1��j
//		for (j = 2; j <=sqrt(i); j++)  //���ִ��� error C2668: ��sqrt��: �����غ����ĵ��ò���ȷ
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
//1000-2000�����꼰����
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ���� 
//		//�ܱ�4�������Ҳ��ܱ�100�������ܱ�400����������
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
////�������������Լ����շת�������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (a%b )//a%b!=0,ѭ������
//	{
//		r = a%b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}
////��ӡ1-100��3�ı���
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
////�������������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//����������2  3  6
//	//�㷨ʵ�֣�a�����ֵ��b��֮��c����Сֵ
//	if (a < b)//��a>=b����ʱa�����b�Ľϴ�ֵ�������
//	{
//		int tmp = a;//����  ��ʱ����tmp
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
