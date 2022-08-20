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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        if(b==0&&s==0){
            for(int i=0;i<n;i++){
                cout<<0<<" ";

            }
            cout<<endl;
            continue;
        }
        if(k*b>s||((k-1)*(n-1)+k*b+k-1)<s){
            cout<<-1<<endl;
            continue;
        }
        
        ll *a = new ll[n];
        a[n-1]=min(k*b+k-1,s);
        s-=a[n-1];
        for(int i=n-2;i>=0;i--){
            a[i]=min(s,k-1);
            if(s-a[i]>=0){
                s-=a[i];
            }
            else{
                a[i]=s;
                s=0;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;



    }
}