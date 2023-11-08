#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int Fipo(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fipo(n - 1) + Fipo(n - 2);
//	}
//}

//int main()
//{
//	  递归解法
//
//	/*int n = 0;
//	scanf("%d", &n);
//	int ret = Fipo(n);
//	printf("%d", ret);*/
//	return 0;
//}


//   迭代解法

int Fibo(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fibo(n);
	printf("%d", ret);
	return 0;
}