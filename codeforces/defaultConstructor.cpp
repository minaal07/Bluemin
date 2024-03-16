#include<bits/stdc++.h>
using namespace std;

class A {
    int x,y;
    public:
    A(){
        cout<<"Constructor is called"<<endl;
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
    B b(2,4);
    B c(b);
    c.display();
    
    return 0;
}
