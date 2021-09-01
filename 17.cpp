#include<iostream>
#include<algorithm>
using namespace std;

void merge2array(int arr1[],int m,int arr2[],int n){


    int i=m-1,j=0;
    while(i>=0 && j<n){
        if(arr1[i] <arr2[j]) break;

        int temp = arr1[i];
        arr1[i] = arr2[j];
        arr2[j]= temp;
        i--;
        j++;
    }
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
   /* int i=0,j=0;
    while(i<m && j<n){
        int temp = arr1[m-1];
        if(arr1[i] > arr2[j]){
            for(int k = n-1;k>i;k--){
                arr1[k]= arr1[k-1];
            }
            arr1[i] = arr2[j];
            arr2[j]= temp;
            i++;
            j++;
        }
        else i++;
    }
    
    sort(arr2,arr2+n);*/
}

int main(){

    int a[4]={1,3,5,7};
    int b[5]={0,2,6,8,9};
    int m = 4,n = 5;
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    merge2array(a,m,b,n);
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}