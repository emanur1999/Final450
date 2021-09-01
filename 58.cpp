#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

vector<char> findDuplicate(string s){
    vector<char> v;
    unordered_map<char,bool> mymap;
    for(int i=0;i<s.length();i++){
        if(mymap[s[i]]==0){
            mymap[s[i]] = true;
        }
        else{
            v.push_back(s[i]);
            mymap[s[i]]= true;
        }
    }
    return v;
}

int main(){
    string s="Emanur Rahman";
    vector<char> v=findDuplicate(s);
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    return 0;
}