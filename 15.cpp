#include<iostream>
using namespace std;

int minNoJump(int arr[],int n){

    
    
    if(n==0) return -1;
    else if(n==1) return 0;
    else{   
        int i = 0;
        int count = 0;
        while(i<n){
            i = i + a[i];
            jump = jump + arr[jump];
            count+=1;
        }
        return count+1;
    }
    

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"ANS:"<<minNoJump(a,n);
    return 0;
}