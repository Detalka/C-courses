//#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main ()
{
setlocale(LC_CTYPE,"ukr") ;
int n,k,min;
int a,b;
int A[100];
 		cout<<"������ ������� ��������: n = ";
 		cin>>n;
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
 cout<<"\n ������� ����� � �������["<<a<<","<<b<<"]:\n";
 for (int i=1; i<n+1; i++)
 { if (i%10==0) printf("\n");
 int number =a+rand()%b;
 cout<<number<<"    ";
 A[i]=number;
 min=abs(A[1]);
 }
 cout<<endl;
 for (int i=1; i<n+1; i++)
 {
 if(min>abs(A[i])){
 min=abs(A[i]);
 k=i;
 } 
 }
 cout<<"����� ���������� �� ������ �������� ="<<k<<endl;
 int r=0;
 double sum=0;
 for (int i=1;i<n+1;i++){
 	 	if (r==1){
 		sum+=abs(A[i]);
	 }
	 if(A[i]<0){
 	r=1;
	 }
 }
 cout<<"���� �������� ���� ������� �䒺����� �������� ="<<sum<<endl;
 return 0;
}
