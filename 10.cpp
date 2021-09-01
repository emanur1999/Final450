#include<iostream>
using namespace std;

void moveNegative(int a[],int n){
    int i=0;
    int j=1;
    while(j<n){
        if(a[i]<0){
            i++;
            j++;
        }
        else{
            if(a[j]<0){
                int temp = a[j];
                for(int k=j;k>i;k--){
                    a[k]=a[k-1];
                }
                a[i]=temp;
            }
            else{
                j++;
            }
        }
    }
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    moveNegative(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}