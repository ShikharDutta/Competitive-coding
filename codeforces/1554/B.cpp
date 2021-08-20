/*
B. Cobb
time limit per test: 1 second
memory limit per test: 256 megabytes
input: standard input
output: standard output
You are given n integers a1,a2,…,an and an integer k. Find the maximum value of i⋅j−k⋅(ai|aj) over all pairs (i,j) of integers with 1≤i<j≤n. Here, | is the bitwise OR operator.

Input:
The first line contains a single integer t (1≤t≤10000)  — the number of test cases.
The first line of each test case contains two integers n (2≤n≤105) and k (1≤k≤min(n,100)).
The second line of each test case contains n integers a1,a2,…,an (0≤ai≤n).
It is guaranteed that the sum of n over all test cases doesn't exceed 3⋅105.

Output:
For each test case, print a single integer  — the maximum possible value of i⋅j−k⋅(ai|aj).

Example:

input:
4
3 3
1 1 3
2 2
1 2
4 3
0 1 2 3
6 6
3 2 0 0 5 6

output:
-1
-4
3
12

Note:
Let f(i,j)=i⋅j−k⋅(ai|aj).

In the first test case,
f(1,2)=1⋅2−k⋅(a1|a2)=2−3⋅(1|1)=−1.
f(1,3)=1⋅3−k⋅(a1|a3)=3−3⋅(1|3)=−6.
f(2,3)=2⋅3−k⋅(a2|a3)=6−3⋅(1|3)=−3.
So the maximum is f(1,2)=−1.

In the fourth test case, the maximum is f(3,4)=12.*/

#include<iostream>
#include<climits>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        k = min(k,100);
        int *arr = new int[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll ans = INT_MIN;
        ll start = max(0,n-201);
        for(ll i=start;i<n;i++){
            for(ll j=i+1;j<n;j++){
                ans = max(ans,(i+1)*(j+1)-k*(arr[i]|arr[j]));
            }
        }
        cout<<ans<<endl;
    }
}