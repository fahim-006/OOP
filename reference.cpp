#include <iostream>

using namespace std;

int main(){
	int a;
	int &b = a;
	
	a = 5;
	b = a;
	
	cout <<"here a = "<<a<< "and b = "<<b<<endl;
	
	return 0;
}
