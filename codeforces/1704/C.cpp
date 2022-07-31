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
        ll n,m;
        cin>>n>>m;
        ll *a=new ll[m];
        for(ll i=0;i<m;i++){
            cin>>a[i];
        }
        //cout<<1<<endl;

        sort(a,a+m);
        vector<ll> v;
        //cout<<1<<endl;
        for(ll i=0;i<m-1;i++){
            v.push_back(a[i+1]-a[i]-1);
        }
        v.push_back(a[0]-1+n-a[m-1]);
        //cout<<1<<endl;
        sort(v.begin(),v.end(),greater<int>());
        ll sum = 0;
        //cout<<sum<<endl;
        ll power = 0;
        for(ll i=0;i<v.size();i++){
            //cout<<v[i]<<endl;
            ll num = v[i]-2*power;
            //cout<<num<<endl;
            if(num<1){
                break;
            }
            else if(num==1){
                sum+=1;
            }
            else{
                sum+=num-1;
            }
            power = power+2;
        }
        cout<<n-sum<<endl;
    //cout<<"+++++++++++++++++++++"<<endl;

    }
}