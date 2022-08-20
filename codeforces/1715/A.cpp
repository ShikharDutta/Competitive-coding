#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output1.txt","w",stdout);
   #endif
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1&&m==1){
            cout<<0<<endl;
            continue;
        }
        cout<<(n+m-2+min(n,m))<<endl;

    }
}