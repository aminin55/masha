#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
for (long long  i=0;i<=416787525;i++)
    for (long long j=0;j<=416787525;j++)
            if(i*j*j==416787525)
                cout <<"i =\t"<<i<<"\t j = \t"<<j<< "\t\t x^2+y^2 = \t"<<i*i+j*j<<"\t x*y^2 =\t"<< (i*j*j)<<endl;

    return 0;
}
