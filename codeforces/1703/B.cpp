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
        int n;
        cin>>n;
        string str;
        cin>>str;
        map<char,bool> m;
        int sum=0;
        for(int i=0;i<n;i++){
            if(m[str[i]]==false){
                sum+=2;
                m[str[i]]=true;
            }
            else{
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}
