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


/*Intelligence is certainly beneficial,
but the rewards of hard work are even greater,
and it should never be about comparing oneself to others :) */


#include<bits/stdc++.h>
#include <iostream>
#define int long long int
#define vint vector<long long int>
#define vchar vector<char>
#define vstring vector<char>
#define pb push_back
#define sq(a) (a*a)
#define ppb pop_back
#define clr clear()
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define couty cout<<"YES"<<endl
#define coutn cout<<"NO"<<endl
#define cout(a) cout<<fixed<<setprecision(a)
#define NeedForSpeed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 10e+7

using namespace std;




signed main(){
    NeedForSpeed
    
    
        int t; cin>>t;
        while(t--){
            int n,m; cin>>n>>m;
            int a[205][205];



            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    cin>>a[i][j];
                }
            }

            int sum,ans=0;

            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    sum=0;
                    for(int k=1;k<=n;k++){
                        for(int l=1;l<=m;l++){
                            if(i+j==k+l || i-j==k-l) sum+=a[i][j];
                        }
                    }
                    ans=max(sum,ans);
                }
            }

            cout<<ans<<endl;



        }
    



    return 0;
}