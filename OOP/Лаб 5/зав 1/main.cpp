#include <iostream>
#include <string.h>
#define n 3
using namespace std;
struct ITNR {
		char BEG [100] ;
		char END [100] ;
		int NUM;
		double DISTANSE;
	} elemant;

int input (ITNR elemant[n]) {
       
	cout<<"������ ��� � ����� RT "<<endl;	
		int i=0;
	for(int i=0;i<n;i++){
		cout<<"������ ����� ����������� ������ �������� "<<endl;
     	cin>>elemant[i].BEG; 
    
	cout<<"������ ����� �������� ������ �������� "<<endl;
     	cin>>elemant[i].END;
    
	cout<<"������ ����� �������� "<<endl;
     	cin>>elemant[i].NUM;
    
	cout<<" ������ �������"<<endl;
    	 cin>>elemant[i].DISTANSE;
         
}

    return 1;
	
	}

int output (ITNR elemant[n]) {

char mr[100];
			cout<<"ENTER THE NAME OF STATION - "<<endl;
			cin>>mr;
			for(int i=0;i<n;i++){
					
			if((strcmp(elemant[i].BEG,mr)==0) || (strcmp(elemant[i].END,mr)==0))
			cout<<"NAME OF BEGIN- "<<elemant[i].BEG<<endl;
			cout<<"NAME OF END- "<<elemant[i].END<<endl;
			cout<<"NUMBER- "<<elemant[i].NUM<<endl;
			cout<<"DISTANSE- "<<elemant[i].DISTANSE<<endl;

			}
			
			return 3;
		}

int main() {
	setlocale(LC_CTYPE,"ukr");
	ITNR elemant[n];
		 input (elemant);
		output(elemant);
	

	return 0;
}
