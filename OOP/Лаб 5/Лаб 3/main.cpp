//#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
#define N 10
#define M 10
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int a[N][M];
	int b[N];
	int n = N + 1;
	int m = M + 1;
	int A = 0, B = 0, S, S1 = 0, S2 = 0;
	while (n > N) 
	{
		printf("\n ������ ������� �����: n =");
		scanf("%d", &n);
	}
	while(m > M){
	printf("\n ������ ������� ��������: m =");
		scanf("%d", &m);
	}
	while (A >= B)
	{
		printf ("\n ������ ������� A i B:");
		scanf ("%d %d", &A, &B);
	}
	printf("\n\n������� A:");
	for (int i = 0; i < n; i++)
	{
		printf("\n\n");
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % (B - A) + A;
			printf("%5d", a[i][j]);
		}
	}
	printf("\n\n����������� ����� B:");
		for (int i = 0; i < n; i++)
		{
			b[i] = rand() % (B - A) + A;
			printf("%5d", b[i]);
		}
	int k=m+1;
	while(k > m){
	printf("\n ������ ����� ������� ���� ������� ������� �� �������� ������������ ������: k =");
		scanf("%d", &k);
	}
	printf("\n\n������� A ���� ����:");
	for (int i = 0; i < n; i++)	{
		printf("\n\n");
		for (int j = 0; j<m; j++){
		if(k==j){
	a[i][j]=b[i];
	}
	printf("%5d", a[i][j]);
		}
	}
	return 0;
}
