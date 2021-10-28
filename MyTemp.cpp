//C++ Template for Competative Programming 

#include<bits/stdc++.h>
using namespace std;

#define TC int T; cin>>T; while(T--)
#define ll long long int 
#define F  First
#define S second
#define PI 3.1415926535897932384626
#define all(x) x.begin(),x.end()
#define SortAll(x) sort(all(x))
#define Fo(i,n) for(i=0;i<n;i++)
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
#define Itr(it, a) for(auto it = a.begin(); it != a.end(); it++)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;


void solve(unsigned long long int n) {

	if (n > 0)
	{
		solve(n - 1);
		cout << n << " ";
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	TC{
	int N;
	cin >> N;
	solve(N);
	return 0;
	}
}
