//C++ Template for Competative Programming 

#include<bits/stdc++.h>
using namespace std;


#define gc getchar_unlocked
#define TC int T;cin >> T;while (T--)
#define ll long long int 
#define F  First
#define S second
#define pb push_back
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
#define IN long long int n; cin>>n;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl


int32_t main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	TC
	{
		int n;
		cin>>n;    // Input
		int A[n], temp,j;
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=0,j=n-1;i<n/2;i++,j--){
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
		for(int i=0;i<n;i++){
			cout<<A[i]<<" ";
		}
	}
	return 0;
}