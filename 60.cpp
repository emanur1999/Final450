#include<iostream>
#include<queue>
#include<string>

using namespace std;
bool stringRotation(string s1, string s2){
    if(s1.size()!=s2.size()) return false;

    queue<char> q1;
    for(int i=0;i<s1.size();i++){
        q1.push(s1[i]);

    }
    queue<char> q2;
    for(int i=0;i<s2.size();i++){
        q2.push(s2[i]);

    }
    int i = q2.size();
    while(i--){
        if(q1==q2) return true;
        char data;
        data = q2.front();
        q2.pop();
        q2.push(data);
    }
    return false;

}
int main(){
    string s1="ABCD";
    string s2="ABCD";
    if(stringRotation(s1,s2)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}