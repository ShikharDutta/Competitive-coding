#include<bits/stdc++.h>
#define ll long long int
using namespace std;

double med(int *a,int n){
    if((n)%2==1){
        return a[(n)/2];
    }
    double m = double(a[n/2-1]+a[n/2])/2;
    return m;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k=0;
        int ans=0;
         map<char,bool> m;
        for(int i=0;i<s.size();i++){
            if(k==0){
                ans++;
            }
            if(m[s[i]]==false){
                //cout<<s[i]<<endl;
                k++;
                m[s[i]]=true;
            }
            if(k==3&&m[s[i+1]]==false){
                m.clear();
                k=0;
            }
        }
        cout<<ans<<endl;
    }
}
