#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int k_m=0,k_p=0;
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
 if (arr[i][j]<0){
 	k_m++;
 }
 else
 k_p++;
}
}
printf ("\n ʳ������ ������� �� ������ ���� � �������:\n");
printf ("������:""%5d",k_p);
printf ("\t³䒺��:""%5d", k_m);
printf ("\n\n");
printf ("������� ���� ����������� �����������:\n");
int x;
    // ��� ���:
    for(int i=1; i < m; ++i)
    {
        for(int j=0; j < i-1; ++j)
        {
            const int x=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=x;
        }
    }
 for(int i=0; i<m; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            printf("%7d",arr[i][j]);
        }
        cout<<endl;
    } 
}
