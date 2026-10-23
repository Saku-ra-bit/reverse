//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//void count(int j, int arr[],int arr1[])
//{
//	if (j > 2 && arr[j] - arr[j - 1] == 1)
//	{
//		count (j - 1, arr, arr1);
//		arr[j]++;
//	}
//}
//int main()
//{
//	int N, num, j=0, arr[1000] = { 1 }, arr1[1000] = { 0 };
//	scanf("%d", &N);
//	for (int i = 2; i < N/2; i++)
//	{
//		while(N% i == 0)
//		{
//			arr[j] *= i;
//			N /= i;
//		}
//		if (arr[j] != 1)
//		{
//			j++;
//		}
//	}
//	for (j=0; arr[j] != 1; j++)
//	{
//		count(j, arr, arr1);
//	}
//	for (j = 0; arr[j] != 1,j<1000; j++)
//	{
//		num = arr1[j] > arr1[j + 1] ? arr1[j] : arr1[j + 1];
//	}
//	printf("%d\n", num);
//	for (j = 0; arr[j] != 1,j<1000; j++)
//	{
//		if(arr1[j] == num)
//		{
//			for (int i = 0; i < num; i++,j--)
//			{
//				printf("%d", arr[j]);
//			}
//		}
//	}
//	return 0;
//}