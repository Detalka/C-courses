#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct propysku
{
    char grupa[100];
	char nazva_duscuplinu[100];
	int hr;//������� ���������� ����� �� �������
} group;

void Write(FILE *f, group a)
{
	int i;
	
  if ((f = fopen ("file.bin", "ab+")) == NULL)
  {
  	cout << "File not open" << endl;
  	return;
  }
	
	do
     {cout<<"����� �����-";
     cin.ignore();
	gets(a.grupa);
	cout<<"����� ���������-";
	cin.ignore();
	gets(a.nazva_duscuplinu);
	cout<<"ʳ������ ���������� ����� �� �������-";
	cin>>a.hr;
	fwrite(&a,sizeof(a),1,f);
	cout << "���� ������ ���������� ����� ����i�� 1. ���� �i - ���� i���" << endl;
		cin >> i;
	} while(i == 1);
	fclose (f);
}

void Read(FILE *f, group a)
{
if ((f = fopen("file.bin", "rb")) == NULL)
{
	cout << "Error of file. Please check and try again" << endl;
  	return;
}
group mas[100]; 
int n=0;
do
{
	fread(&mas[n], sizeof(group),1,f);
	if (feof(f)) break;
	n++;
	}
while (1);
    int i, j, s, k;
k=0;
for (i=0; i<n-1; i++){
	for (j=i+1; j<n; j++){
		
	}
}
}

void clean ()
{
	FILE *f;
	f = fopen ("file.bin", "wb");
	fclose(f);
}

int main(int argc, char** argv) {setlocale (LC_ALL, "ukr");
char m;
group a;
FILE*f;
start:
cout<<"������� �������: ������ �����(w), ������� ���� ������ �� ����� ����� � ��������� �������� ��������(r), �������� ����(k), ��������� ������(q)"<<endl;
cin>>m;
	switch(m){
		case 'w':{
			Write(f, a);
			goto start;
			break;
		}
		case 'r':{
			Read(f,a);
			goto start;
			break;
		}
		case 'k':{
		    clean();
		    goto start;
		    break;
	         }
		case 'q':{
			goto end;
			break;
		}
	
	default: cout<<"fattal error"<<endl; goto start;
	}
	end:
	return 0;
}
