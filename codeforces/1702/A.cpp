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
        int n = s.size();
        ll num =1;
        while(n>1){
            num*=10;
            n--;
        }
        cout<<stoll(s)-num<<endl;
    }
}
