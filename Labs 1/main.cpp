#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void Write(string Nazva_proekty,int koshtu, int chas1, int chas2){
	 cout<<"����� ������� = "<<endl;
     cin>>Nazva_proekty;
	 cout<<"�ᒺ� ����i� ���i����� �� ������ = "<<endl;
	 cin>>koshtu;
	 cout<<"������� ��������� ������� � ������i ������(��� �i�����i� i ����i����� ����i�) = ";
	 cin>>chas1;
	 cout<<"���������� ��������� ������� � ������i ������(��� �i�����i� i ����i����� ����i�) = ";
	 cin>>chas2;
	 ofstream file("Test.txt",ios::app);
	 file<<"����� �������-"<<Nazva_proekty<<endl;
	 file<<"�ᒺ� ����i� ���i����� �� ������-"<<koshtu<<endl;
	 file<<"������� ���������-"<<chas1<<endl;
	 file<<"���i������ ���������-"<<chas2<<endl;
	 file<<endl;
     file.close();    
}

void Read(string str){
ifstream file("Test.txt",ios::in);
if(!file){
cout<<"file not open"<<endl;
}
while(getline(file,str)) 
        cout << str << endl;
        file.close();
}

void clean(){
ofstream file("Test.txt",ios::trunc);
if(!file){
cout<<"file not open"<<endl;
}
file.close();    	
}

int main ()
{
	setlocale(LC_CTYPE, "ukr");
int koshtu,chas1,chas2,i;
string Nazva_proekty;
string str;
char n[128],m;
start:
cout<<"�����i�� �������: ������ �����(w), ������� ���� ������(r), �������� ����(k), ��������� ������(q)"<<endl;
cin>>m;
	switch(m){
		case 'w':{
			Write(Nazva_proekty,koshtu,chas1,chas2);
			goto start;
			break;
		}
		case 'r':{
			Read(str);
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
