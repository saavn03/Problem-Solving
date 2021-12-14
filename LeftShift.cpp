#include<bits/stdc++.h>
using namespace std;


void Binary(int num){
     for (int i=10;i>=0;--i){
     	cout<<((num>>i) &1);
     }
     cout<<endl;
}
int main(){

	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		Binary(i);
	}

	// int a = 1<<n;// left shift operator 
}