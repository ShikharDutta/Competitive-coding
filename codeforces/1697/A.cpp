#include<bits/stdc++.h>
#define ll long long int
using namespace std;

#define NO_OF_CHARS 256
 
/* function to check whether
 characters of a string can form a palindrome */
bool isPalindrome(string str,int i,int j)
{
    // Create a count array and initialize all
    // values as 0
    int count[NO_OF_CHARS] = { 0 };
 
    // For each character in input strings,
    // increment count in the corresponding
    // count array
    for (int l = i-1;l<=j-1; l++){
        int x = str[l];
        count[x]++;
    }
 
    // Count odd occurring characters
    int odd = 0;
    for (int l = 0; l < NO_OF_CHARS; l++) {
        if (count[l] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
 
    // Return true if odd count is 0 or 1,
    return true;
}
int main()
{
/*
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output1.txt","w",stdout);
  #endif
  */

  /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    */

  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int *a = new int[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum-m>=0){
        cout<<sum-m<<endl;
        continue;
    }
    cout<<0<<endl;
    

    
    
   
  }
  
}
