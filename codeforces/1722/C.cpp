#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    // your code goes here
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output1.txt","w",stdout);
   #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1[n];
        string s2[n];
        string s3[n];
        for(int i=0;i<n;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n;i++){
            cin>>s3[i];
        }
        map<string,int> m;
        for(int i=0;i<n;i++){
            m[s1[i]]++;
        }
        for(int i=0;i<n;i++){
            m[s2[i]]++;
        }
        for(int i=0;i<n;i++){
            m[s3[i]]++;
        }
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<n;i++){
            if(m[s1[i]]==1){
                sum1+=3;
            }
            else if(m[s1[i]]==2){
                sum1+=1;
            }
        }
        for(int i=0;i<n;i++){
            if(m[s2[i]]==1){
                sum2+=3;
            }
            else if(m[s2[i]]==2){
                sum2+=1;
            }
        }
        for(int i=0;i<n;i++){
            if(m[s3[i]]==1){
                sum3+=3;
            }
            else if(m[s3[i]]==2){
                sum3+=1;
            }
        }
        cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;

    }
}
