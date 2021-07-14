#include <iostream>
using namespace std;

string myfunction(string country = "Bangladesh"){
	string x;
	x = country;
	
	return x;
}

int main(){
	string z;
	
	z = myfunction ("Brazil");
	cout<<"calling with parameter: "<<z<<endl;
	z = myfunction();
	cout<<"calling without parameter: "<<z<<endl;
	
	return 0;
}	
