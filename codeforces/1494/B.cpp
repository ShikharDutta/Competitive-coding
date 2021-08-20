/*
Berland Crossword
time limit per test: 2 seconds
memory limit per test: 256 megabytes
input: standard input
output:standard output
Berland crossword is a puzzle that is solved on a square grid with n rows and n columns. Initially all the cells are white.
To solve the puzzle one has to color some cells on the border of the grid black in such a way that:
exactly U cells in the top row are black;
exactly R cells in the rightmost column are black;
exactly D cells in the bottom row are black;
exactly L cells in the leftmost column are black.
Note that you can color zero cells black and leave every cell white.
Your task is to check if there exists a solution to the given puzzle.

Input:
The first line contains a single integer t (1≤t≤1000) — the number of testcases.
Then the descriptions of t testcases follow.
The only line of each testcase contains 5 integers n,U,R,D,L (2≤n≤100; 0≤U,R,D,L≤n).

Output:
For each testcase print "YES" if the solution exists and "NO" otherwise.
You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes and YES are all recognized as positive answer).

Example:
input:
4
5 2 5 3 1
3 0 0 0 0
4 4 1 4 0
2 1 1 1 1

output:
YES
YES
NO
YES
Note:
Here are possible solutions to testcases 1, 2 and 4:

*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,u,r,d,l;
        cin>>n>>u>>r>>d>>l;
        int u1 = u,r1 = r,d1 = d,l1=l;
        if(u>n-2){
            if(u==n){
                r1--;
                l1--;
            }
            else if(l1>=r1){
                l1--;
            }
            else{
                r1--;
            }
        }
        if(r>n-2){
            if(r==n){
                u1--;
                d1--;
            }
            else if(u1>=d1){
                u1--;
            }
            else{
                d1--;
            }
        }
        if(d>n-2){
            if(d==n){
                r1--;
                l1--;
            }
            else if(r1>=l1){
                r1--;
            }
            else{
                l1--;
            }
        }
        if(l>n-2){
            if(l==n){
                u1--;
                d1--;
            }
            else if(u1>=d1){
                u1--;
            }
            else{
                d1--;
            }
        }
        if(u1<0 || r1<0 || l1<0 || d1<0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}