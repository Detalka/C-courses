#include <iostream>
#include <string>
#define n 300
using namespace std;
int main(int argc, char** argv)
{   string str;
    cout<<"Input text:\n";
    getline(cin, str, '\n');
    cout<<"Text:\n";
    cout<<str<<endl;
    return 0;
}

