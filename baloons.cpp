#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int glob_cnt=0;
    bool deleted=true;
    vector<int> nums={1,2,2,3,3,3,3,2,1,1,4};
    while(deleted){
            deleted=false;
        for (int i=0;i<(int)nums.size()-2;i++){
            if(nums[i]==nums[i+1]&&nums[i]==nums[i+2]){
            int start=i;
            int counter=3;
                while(nums[i]==nums[counter+i]){
                counter++;
                }
            cout<< counter<< endl;
            nums.erase(nums.begin()+start,nums.begin()+counter+start);
            deleted=true;
            glob_cnt+=counter;
            }
        }
    }

  for(auto n:nums) cout<< n<<' ';
    cout << endl<<glob_cnt;
    return 0;
}
