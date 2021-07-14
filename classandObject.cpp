#include <iostream>
using namespace std;

class learn {
	public:
		string what;
		string where;
};

int main(){
	learn learn1;
	
	learn1.what = "C++";
	learn1.where = "W3school";
	
	cout<<"Learnring "<<learn1.what<<" from "<<learn1.where<<endl;
	
	return 0;
}
