#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;
int main ()
{
setlocale(LC_CTYPE,"ukr") ;
int n,k=1,min;
int a,b;
 		cout<<"������ ������� ��������: n = ";
 		cin>>n;
 		double A[n];
 	while(1){
 		cout<<"\n\n ������ ������� �� � ������� b �����:\n a=";
 		cin>>a;
 		cout<<"\n b=";
 		cin>>b;
 		if (a>b){
 			cout<<"����������� �������� �������";
 }
 		else
 		break;
}
double *A1=A;
 cout<<"\n ������� ����� � �������["<<a<<","<<b<<"]:\n";
 for (int i=1; i<n+1; i++)
 { if (i%10==0) printf("\n");
 *A1 =a+rand()%b;
 cout<<*A1<<"    ";
 A1++;
 }
 cout<<endl;
 	min=fabs(A[1]);
  for (int i=1; i<n+1; i++)
 {
 	if (min>fabs(*A1)){
 	min=fabs(*A1);
	 k=i;
	 A1++;
	 }
 }
 cout<<"����� ���������� �� ������ �������� ="<<k<<endl;
 int r=0;
 double sum=0;
 for (int i=1;i<n+1;i++){
 	 	if (r==1){
 		sum+=fabs(*A1);
	 }
	 if(*A1<0){
 	r=1;
	 }
	 A1++;
 }
 cout<<"���� �������� ���� ������� �䒺����� �������� ="<<sum<<endl;
 return 0;
}
