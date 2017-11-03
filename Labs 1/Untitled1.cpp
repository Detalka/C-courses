#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
struct a
{
	string grupa;
	string nazva_duscuplinu;
	int hr;//кількість пропущених годин за тиждень
}group1,nazva2,hr3;

void opr(){
	ofstream file("Group.bin",ios::binary|ios::in);
		if(!file){
		cout<<"file not open"<<endl;
		}
		else{
			int i=0,k=0;
	while(!file.eof(){
	
	
	}
	}
}
void Read(string str){
	ifstream file("Group.bin",ios::binary|ios::in);
	if(!file){
	cout<<"file not open"<<endl;
}
else{
while(getline(file,str)) 
        cout << str << endl;
        file.close();
}
}
void clean(){
ofstream file("Group.bin",ios::binary|ios::trunc);
if(!file){
cout<<"file not open"<<endl;
}
file.close();    	
}

void Write(){
	cout<<"Назва групи-";
	cin>>group1.grupa;
	cout<<"Назва дисциплiни-";
	cin>>nazva2.nazva_duscuplinu;
	cout<<"Кiлькiсть пропещуних годин-";
	cin>>hr3.hr;
	ofstream file("Group.bin",ios::binary|ios::app);
	if(!file){
	 cout<<"file not open"<<endl;
	 }
	 else{
	 file<<"Назва групи-"<<group1.grupa<<endl;
	 file<<"Назва дисциплiни"<<nazva2.nazva_duscuplinu<<endl;
	 file<<"Кiлькiсть пропущених годин-"<<hr3.hr<<endl;
file.close();
}	 
}

int main(int argc, char** argv) {setlocale (LC_ALL, "ukr");
char m;
string str;
start:
cout<<"Веведіть команду: внести запис(w), вивести вміст тексту(r), очистити файл(k), пошук(f),опрацювання(o), завершити роботу(q)"<<endl;
cin>>m;
	switch(m){
		case 'w':{
			Write();
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
		case 'o':{
			opr();
			goto start;}
			
		case 'q':{
			goto end;
			break;
		}
	
	default: cout<<"fattal error"<<endl; goto start;
	}
	end:
	return 0;

}
