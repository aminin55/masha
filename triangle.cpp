#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
double step=0.0001;
for (double i=0;i<=6;i+=step)
    for (double j=0;j<=6;j+=step)
            if((double)1/i+1/j+1/(6-(i+j))<2.0000001&&(double)1/i+1/j+1/(6-(i+j))>1.9999999)
                cout <<"i = "<<i<<" j = "<<j<<" k = "<<6-(i+j)<<"summa="<< (1/i+1/j+1/(6-(i+j))) <<endl;

    return 0;
}