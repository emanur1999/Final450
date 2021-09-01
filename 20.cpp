#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> & nums,int s,int e){
        for(int i=s,j=e;i<j;i++,j--){
            swap(nums[i],nums[j]);
        }
}
vector<int> nextPermutation(vector<int> & nums){

    int min;
    int i;
    for( i = nums.size()-1;i>0;i--){
        if(nums[i-1]<nums[i]){
            min = i-1;
            break;
        }
    }
    if(i==0){
        for(int l=0,h=nums.size()-1;l<h;l++,h--){
            swap(nums[l],nums[h]);
        }
        return nums;
    
    }
    
    for(int j=nums.size()-1;j>min;j--){
        if(nums[min]<nums[j]){
            swap(nums[min],nums[j]);
            break;

        }
    }
    reverse(nums,min+1,nums.size()-1);
    return nums;
}

int main(){

    vector<int> v={1};
    nextPermutation(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}