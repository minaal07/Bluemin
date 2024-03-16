#include <bits/stdc++.h>
using namespace std;
// lmao vai
#define int long long
#define double long double
#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define si set<int>
#define sc set<char>
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define sz(s) (long long)(s.size())
#define vinddd(v, n)               \
    vector<int> v(n);           \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> v[i];            \
    }
#define vout(v)                     \
    for (int i = 0; i < sz(v); i++) \
    cout << v[i] << " "
#define inp(v)        \
    for (auto &i : v) \
    cin >> i.ff >> i.ss
#define sq(x) (x * x)
#define cb(x) (x * x * x)
#define cn cout << "NO" << endl
#define nl cout << endl
#define cout(a) cout << a << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define min3(x, y, z) min(x, min(y, z))
#define max3(x, y, z) max(x, max(y, z))
#define maxima(x) *max_element(x.begin(), x.end())
#define minima(x) *min_element(x.begin(), x.end())
#define ff(i, s, e) for (int i = s; i < e; i++)
#define fim(i, s, e) for (int i = s; i <= e; i++)
#define fd(i, s, e) for (int i = s; i >= e; i--)
#define cy cout << "YES" << endl
#define testcase \
    int t;       \
    cin >> t;    \
    while (t--)
#define BhenKiChoot              \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define mod 10e+7


 
 
void sol(){
    int n;
    int hehe=0; 
    cin>>n;
    string s; cin>>s;
    set<char>setbolte;
    ff(i,0,n){
        setbolte.insert(s[i]);
        hehe+=sz(setbolte);
    }
    cout(hehe);
}

signed main()
{
    BhenKiChoot
        testcase
        sol();
    return 0;
}

// 0 0 0 0 0 0 0 0 0 0 0 0