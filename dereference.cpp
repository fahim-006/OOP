#include <iostream>
using namespace std;
int main(){
	string food = "Pizza";
	string* ptr = &food;
	
	cout<<"Address of the food variable: "<<ptr<<endl;
	cout<<"Get the food's valur using *ptr: "<<*ptr<<endl;
	
	return 0;
}

