#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string>
//int main()
//{
//    char str[100];
//    char str2[100][100];
//    printf("ÇëÊäÈë£º");
//    fgets(str, sizeof(str), stdin);
//    str[strcspn(str, "\n")] = '\0';
//    int i = 0, j = 0, n = 0;
//    while (str[n] != '\0')
//    {
//        if (str[n] != ' ' && str[n] != '\0')
//        {
//            str2[i][j] = str[n];
//            j++;
//        }
//        else if (j != 0)
//        {
//            str2[i][j] = '\0'; 
//            i++;
//            j = 0;
//        }
//        n++;
//    }
//    if (j != 0)
//    {
//        str2[i][j] = '\0';
//        i++;
//    }
//    int x = i-1;
//    while (x >= 0)
//    {
//        int y = 0;
//        while (str2[x][y] != '\0')
//        {
//            printf("%c", str2[x][y]);
//            y++;
//        }
//            
//        if (x > 0)
//            printf(" ");
//        x--;
//    }
//	printf("\n");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i<7;i++)
//	{
//		for (int j = 0; j < 6-i; j++)
//		{
//			printf(" ");
//		}
//		for (int k=0;k<2*i+1;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i=5; i >= 0; i--)
//	{
//		for (int j = 0; j < 6 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int money = 20;
//	int mount = 0;
//	int bottle = 0;
//	while(money > 0|| bottle > 1)
//	{
//		if (money > 0)
//		{
//			money -= 1;
//			mount++;
//			bottle++;
//		}
//		if (bottle > 1)
//		{
//			bottle -= 1;
//			mount++;
//		}
//	}
//	printf("mount=%d\n", mount); 
//	return 0;
//}

//int main()
//{
//	int k;
//	scanf("%d", &k);
//	double sum = 0;
//	for (int i = 1; ; i++)
//	{
//		sum += 1.00 / i;
//		if (sum > k)
//		{
//			printf("i=%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10],height,count=0;
//	scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
//	scanf("%d", &height);
//	for (int i = 0; i < 10; i++)
//	{
//		if (height + 30 >= arr[i])
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int l, m, arr[10001]= {0},count=0; 
//	scanf("%d %d",&l,&m);
//	for (int i = 0; i < m; i++)
//	{
//		int x, y;
//		scanf("%d %d", &x, &y);
//		for (int j = x; j <= y; j++)
//		{
//			arr[j] = 1;
//		}
//
//	}
//	for (int i = 0; i <= l; i++)
//	{
//		if (arr[i] == 0)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[7][2] = { 0 }, count = 0,sum[7] = { 0 },ret=0;
//	for (int i=0; i<7; i++)
//	{
//		scanf("%d %d", &arr[i][0], &arr[i][1]);
//		sum[i] = arr[i][0] + arr[i][1];
//	}
//	for (int j = 1; j < 7; j++)
//	{
//		ret = (sum[ret] >= sum[j] ? ret : j);
//	}
//	if (sum[ret] >8)
//	{
//		printf("%d", ret + 1);
//	}
//	else
//		printf("0");
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int spend[12] = { 0 }, money = 0, count = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		money += 300;
//		scanf("%d", &spend[i]);
//		money -= spend[i];
//		if (money < 0)
//		{
//			printf("-%d", i + 1);
//			return 0;
//		}
//		while (money >= 100)
//		{
//			money -= 100;
//			count++;
//		}
//		
//	}
//	printf("%d", money + count * 120);
//	return 0;
//}

//P1150
//#include <stdio.h>
//int main()
//{
//	long n = 0, k = 0,count = 0;
//	scanf("%ld %ld", &n, &k);
//	for(long i = 0,j = 0; i < n; i++, count++)
//	{
//		j++;
//		if (j == k)
//		{
//			j = 0;
//			n++;
//		}
//	}
//	printf("%ld", count);
//}

//P1150 N.2 resolution
//#include <stdio.h>
//int main()
//{
//	long n = 0, k = 0;
//	scanf("%ld %ld", &n, &k);
//	int count = n;
//	while(n/k>0)
//	{
//		count += n / k;
//		n = n / k + n % k;
//	}
//	printf("%ld", count	);
//	return 0;
//}
