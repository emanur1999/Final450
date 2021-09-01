#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int>& nums) {
        vector<int> temp= nums;
        sort(temp.begin(),temp.end());
        for(int i =0;i<temp.size();i++){
            if(temp[i]==temp[i+1]) return temp[i];
        }
        return -1; 
        
        
    }
int main(){

    vector<int> v = { 4,2,1,3,2,6,8,9,7};
    int ans = findDuplicate(v);
    cout<<ans;
    return 0;
}