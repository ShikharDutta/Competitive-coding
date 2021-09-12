#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int num = n/2;
        if(n%2!=0){
            num++;
        }
        if(n%2==0){
            num = num + 1;
        }
        int ans = s/num;
        cout<<ans<<endl;

    }
}