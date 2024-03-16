#include<bits/stdc++.h>
using namespace std;
 
#define int              long long
#define ull              unsigned long long
#define double           long double
 
#define vi               vector<int>
#define vc               vector<char>
#define vs               vector<string>
#define vb               vector<bool>
#define vpii             vector<pair<int,int>>
 
#define pb               push_back
#define mp               make_pair
#define btp(n)           __builtin_popcountll(n)
 
#define ff               first
#define ss               second             
#define sz(s)            (long long)(s.size())
#define vin(v,n)         vector<int>v(n);for(int i=0;i<n;i++){cin>>v[i];}
#define vout(v)          for(int i=0;i<sz(v);i++)cout<<v[i]<<" "
 
#define sq(a)            (a*a)
#define min3(a,b,c)      min(a,min(b,c))
#define max3(a,b,c)      max(a,max(b,c))
#define maxima(v)        *max_element(v.begin(),v.end())
#define minima(v)        *min_element(v.begin(),v.end())
 
#define fi(i,s,e)        for(int i=s;i<e;i++)
#define fim(i,s,e)       for(int i=s;i<=e;i++)
#define fd(i,s,e)        for(int i=s;i>=e;i--)
 
#define cy               cout<<"YES"<<endl
#define cn               cout<<"NO"<<endl
#define nl               cout<<endl
#define cout(a)          cout<<a<<endl
 
#define all(x)           (x).begin(), (x).end()
#define rall(x)          (x).rbegin(), (x).rend()
#define debug(x)         std::cerr << #x << ": " << x << endl
 
#define test             int t; cin>>t; while(t--)
#define txt              freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define NeedForSpeed     ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define mod              10e+7
 
void solve(){
    int n; cin>>n;
    vin(a,n);
    vi b;
    fi(i,0,n){
        if(i==0){
            if(a[i]/10 < a[i]%10) {
                b.pb(a[i]/10);
                b.pb(a[i]%10);
            }
            else b.pb(a[i]);
        }
        else if(i<n-1){
            if(a[i]>b[i-1] && a[i]>a[i+1]){
                b.pb(a[i]/10);
                b.pb(a[i]%10);
            }
            else{
                b.pb(a[i]);
            }

        }
        else b.pb(a[i]);
    }
    vout(b);
    if(is_sorted(all(b))) cy;
    else cn;
}

signed main() {
    NeedForSpeed
    // txt
    test
    solve();
    return 0;
}