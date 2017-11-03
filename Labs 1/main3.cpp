#include <iostream>
#include <math.h>
#define A 100
#define B 100

using namespace std;
void function(double b[A][B],double x[],int m, int n, double a, double c)
{
	for (int i=1;i<=m;i++){
		double s=0;
		for(int j=1;j<=n;j++){
			s+=b[i][1]+a;
		}
		x[i]=exp(s);
	}
}


double fun(double b[A][B], double a, double c,int m, int n){double s1=0;
double x[A];
double F=0;
function(b,x,m,n,a,c);
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			s1+=x[i];
		}
	}
	F=(n*a+s1)/s1;
    return F*a*n;
}

int main(int argc, char** argv) {double F;
int m; int n;
cout<<"m=";
cin>>m;
cout<<"n=";
cin>>n;
double b[A][B];
	 for(int i=1;i<=m;i++){
		 for(int j=1;j<=n;j++){
	     cout<<"b["<<i<<"]["<<j<<"]=";
	     cin>>b[i][j];
			}
	}
	double a,c;
	cout<<"Enter a";
	cin>>a;
	cout<<"Enter c";
	cin>>c;
	F=fun(b,a,c,m,n);
	cout<<"F="<<F<<endl;
}
