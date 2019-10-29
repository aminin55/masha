/*
{555555555,555555555,555555555,555555555,555555555,555555555,555555555,555555555,555555555,555555555,55555555,5,5,5,5,5,5}1316143839 Mindelta= 3642549
*/

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
int SumVec(vector<long long> vec)
    {
    int result=0;
    for (auto v:vec) result+=v;
    return result;
    }

vector<long long> fillvec(){
    vector<long long> result;
    string str;
    for (int j=1;j<10;j++)
        {
        for (int i=0;i<10;i++)
            {
            str+=to_string(j);
            result.push_back(stoll(str));
            }
        str="";
        }
    return result;
}

long long MakeNum(int d, int n){
    string s;
for(int i=0;i<n;i++)
    {
    s+=to_string(d);
    }
return stoll(s);
}

void Pvec(vector <long long>& vec)
{
    cout<<"{";
    bool first=true;
for(auto v: vec)
    {
    if(!first)cout<<",";
    first=false;
    cout <<v;
    }
    cout<<"}";
}



int main()
{
long long delta=0;
long long mindelta=1312501290;
const long long lim=1312501290;
for (int k=1;k<=9;k++)
{
vector<long long> nums(17,k);
    for(int i=0;i<17;i++)
    {
        for (int j=1;j<=9;j++){
        nums[i]=MakeNum(k,j);
        delta=SumVec(nums)-lim;
        if(delta<mindelta&&delta>=0)
            {
            mindelta=delta;
            Pvec(nums);
            cout <<SumVec(nums)<<" Mindelta= "<<mindelta<<endl;
            }

        }
    }
}
return 0;
}

