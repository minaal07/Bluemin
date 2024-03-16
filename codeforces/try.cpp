
#include <iostream>
using namespace std;

class demo {
public:
	demo(){
		cout<<"DEMO"<<endl;
	}
	~demo(){
		cout<<"destructor"<<endl;
	}

};

int main(){
    try {
        demo d2;
        throw d2;
    }
    catch(demo obj){
        cout<<"FJEBIUF"<<endl;
    }
}
