#include <iostream>
#include <math.h>
#define p(k) (pow(k,a)+pow(a,k))
using namespace std;
int main(int argc, char** argv) {double x=2.00, a=3.74, y=4.03, z=7.00;
double F;
F=exp(p(x))+pow(p(y),2)+sqrt(p(z));
cout<<"F="<<F<<endl;
	return 0;
}
