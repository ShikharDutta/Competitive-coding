#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
            str[i]=tolower(str[i]);
        }
        if(str=="yes"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
