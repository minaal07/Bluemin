#include<bits/stdc++.h>
using namespace std;

class A {
    int x,y;
    public:
    A(){
        cout<<"Constructor is called"<<endl;
    }
    ~A(){
        cout<<"Dstructor is called"<<endl;
    }
    void display(){
        cout<<"lmao"<<endl;
    }
       
};

class B {
    int x,y;
    public:
    B(int a, int b){
        x=a;
        y=b;
    }
    B(B &obj){
        x=obj.x;
        y=obj.y;
    }
    void display(){
        cout<<x<<" "<<y<<endl;
    }
       
};

int main() {
    A a;
    
    return 0;
}
