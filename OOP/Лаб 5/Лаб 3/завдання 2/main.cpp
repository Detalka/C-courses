#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int n,m;
	int A = 0, B = 0;
	printf("\n ������ ������� �����: n =");
	scanf("%d", &n);
	printf("\n ������ ������� ��������: m =");
	scanf("%d", &m);
	while (A >= B)
	{
		printf ("\n ������ ������� A i B:");
		scanf ("%d %d", &A, &B);
	}
	int** arr = new int*[n]; 
 cout<<"\n\n ������� :\n";
 for (int i=0;i<n;i++)
 { arr[i] = new int[m];
 cout<<"\n";
 for (int j=0;j<m;j++)
 {
 arr[i][j]=rand()%(B-A)+A;
 printf("%7d",arr[i][j]);
 }
 }
 int* ar = new int [n];
  printf("\n\n����������� ����� B:");
		for (int i = 0; i < n; i++)
		{
			ar[i] = rand() % (B - A) + A;
			printf("%5d", ar[i]);
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
	arr[i][j]=ar[i];
	}
	printf("%5d", arr[i][j]);
		}
	}
	return 0;
}
