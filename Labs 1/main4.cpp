#include <iostream>
#include <math.h>
#define a 3
#define c 2
#define m 3
#define n 3
using namespace std;
void function(double s1){double b[100][100],x[100];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
	cout<<"b["<<i<<"]["<<j<<"]=";
	cin>>b[i][j];
			}
	}
for(int i=1;i<=n;i++){
double s=0;
for(int j=1;j<=m;j++){
s+=b[1][j]+a;	
}
x[i]=exp(s)+c;
s1+=x[i];
}
cout<<"s1="<<s1<<endl;
}
double fun(double F){
	F=(n*a+function(s1))/function(s1)
return F;
}
int main(int argc, char** argv) {double F;
F=fun(F);
cout<<"F="<<F<<endl;
	return 0;
}
