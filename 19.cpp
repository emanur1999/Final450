#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        
        int i=0;
        int fast = intervals[i][0]; 
        int last = intervals[i][1];
        while(i<intervals.size()-1){
            if(last > intervals[i+1][0]){
                if(last <intervals[i+1][1]){
                    last = intervals[i+1][1];
                }
                i++;
            }
            else if(last == intervals[i+1][0]){
                last = intervals[i+1][1];
                i++;
            }
            else{
                v.push_back({fast,last});
                i++;
                fast = intervals[i][0]; 
                last = intervals[i][1];
            }
        }
        v.push_back({fast,last});
        
        return v;
}

int main(){

    vector<vector<int>> v = {{1,3},{2,6},{8,10},{15,18}};
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++){
        cout<<"["<<v[i][0]<<","<<v[i][1]<<"],";
    }
    cout<<endl;
    vector<vector<int>> result = merge(v);

    for(int i=0;i<4;i++){
        cout<<"["<<result[i][0]<<","<<result[i][1]<<"],";
    }
    return 0;
}