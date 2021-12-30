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
        string s,st="";
        cin >> s;
        if (n > 1 && (s[0] == s[1]))
        {
                cout << s[0] << s[1];
        }
        else
        {
 
            for (ll i = 0; i < n; i++)
            {
                if (i == 0)
                    st += s[i];
                else if (s[i] <= s[i - 1])
                    st += s[i];
                else
                    break;
 
            }
            for (ll i = st.length() - 1; i >= 0; i--)
            {
                st += st[i];
            }
            cout << st;
        }
        cout<< "\n";
    }
 
    return 0;
}
    		