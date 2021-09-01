#include<bits/stdc++.h>
using namespace std;

vector<int> commonEle(int A[],int B[],int C[],int n1,int n2,int n3){
    vector<int> v;
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 and j<n2 and k<n3){
        
        while(A[i]==A[i+1] and i!=n1-1) i++;
        while(B[j]==B[j+1] and j!=n2-1) j++;
        while(C[k]==C[k+1] and k!=n3-1) k++;

        if(A[i]<B[j]) i++;
        else if(A[i]>B[j]) j++;
        else{
            if(A[i]<C[k]){
                i++;j++;
            }
            else if(A[i]>C[k]) k++;
            else{
                v.push_back(A[i]);
                i++;j++;k++;
            }
        }
    }
    return v;
}

int main(){


    return 0;
}