#include<bits/stdc++.h>
using namespace std;

int Intersection(int a[], int n, int b[], int m) {
        
        //using set to store the elements.
        unordered_set<int> s;
        int i=0;
        int j=0;
        int count =0;
        while(j<m && i<n){
            if(a[i] < b[j]){
                if(a[i]==a[i+1]){
                    i++;
                }
                else{
                i++;
                }
            }
            else if(a[i]==b[j]){
                if(a[i]==a[i+1]) i++;
                if(b[j]==b[j+1]) j++;
                
                else{
                count++;
                i++;
                j++;
                }
            }
            else{
                if(b[j]==b[j+1]) j++;
                else j++;
            }
        }
        return count;
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
    
    
    cout<<"SIZE ="<<Intersection(arr1,m,arr2,n);
    return 0;

}

