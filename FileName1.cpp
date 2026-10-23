#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int K,flag=0;
//	scanf("%d", &K);
//	for (int i = 10000; i <=30000; i++)
//	{
//		if (i/100%K==0&&i/10%1000%K==0&&i%1000%K==0)
//		{
//			printf("%d\n", i);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("No");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	long long int arr1[1000], arr2[1000], arr3[1000];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld", &arr1[i]);
//	}
//	for (int i = 0; i < n-1; i++)
//	{
//		arr2[i] = i + 1;
//		arr3[i] = arr1[i] > arr1[i + 1] ? arr1[i] - arr1[i + 1] : arr1[i + 1] - arr1[i]; 
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 2 - i; j++)
//		{
//			if (arr3[j] > arr3[j + 1])
//			{
//				arr3[j] ^= arr3[j + 1];
//				arr3[j + 1] ^= arr3[j]; 
//				arr3[j] ^= arr3[j + 1];
//			}
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr3[i] != i+1) 
//		{
//			printf("Not jolly");
//			return 0;
//		}
//	}
//	printf("Jolly");
//	return 0;
//}

//#include <stdio.h>
//char light[2000001] = { 0 };
//int main()
//{
//	int n;
//	long int t;
//	double a;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lf %ld", &a, &t);
//		for (int j = 1; j <= t; j++)
//		{
//			light[(int)(a * j)]^=1;
//		}
//	}
//	for (int i = 0; i < 2000000; i++)
//	{
//		if (light[i] == 1)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//	return 0;
//}
//dsh给了不循环的写法

