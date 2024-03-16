#include <bits/stdc++.h>
using namespace std;

class base {
public:
	int a;
    static int s ;
    void add(){
        a=a+2;
        s=s+4;
    }
    void show(){
        cout<<s<<endl;
        cout<<a<<endl;
    }

};
int base::s=0;

int main(){
    base t1; base t2;
    t1.a=2;
    t1.add();
    t1.show();
    t2.a=3;
    t2.add();
    t2.show();

	return 0;
}
