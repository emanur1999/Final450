#include<iostream>

using namespace std;

// reversing array
void reverse(int a[],int n){
    int s =0;
    int e = n-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Before reverse"<<endl;
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    reverse(a,n);
    cout<<endl<<"After reverse"<<endl;
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}