/**************************************________B  L  U  E  M  I  N  C  O  D  E  R________**************************************/


#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define sq(a) (a*a)
#define ppb pop_back
#define clr clear()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define NeedForSpeed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 10e+7


void explainpair(){
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> m={1,{3,4}};
    cout<<m.first<<" "<<m.second.first <<" "<<m.second.second<<endl;

    pair<int,int>arr[]={{1,2}, {2,5}, {4,1}};
    cout<<arr[1].second<<endl;

}


void explainvector(){


    vector<int>v;

    v.pb(1);
    v.emplace_back(2); //same as pushback but faster than pushback

    vector<pair<int,int>>vec;

    vec.pb({1,2});
    vec.emplace_back(5,9); //automatically assume as pair no need of curly bracket

    vector<int> v1(5,10); // {10,10,10,10,10} predefined size and element
    vector<int> v2(v1);

    //we can increase decrease size of predefined vector4
    cout<<v1[0]<<" "<<v1.at(0); //both are same

    vector<int>::iterator it = v1.begin(); //it will point to memory of 1st element

    cout<<v1[0]<<" "<<*(it); //same for now it

    it=it+2; //now v[2]==*it

    //printing of vector using iterators

    for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it=v.begin(); it!=v.end();it++){ //acc to data automatically it assigns the datatype to iterator
        cout<<*(it)<<" ";
    }

    for(auto it:v){
        cout<<it<<" ";
    }

    //10 20 12 23
    v.erase(v.begin()+1); //it means erase 20
    //array wil become 10 12 23

    //wanted to delete n elements from this point to this
    // 10 2 54 87 6 9 54 1 23
    v.erase(v.begin()+2,v.begin()+4);
    //the array will become 
    // 10 2 6 9 54 1 23
    




    

}


signed main(){
    NeedForSpeed

    explainpair();



    return 0;
}