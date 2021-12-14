#include <bits/stdc++.h>
using namespace std;
 

int FindMissingNum(int a[], int n)
{
 
    int i, total=1;
     
    for ( i = 2; i<= (n+1); i++)
    {
        total+=i;
        total -= a[i-2];
    }
    return total;
}
 
int main()
{   
 //    int T;
//     cin>>T;
//     while(T--){
    int n;
    cin>>n;
    int A[n];
    for(int i=1;i<n;i++){
        cin>>A[i];
    }
    cout<<FindMissingNum(A,n)<<endl;
}
