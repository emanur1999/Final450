#ifdef _WIN32
#include<Windows.h>
#else
#include<unistd.h>
#endif
#include<iostream>
#include<cstdlib>
using namespace std;



//  USED SET..............




void Union(int arr1[],int m,int arr2[],int n){
    
    int c[]={0};
    int i=0;
    int j=0;
    int k=0;

    while(i<m && j<n){

        while(arr1[i] == arr1[i+1]){
            i++;
        }
        while(arr2[j] == arr2[j+1]){
            j++;
        }
        cout<<"i= "<<i<<" "<<"j= "<<j<<endl;
        //sleep(5);
        
        if(arr1[i]<arr2[j]){
            c[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr1[i] == arr2[j]){
            c[k] = arr1[i];
            i++;
            j++;
            k++;
        }
        else if(arr1[i] > arr2[j]){

            c[k] = arr2[j];
            j++;
            k++;
        }
    }
    for(;i<m;i++){
        c[k]= arr1[i];
        k++;
    }
    
    for(;j<n;j++){
        c[k]=arr2[j];
        k++;
    }
    cout<<"SIZE of UNION ARRAY = "<<k+1<<endl;
    for(int l =0;l<=k;l++){
        cout<<c[l]<<" ";
    }
}

int main(){
    int m;
    int n;
    cout<<"Size of first array= ";
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Size of second array= ";
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    Union(arr1,m,arr2,n);
    return 0;

}