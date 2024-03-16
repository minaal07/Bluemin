//  ▄▄▄▄      ██▓       █    ██   ▓█████    ███▄ ▄███▓   ██▓   ███▄    █    ▄████▄     ▒█████    ▓█████▄   ▓█████    ██▀███  
// ▓█████▄   ▓██▒       ██  ▓██▒  ▓█   ▀   ▓██▒▀█▀ ██▒  ▓██▒   ██ ▀█   █   ▒██▀ ▀█    ▒██▒  ██▒  ▒██▀ ██▌  ▓█   ▀   ▓██ ▒ ██▒
// ▒██▒ ▄██  ▒██░      ▓██  ▒██░  ▒███     ▓██    ▓██░  ▒██▒  ▓██  ▀█ ██▒  ▒▓█    ▄   ▒██░  ██▒  ░██   █▌  ▒███     ▓██ ░▄█ ▒
// ▒██░█▀    ▒██░      ▓▓█  ░██░  ▒▓█  ▄   ▒██    ▒██   ░██░  ▓██▒  ▐▌██▒  ▒▓▓▄ ▄██▒  ▒██   ██░  ░▓█▄   ▌  ▒▓█  ▄   ▒██▀▀█▄  
// ░▓█  ▀█▓  ░██████▒  ▒▒█████▓   ░▒████▒  ▒██▒   ░██▒  ░██░  ▒██░   ▓██░  ▒ ▓███▀ ░  ░ ████▓▒░  ░▒████▓   ░▒████▒  ░██▓ ▒██▒
// ░▒▓███▀▒  ░ ▒░▓  ░  ░▒▓▒ ▒ ▒   ░░ ▒░ ░  ░ ▒░   ░  ░  ░▓    ░ ▒░   ▒ ▒   ░ ░▒ ▒  ░  ░ ▒░▒░▒░    ▒▒▓  ▒   ░░ ▒░ ░  ░ ▒▓ ░▒▓░
// ▒░▒   ░   ░ ░ ▒  ░  ░░▒░ ░ ░    ░ ░  ░  ░  ░      ░   ▒ ░  ░ ░░   ░ ▒░    ░  ▒       ░ ▒ ▒░    ░ ▒  ▒    ░ ░  ░    ░▒ ░ ▒░
//  ░    ░     ░ ░      ░░░ ░ ░      ░     ░      ░      ▒ ░     ░   ░ ░   ░          ░ ░ ░ ▒     ░ ░  ░      ░       ░░   ░ 
//  ░            ░  ░     ░          ░  ░         ░      ░             ░   ░ ░            ░ ░       ░         ░  ░     ░     
//       ░                                                                 ░                      ░                          
//              *     ,MMM8&&&.            *
//                   MMMM88&&&&&    .
//                  MMMM88&&&&&&&
//      *           MMM88&&&&&&&&
//                  MMM88&&&&&&&&
//                  'MMM88&&&&&&'
//                    'MMM8&&&'      *
//           |\___/|
//           )     (             .              '
//          =\     /=
//            )===(       *
//           /     \ 
//           |     | IT'S A SLOW PROCESS BUT 
//          /       \ QUITTING WON'T SPEED IT UP :)
//          \       /
//   _/\_/\_/\__  _/_/\_/\_/\_/\_/\_/\_/\_/\_/\_
//   |  |  |  |( (  |  |  |  |  |  |  |  |  |  |
//   |  |  |  | ) ) |  |  |  |  |  |  |  |  |  |
//   |  |  |  |(_(  |  |  |  |  |  |  |  |  |  |
//   |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
//   |  |  |  |  |  |  |  |  |  |  |  |  |  |  |     
 
#pragma GCC optimize     ("Ofast")
#pragma GCC optimize     ("unroll-loops")
#pragma GCC optimize     ("03")
#pragma GCC optimize     ("fast-math")
#pragma GCC target       ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,avx2,mmx,fma,avx,tune=native")
 
#include<bits/stdc++.h>
#include <iostream>
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

void insert(stack<int>&a, int temp){
    if(sz(a)==0 || a.top()<=temp){
        a.push(temp);
        return;
    }
    int val=a.top();
    a.pop();
    insert(a,temp);
    a.push(val);
}

void sort(stack<int> &a){
    if(sz(a)==1) return;
    int temp=a.top();
    a.pop();
    sort(a);
    insert(a,temp);
}
 
void solve(){
    int n; cin>>n;
    stack<int>a;
    fi(i,0,n){
        int x; cin>>x;
        a.push(x);
    }
    sort(a);
    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }
}
 
signed main() {
    NeedForSpeed
    // txt
    // test 
    solve();
    return 0;
}