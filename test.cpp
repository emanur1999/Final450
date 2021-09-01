#include<bits/stdc++.h>
using namespace std;

int Area(vector<int> v){
    int Max = 0;
    stack<int> s;
    s.push(0);
    for(int i=1;i<v.size();i++){
        int curr = v[i];
        if(s.empty() ||curr> v[s.top()]){
            s.push(i);
        }
        else{
            while(!s.empty() && curr<v[s.top()]){
                int temp = v[s.top()];
                if(s.empty()){
                    Max = max(Max,temp*i);
                }
                else{
                    Max = max(Max,temp*(i-s.top()-1));
                }
            }
            s.push(i);
        }
    }
    if(!s.empty()){
        while(!s.empty()){
                int i = v.size(); 
                int temp = v[s.top()];
                if(s.empty()){
                    Max = max(Max,temp*i);
                }
                else{
                    Max = max(Max,temp*(i-s.top()-1));
                }
            }
    }
    return Max;

}
int helper(int m,int n,vector<vector<int>> matrix){

    vector<int> v(n);
    int maxArea=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            v[j]+=matrix[i][j];
        }
        maxArea =  max(Area(v),maxArea);

    }
    return maxArea;
}

int main(){

    return 0;
}