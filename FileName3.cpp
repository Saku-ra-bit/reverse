#define _CRT_SECURE_NO_WARNINGS
//  #include <stdio.h>
//
//int main()
//{
//	int m,n,num=0;
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (i % 10 == 2)
//		{
//			num++;
//		}
//		int j = i;
//		while (j > 10)
//		{
//			j /= 10;
//			if (j % 10 == 2)
//			{
//				num++;
//			}
//		}
//	}
//	printf("%d\n", num);
//}

//#include <stdio.h>
//int main()
//{
//	char group[10], star[10];
//	long long num_group = 1, num_star = 1;
//	scanf("%s %s", group, star);
//	for (int i = 0; i < 6 && group[i] != '\0'; i++)
//	{
//		num_group = (group[i]-'A'+1) * num_group % 47;
//	}
//	for (int i = 0; i < 6 && star[i] != '\0'; i++)
//	{
//		num_star = (star[i]-'A'+1) * num_star % 47;
//	}
//	printf((num_group  == num_star ) ? "GO" : "STAY");
//	return 0;
//}

//#include<stdio.h>
//
//long long f[21][21];
//char sign[21][21];
//int main()
//{
//	int x, y, m, n;
//	if (scanf("%d %d %d %d", &n, &m, &x, &y) != 4) return 0;
//	int Dx[9] = { 1,1,2,2,-1,-1,-2,-2,0 };
//	int Dy[9] = { 2,-2,1,-1,2,-2,1,-1,0 };
//	for (int i = 0; i < 9; i++)
//	{
//		int nx = x + Dx[i];
//		int ny = y + Dy[i];
//		if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)
//		{
//			sign[nx][ny] = 1;
//		}
//	}
//	f[0][0] = sign[0][0] ? 0 : 1;
//	for (int i = 1; i <= n; i++)
//	{
//		f[i][0] = sign[i][0] ? 0 : f[i - 1][0];
//	}
//	for (int j = 1; j <= m; j++)
//	{
//		f[0][j] = sign[0][j] ? 0 : f[0][j - 1];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			f[i][j] = sign[i][j] ? 0 : f[i - 1][j] + f[i][j - 1];
//		}
//	}
//	printf("%lld", f[n ][m ]);
//	return 0;
//}
#include <stdio.h>
int a[10005], b[10005], g[10005], k[10005];
int main()
{
	int n,x,y;
	if((scanf("%d", &n)) != 1) return 0;
	for (int i =  1; i <= n; i++)
	{
		if(scanf("%d %d %d %d", &a[i], &b[i], &g[i], &k[i]) != 4) return 0;
	}
	scanf("%d %d", &x, &y);
	for (int i = n; i > 0; i--)
	{
		if (x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i])
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}