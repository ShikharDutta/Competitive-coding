#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int zeros = count(str.begin(),str.end(),'0');
        if(zeros==0){
            cout<<0<<endl;
            continue;
        }
        int first = str.find('0');
        int last = str.rfind('0');
        if(zeros==last-first+1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }
}