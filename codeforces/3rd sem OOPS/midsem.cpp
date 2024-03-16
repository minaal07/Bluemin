/*<________B  L  U  E  M  I  N  C  O  D  E  R________>*/
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
#define mii              map<int,int>
#define msi              map<string,int>
#define mci              map<char,int>
#define pii              pair<int,int>
#define psi              pair<string,int>
#define pci              pair<char,int>
#define vpii             vector<pair<int,int>>
#define si               set<int>
#define sc               set<char>

#define pb               push_back
#define eb               emplace_back
#define mp               make_pair
#define bitcntll(n)      __builtin_popcountll(n)

#define ff               first
#define ss               second             
#define sz(s)            (long long)(s.size())
#define vin(v,n)         vector<int>v(n);for(int i=0;i<n;i++){cin>>v[i];}
#define vout(v)          for(int i=0;i<sz(v);i++)cout<<v[i]<<" "
#define inp(v)           for(auto &item : v) cin>>item.ff>>item.ss

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
 
#define test             int t; cin>>t; while(t--)
#define NeedForSpeed     ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define mod              10e+7

#pragma GCC optimize     ("Ofast")
#pragma GCC optimize     ("unroll-loops")
#pragma GCC optimize     ("03")
#pragma GCC optimize     ("fast-math")
#pragma GCC target       ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,avx2,mmx,fma,avx,tune=native")

class A{
    public:
    void show(){ cout("SHOW A");}
    void display(){ cout("DISPLAY A");}
};

class B : public A{
    public:
    void show(){ cout("SHOW B");}
    void display(){ cout("DISPLAY B");}
};

signed main(){
    A a; B b;
    A *ptr= &a;
    ptr->show();
    ptr->display();
    ptr=&b;
    ptr->show();
    ptr->display();
    // a.show();
    // a.display();
    // b.show();
    // b.display();

}


// class rectangle{
//     public:
//     int l;
//     int b;
//     rectangle(){  //default contructor-> no arg passed
//         l=0;
//         b=0; 
//     }

//     rectangle(int x, int y){  //parameterised contructor
//         l=x;
//         b=y; 
//     }

//     rectangle(rectangle& r){  //copy contructor->initialise an opbject with another existing object 
//         l=r.l;
//         b=r.b; 
//     }
// };

// int main(){
//     rectangle r1;
//     cout<<r1.l<<" "<<r1.b<<endl;

//     rectangle r2(12, 10);
//     cout<<r2.l<<" "<<r2.b<<endl;

//     rectangle r3(r2);
//     cout<<r3.l<<" "<<r3.b<<endl;

// }

