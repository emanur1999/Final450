#include <bits/stdc++.h>
using namespace std;

// Partioning is done same as for Quick Sort
int partition(vector<int> &arr, int l, int r) {
int pivot=arr[r], idx = l;
for(int i=l;i<r;i++) {
if(arr[i] <= pivot) {
swap(arr[i], arr[idx]); // Swap element lesser than pivot to left
idx++;
}
}
swap(arr[idx],arr[r]); // Set pivot at right position
return idx;
}
 
int kthsmallest(vector<int> &arr,int l,int r, int k) {
int p = partition(arr,l,r);
if(p==k)   // First Condition
return arr[k];
else if(p>k)   // Second Condition
return kthsmallest(arr,l,p-1,k);
else           // Third Condition. As l-1 element will already be subtracted in previous calls from k
return kthsmallest(arr,p+1,r,k-p+l-1);      // therefore its added after subtracting p again
}
 
int main() {
int k = 5;
vector<int> arr = {5,9,1,4,6,7,8,2,0,4,-5,-3};
sort(arr.begin(), arr.end());
cout<<"Kth smallest: "<<kthsmallest(arr,0,arr.size()-1,k-1);
}