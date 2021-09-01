#include<iostream>
using namespace std;

void maxminAraay(int a[],int n){
    int maxElement;
    int minElement;
    if(n==0){
        maxElement = 0;
        minElement = 0;
    }
    else if(n==1){
        maxElement = a[0];
        minElement = a[0];
    }
    else{

        maxElement = a[0];
        minElement = a[0];

        for(int i=1;i<n;i++){

            if(maxElement < a[i]){
                maxElement = a[i];
            }

            else if (minElement >a[i]){
                minElement = a[i];
            }            
            
        }
    }
    cout<<"MAX = "<<maxElement<<endl;
    cout<<"MIN = "<<minElement<<endl;

} 
int main(){

    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    maxminAraay(arr,n);
    return 0;
}