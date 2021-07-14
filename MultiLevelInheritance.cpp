#include <iostream>
using namespace std;

class myClass{
	public:
		int x ;
};

class myChild : public myClass{
	public:
		int y;
};

class myGrandChild : public myChild{
	public:
		int z;
};

int main(){
	myGrandChild GC1;
	GC1.x = 5;
	GC1.y = 6;
	GC1.z = 7;
	cout<<"x = "<<GC1.x<< " y = "<<GC1.y<<" z = "<<GC1.z<<endl;
}
