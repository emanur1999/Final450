#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n){
    int i=0;
    int j=1;
    while(j<n){
        if(arr[i]>=0 and arr[j]<0){
            int temp = arr[j];
            for(int k=j;k>i;k--){
                arr[k] = arr[k-1];

            }
            arr[i] = temp;
            i=i+2;
            j++;
            
        }
        else if(arr[i]>=0 and arr[j]>=0){
            j++;
        }
        else if(arr[i]<0 and arr[j]<0){
            j++;
        }
        else{
            int temp = arr[j];
            for(int k=j;k>i+1;k--){
                arr[k] = arr[k-1];

            }
            arr[i+1] = temp;
            i = i+2;
            j++;
        }
    }
}
int main(){
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n=10;
    rearrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}