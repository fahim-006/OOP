#include <iostream>
using namespace std;

class car{
	public:
		int wheel;
		int doors;
};

class audi : public car{
	public:
		int camera;
};

int main(){
	audi audi1;
	
	audi1.wheel = 4;
	audi1.doors = 4;
	audi1.camera = 1;
	
	cout<<"wheel: "<<audi1.wheel<< "Door: "<<audi1.doors<<"Camera: "<<audi1.camera<<endl;
	
	return 0;
}
