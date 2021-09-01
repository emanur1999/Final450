#include<iostream>
using namespace std;


int  merge(int *a,int s,int e){

    int inv_count=0;

    int mid = (s+e)/2;
    
    int i = s;
    int j = mid+1;
    int k = s;
    
    int temp[100];
    
    while(i<=mid && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
            inv_count+=(mid-i+1);
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++]  = a[j++];
    }
    for(int i=s;i<=e;i++){
        a[i] = temp[i];
    }
    return inv_count;
    
}

int  mergeSort(int a[],int s,int e){
    int inv_count =0;
    //Base case - 1 or 0 elements
    if(s>=e){
        return 0 ;
    }
    
    //Follow 3 steps
    //1. Divide
    int mid = (s+e)/2;
    
    //Recursively the arrays - s,mid and mid+1,e
    inv_count += mergeSort(a,s,mid);
    inv_count +=mergeSort(a,mid+1,e);
    inv_count += merge(a,s,e);
    return inv_count;

}

int main(){
  int a[] = {7,3,10,5,6,2,-5};
  cout<<mergeSort(a,0,6);
  return 0;
}


