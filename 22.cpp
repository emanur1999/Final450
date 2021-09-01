#include<bits/stdc++.h>
using namespace std;

int profit(vector<int> & prices){
    int buy = prices[0];
    int sell;
    int profit = 0;
    int i=1;
    while(i<prices.size()){
        if(buy<prices[i]){
            sell = prices[i];
            int temp_profit = sell-buy;
            if(temp_profit>profit){
                profit = temp_profit;
            }
        }
        else{
            buy = prices[i];
        }
        i++;
    }
    return profit;
}
int main(){

    vector<int> v={7,1,5,3,6,4};
    cout<<profit(v);
    return 0;
}