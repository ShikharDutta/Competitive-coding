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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        sort(a.begin()+k,a.end());
        int j=k;
        for(int i=0;i<k;i++){
            if(a[i]>k){
                swap(a[i],a[j++]);
                ans++;
            }
        }
        cout<<ans<<endl;

    }
}