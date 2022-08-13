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
        int n;
        cin>>n;
        int *a=new int[n+1];
        if(n%2==0){
            a[0]=2;
            for(int i=2;i<n;i+=2){
                a[i]=a[i-2]+2;
            }
            a[1]=1;
            for(int i=3;i<n;i+=2){
                a[i]=a[i-2]+2;
            }
        }
        else{
            a[0]=1;
            if(n>1){
                a[1]=3;
                a[2]=2;
            }
            for(int i=4;i<n;i+=2){
                a[i]=a[i-2]+2;
            }
            for(int i=3;i<n;i+=2){
                a[i]=a[i-2]+2;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}