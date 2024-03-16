#include<bits/stdc++.h>
using namespace std;
 


int main() {
     if(s.size()==1){
        return 1;
    }
    int balance=-1; 
    int o=0; int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            o++;
        }
        else{
            c++;
        }
        if(c>o){
            return i+1;
        }
        if(c==o){
            balance=i;
        }
    }

    return s.size()-balance-1;

}