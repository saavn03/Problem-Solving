#include<bits/stdc++.h>
using namespace std;

#define ll long long int 

int32_t main(){

	ll n, s=0;
	cin>>n;

	for(ll i = 1; i<n; i++){
		
		int a;
		cin>>a;

		s+=a;

	}

	cout<< n*(n+1)/2-s;

}