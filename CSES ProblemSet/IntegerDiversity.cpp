//C++ Template for Competative Programming 

#include<bits/stdc++.h>
using namespace std;

#define TC ll T; cin>>T; while(T--)
#define ll long long int 
#define F  First
#define S second
#define PI 3.1415926535897932384626
#define all(x) x.begin(),x.end()
#define SortAll(x) sort(all(x))
#define Fo(i,n) for(i=0;i<n;i++)
const int mod = 1000000007;
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

int main() {

	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	TC{
		ll n;
		cin >> n;
		int A[n];
		set<int> s;
		int cnt = 0;

		for(int i=0; i<n; i++){
			cin >> A[i];
			if(s.find(A[i])!= s.end()){
				if(s.find(-1*A[i])== s.end()){
				cnt++;
				s.insert(-1*A[i]);
			}
	
		}
		else{
			cnt++;

			s.insert(A[i]);
		}
	}
	cout << s.size() << endl;
}

}