#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct propysku
{
    char grupa[100];
	char nazva_duscuplinu[100];
	int hr;//кількість пропущених годин за тиждень
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
     {cout<<"Назва групи-";
     cin.ignore();
	gets(a.grupa);
	cout<<"Назва дисципліни-";
	cin.ignore();
	gets(a.nazva_duscuplinu);
	cout<<"Кількість пропущених годин за тиждень-";
	cin>>a.hr;
	fwrite(&a,sizeof(a),1,f);
	cout << "Якщо хочете продовжити запис нажмiть 1. Якщо нi - любу iншу" << endl;
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
cout<<"Веведіть команду: внести запис(w), вивести вміст тексту та найти групу з найбільшою кількустю пропусків(r), очистити файл(k), завершити роботу(q)"<<endl;
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
