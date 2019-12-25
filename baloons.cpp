#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n = 0;
    cin >> n;
    int glob_cnt=0;
    bool deleted=true;
    vector<int> nums(n);
    for(int j = 0; j<n; j++)
        cin << nums[j];
    while(deleted){
            deleted=false;
        for (int i=0;i<(int)nums.size()-2;i++){
            if(nums[i]==nums[i+1]&&nums[i]==nums[i+2]){
            int start=i;
            int counter=3;
                while(nums[i]==nums[counter+i]){
                counter++;
                }
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
