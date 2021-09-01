#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

bool checkValidShuffle(string s1,string s2,string shuff){
    unordered_map<char,int> mymap;
    int l1= s1.size();
    int l2= s2.size();
    int l3=shuff.size();
    if(l1+l2!=l3) return false;
    for(int i=0;i<l3;i++){
        mymap[shuff[i]]+=1;
    }
    for(int i=0;i<l1;i++){
        if(mymap[s1[i]]!=1) return false;
    }
    
    for(int i=0;i<l2;i++){
        if(mymap[s2[i]]!=1) return false;
    }
    return true;
}
int main(){
    string s1="XY";
    string s2="12";
    string s3="21XX";
    if(checkValidShuffle(s1,s2,s3)){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Not Valid"<<endl;
    }

    return 0;
}