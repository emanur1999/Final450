#include<bits/stdc++.h>
using namespace std;

vector<int> factorial(int N){

    vector<int> v={1};
    int carry = 0;
    int last;

    for(int i=2;i<=N;i++){

        for(int j=0;j<v.size();j++){

            int res = v[j]*i + carry;
            carry = res/10;
            last = res%10;

            v[j] = last;
        }
        while(carry){
            v.push_back(carry%10);
            carry = carry/10;

        }
    }
    return v;
}

int main(){
    vector<int> f = factorial(34);
    for(int i=f.size()-1;i>=0;i--){
        cout<<f[i];
    }
    return 0;
}