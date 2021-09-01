#include<iostream>

using namespace std;

void sort012(int a[],int n){
    int i=0;
    int j=1;
    int k = n-1;
    while(j<n && j<k){
        if(a[i]==0){
            i++;
            j++;
        }
        else if(a[i]==1){
            if(a[j]==0){
                swap(a[i],a[j]);
                i++;
            }
            else if (a[j]==1)
            {
                j++;
            }
            else{
                if(a[k]==2) k--;
                else if(a[k]==1){
                    swap(a[j],a[k]);
                    k--;
                    j++;
                }
                else {
                    swap(a[j],a[k]);
                    k--;
                    swap(a[i],a[j]);
                    i++;
                    j++;
                }
            }
            
        }
        else{
            if(a[j]==0){
                swap(a[i],a[j]);
                i++;
                j++;
            }
            else if(a[j]==1){
                swap(a[i],a[j]);
            }
            else{
                if(a[k]==2) k--;
                else if(a[k]==1){
                    swap(a[j],a[k]);
                    swap(a[i],a[j]);
                    k--;
                }
                else {
                    swap(a[i],a[k]);
                    k--;
                    i++;
                    j++;
                }
            }
        }
    }

}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
    return 0;
}