#include <iostream> //12
#include <stdio.h>

using namespace std;

typedef struct group
{
	char group1[100];
	char Ds[100];// дисципліна
	int h;// к-сть ропущених годин
} group2;

void write(FILE *f, group2 a)
{
	int i;
	
  if ((f = fopen ("file.fhf", "ab+")) == NULL)
  {
  	cout << "Error of file. Please check and try again" << endl;
  	return;
  }
	
	do
     {
	 cout<<"Enter the name of group "<<endl;
	 cin.ignore();
	 gets(a.group1);
	 cout << "Enter the name of discipline " << endl;
	 cin.ignore();
	 gets(a.Ds);
	 cout << "Enter the number of missed hours = " << endl;
	 cin>>a.h;
		fwrite( &a, sizeof(a), 1, f);
		
		cout << "If you want to continue work, press 1. If no - press another one. " << endl;
		cin >> i;
	} while(i == 1);
	fclose (f);
}

void read(FILE *f, group2 a)
{
if ((f = fopen("file.fhf", "rb+")) == NULL)
{
	cout << "Error of file. Please check and try again" << endl;
  	return;
}
group2 mas[100]; 
int n=0;
do
{
	fread(&mas[n], sizeof(group2),1,f);
	if (feof(f)) break;
	n++;
	}
while (1);
int i, j, s, k;
k=0;
char l[100];
for (i=0;i<n;i++){
	cout<<a.group1;
	for (i=0;i<n;i++){
		
	}
}
      fclose (f);
}

void clean ()
{
	FILE *f;
	f = fopen ("file.fhf", "wb");
	fclose(f);
}

int main(int argc, char** argv) {
	
	int i;
	group2 a;
	FILE *f;
do{
	
	cout << "If you want to write information - press 1" << endl;
	cout << "If you want to work with information - press 2" << endl;
	cout << "If you want to clean file - press 3" << endl;
	cout << "If you want to exit - press 0" << endl;
	cin >> i;
	 switch (i)
	 {
	 	case 1: write(f, a); break;
	 	case 2: read(f, a); break;
	 	case 3: clean(); break;
	 	case 0:
		default: return 0;
	 }
}while(1);
	return 0;
}
