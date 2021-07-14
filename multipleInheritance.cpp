#include <iostream>
using namespace std;

class a{
	public:
		int x;
};
class b {
	public:
		int y;
};
class c: public a, public b{
	public:
		int z;
};

int main(){
	c c1;
	
	c1.x  = 5;
	c1.y = 6;
	c1.z = 7;
	
	cout<<"x = "<<c1.x<<" y = "<<c1.y<<" z = "<<c1.z<<endl;
	return 0;
}
