/*<____B  L  U  E  M  I  N  C  O  D  E  R____>*/
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄░░░░░░░░░░░
// ░░░░░░░░▄▀░░░░░░░░░░░░░░▄░░░░░░░▀▄░░░░░░░░░
// ░░░░░░░░█░░▄░░░░▄░░░░░░░░░░░░░░░░░░█░░░░░░░
// ░░░░░░░░█░░░░░░░░░░░░░░░░▄█▄▄░░▄░░░█░▄▄▄░░░
// ░▄▄▄▄▄░░█░░░░░░▀░░░░░░░░▀█░░▀▄░░░░░█▀▀░██░░
// ░██▄▀██▄█░░░▄░░░░░░░░░░░██░░░░▀▀▀▀▀░░░░██░░
// ░░▀██▄▀██░░░░░░░░▀░░░░░██▀░░░░░░░░░░░░░▀██░
// ░░░░▀████░▀░░░░▄░░░░░░░██░░░▄█░░░░▄░▄█░░██░
// ░░░░░░░▀█░░░░▄░░░░░░░░░██░░░░▄░░░▄░░▄░░░██░
// ░░░░░░░▄█▄░░░░░░░░░░░░░░░▀▄░░▀▀▀▀▀▀▀▀░░▄▀░░
// ░░░░░░█▀▀█████████▀▀▀▀▀▀▀▀████████████▀░░░░
// ░░░░░░████▀░░███▀░░░░░░░░░░▀███░░▀██▀░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░


/*Intelligence is certainly beneficial, but the rewards of hard work are even greater,
and it should never be about comparing oneself to others :) */


#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

#define vll             vector<int>
#define pll             pair<int, int>
#define ppll            pair<int, pair<int, int>>
#define vpll            vector<pll>
#define pb              emplace_back
#define ff              first
#define ss              second

#define sq(a)           (a*a)
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))

#define fi(i,s,e)       for(int i=s;i<e;i++)
#define fd(i,s,e)       for(int i=s;i>e;i--)

#define couty           cout<<"YES"<<endl
#define coutn           cout<<"NO"<<endl
#define cout(a)         cout<<fixed<<setprecision(a)

#define all(x)          (x).begin(), (x).end()
#define rall(x)         (x).rbegin(), (x).rend()

#define test            int t; cin>>t; while(t--)
#define NeedForSpeed    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("03")
#pragma GCC optimize("fast-math")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,avx2,mmx,fma,avx,tune=native")



// int binarySearch(vll &v, int element){
//     int l=0, r=v.size()-1; 
//     int mid;
//     while(r-l>1){
//         mid=(l+r)/2;
//         if(v[mid]<element) l=mid+1;
//         else r=mid;
//     }
//     if(v[l]==element) return l;
//     else if(v[r]==element) return r;
//     return -1;
// }

int lower_bound(vll &v,int element){     
    int l=0, r=v.size()-1; 
    int mid;
    while(r-l>1){
        mid=(l+r)/2;
        if(v[mid]<element) l=mid+1;
        else r=mid;
    }
    if(v[l]>=element) return l;
    else if(v[r]>=element) return r;
    return -1;
}

// int upper_bound(vll &v,int element){         // i value for which v[i]>element ho
//     int l=0, r=v.size()-1; 
//     int mid;
//     while(r-l>1){
//         mid=(l+r)/2;
//         if(v[mid]<=element) l=mid+1;   // smaller than and equals to ko eleminate krna hai
//         else r=mid;
//     }
//     if(v[l]>element) return l;
//     else if(v[r]>element) return r;
//     return -1;
// }

// signed main(){
//     NeedForSpeed
//     int n; cin>>n;
//     vll v(n);
//     for(auto &i:v) cin>>i;
//     sort(all(v));
//     int x; cin>>x;
//     return 0;
// }


// double eps=1e-6; //to get accuracy of 5 decimal no.
// signed main(){ //find sqrt of a no. using binary search
//     double x; cin>>x;
//     double lo=1, hi=x, mid;
//     while(hi-lo>eps){  
//         mid=(hi+lo)/2;
//         if(mid*mid<x) lo=mid;
//         else hi=mid;
//     }
//     cout<<lo<<endl;
//     return 0;
// }

int n,m;
int tree[100000000];
bool iswoodsuff(int h){
    int wood=0;
    for(int i=0;i<n;i++){
        if(tree[i]<=h) wood+=(tree[i]-h);
    }
    return wood>=m;
}
signed main(){
     cin>>n>>m;
    for(int i=0;i<n;i++) cin>>tree[i];
    int lo=0, hi=1e9, mid;
    //T T T T T F F F F F
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(iswoodsuff(mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(iswoodsuff(hi)) cout<<hi<<endl;
    else cout<<lo<<endl;
}