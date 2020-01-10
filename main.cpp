#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>
#include "profile.h"

using namespace std;

vector<string> gbv(){
vector<string> result;
for (int i=0;i<28000;i++){
    result.insert(result.begin(),to_string(i));
}
return result;
}

void gbv(vector<string> result){
    for (int i=0;i<28000;i++){
        result.insert(result.begin(),to_string(i));
    }
}

int main()
{

LOG_DURATION ("All");
gbv();

    return 0;
}
