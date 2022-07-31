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
        ll n,x;
        cin>>n>>x;
        ll *arr=new ll[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll maxM = arr[0];
        ll minM = arr[0];
        ll k=0;
        for(int i=0;i<n;i++){
            if(minM>arr[i]){
                minM = arr[i];
            }
            if(maxM<arr[i]){
                maxM = arr[i];
            }
            if((maxM-minM)>2*x){
                k++;
                maxM=arr[i];
                minM =arr[i];
            }
        }
        cout<<k<<endl;
    }
}