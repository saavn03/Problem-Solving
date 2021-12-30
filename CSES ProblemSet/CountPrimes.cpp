#include<bits/stdc++.h>
using namespace std;

int32_t main(){

  int n;
  cin >> n;

  int cnt = 0;
  vector <bool> Prime(n+1, true);

  Prime[0] = Prime[1] = false;

  for (int i=2; i<n; i++){
  	if(Prime[i]){
  		cnt++;

  		for(int j=2*i; j<n; j=j+i){
  			Prime[j] = 0;
  		}
  	}
  }
 cout<< cnt << endl;
}