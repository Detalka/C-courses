#include <iostream>
#include <math.h>
using namespace std;
double fun(double k, double a){double p;
	p=pow(k,a)+pow(a,k);
	return p;
}
int main(int argc, char** argv) {double x=2.00, y=4.03, z=7.00;
double F;
double a=3.74;
F=exp(fun(x,a))+pow(fun(y,a),2)+sqrt(fun(z,a));
cout<<"F="<<F<<endl;
	return 0;
}
