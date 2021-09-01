#include<iostream>
#include<vector>
using namespace std;

int Pair(vector<vector<int>> v){

    int maximum=INT_MIN;
    int m =v.size()-1;
    int n =v[0].size()-1;

    for(int a=0;a<m;a++){
        for(int b=0;b<n;b++){
            for(int c=a+1;c<=m;c++){
                for(int d=b+1;d<=n;d++){
                    if(v[c][d]-v[a][b]> maximum)
                        maximum = v[c][d]-v[a][b];
                }
            }
        }
    }
    return maximum;
}
int main(){
    vector<vector<int>> v={{ 1, 2, -1, -4, -20 },
             { -8, -3, 4, 2, 1 }, 
             { 3, 8, 6, 1, 3 },
             { -4, -1, 1, 7, -6 },
             { 0, -4, 10, -5, 1 }};
    
    cout<< Pair(v);
    return 0;
}