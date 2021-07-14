#include <iostream>

using namespace std;

int main(){
	string food = "Pizza";
	string &f1 = food;

	cout<<"food = "<< food<<endl;
	cout<<"f1 = "<<f1<<endl;
	
	return 0;
}
