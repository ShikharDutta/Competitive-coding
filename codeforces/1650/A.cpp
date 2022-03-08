#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        char ch;
        cin>>s;
        cin>>ch;
        int cnt1=0,cnt2=0;
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                v.push_back(i);
            }
        }
        int flag=0;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0&&(s.size()-v[i]-1)%2==0){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
        
    }
}