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
        string a,b;
        cin>>a>>b;
        int flag=1;
        for(int i=m-1;i>=1;i--){
            if(a[i+n-m]!=b[i]){
                flag=0;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
        else{
            if(a[n-m]==b[0]){
                cout<<"YES"<<endl;
                continue;
            }
            else{
                for(int i=0;i<n-m;i++){
                    if(b[0]==a[i]){
                        flag=11;
                        cout<<"YES"<<endl;
                        break;
                    }
                }
                if(flag==1){
                    cout<<"NO"<<endl;
                }
                
            }

        }

        

        
    }
}