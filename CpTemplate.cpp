// CP Template @codex-cp

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 9e18
#define int long long
#define i64 int64_t
#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, a, n) for (int i = a; i >= n; i--)
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef unsigned long long ull;
typedef long double lld;

#define vec vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>

// void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*---------------------------------------------------------------------------------------------------------------------------*/

int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(int a, int b, int*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); int x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
int mminv(int a, int b) {int arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
int mminvprime(int a, int b) {return expo(a, b - 2, b);}
bool revsort(int a, int b) {return a > b;}
int combination(int n, int r, int m, int *fact, int *ifact) {int val1 = fact[n]; int val2 = ifact[n - r]; int val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
int phin(int n) {int number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (int i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
bool isPrime(int x) {if (x < 2) return false; for (int y = 2; y * y <= x; y++)if (x % y == 0)return false; return true;}
int ceil(int a, int b) {int aa = (a + b - 1) / b; return aa; }
void amax(int &a, int b) {a = max(a, b);}
void amin(int &a, int b) {a = min(a, b);}
void printv(vec &v) {rep(i, 0, sz(v)) {cout << v[i] << " ";} cout << endl; return;}
vec inputv(int n) {vec v(n); rep(i, 0, n) cin >> v[i]; return v;}
void input(int &a) {cin >> a;}
void input(int &a, int &b) {cin >> a >> b;}
void input(int &a, int &b, int &c) {cin >> a >> b >> c;}
void input(int &a, int &b, int &c, int &d) {cin >> a >> b >> c >> d;}
void print(int a) {cout << a << endl;}
void print(int a, int b) {cout << a << " " << b << endl;}
void print(int a, int b, int c) {cout << a << " " << b << " " << c << endl;}
void print(int a, int b, int c, int d) {cout << a << " " << b << " " << c << " " << d << endl;}

/*---------------------------------------------------------------------------------------------------------------------------*/
// stoll(passing string) ---> string to long long int
// try not to think of formula because it takes time to come up with proof
// int n;

/// cmp function
// a,b if you want to swap return false else return true;

// keep in mind
// n=0,n=1,n=2 atleast consider these three edge
// long long int can give TLE while int may NOT
// multiset-> donot erase with values ,erase with (value iterator)
// INT_MAX or INT_MIN are the infinites but in INT range only better use INF
// (A|B)<=(A+B)
// A^B=C,A^C=B
// with squares 1 2 4 8
// you can make all the numbers (1-15)
// read the problem statement carefully
// understand the given test cases
// use 9e18 max possible int long long
// for PBDS
// int lr = s.order_of_key({v[i], -INF}); //// return index of first v[i]
// int gr = s.order_of_key({v[i], INF});  //// return index of first > v[i]
// do not pass empty string to stoi() or stoll()
//
/*----------------------------------------------------------------------------------------------------------------------------*/

bool overlapping(int x1, int y1, int x2, int y2)
{
  return (max(x1, x2) <= min(y1, y2));
  // return (!(y1<x2 or y2<x1));
}

const int N = 200005;


void  solve() {

  int n;
    cin >> n;
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      int d;
      cin >> d;
 
      sum += d;
    } 
 
    if (sum % n)
      cout << 1 << '\n';
 
    else
      cout << 0 << '\n';
      
}


int32_t main() {

  fastio();
  auto start1 = high_resolution_clock::now();

  int t; cin >> t;
  rep(i, 1, t + 1)
  solve();
  auto stop1 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
  cerr << "Time : " << duration . count() / 1000 << endl;
#endif

}
