#include <iostream>
using namespace std;

int main(){
	try{
		int age;
		cin>>age;
		if(age>18){
			cout<<"Allowd"<<endl;
		}
		else{
			throw(age);
		}
	}
	
	catch (int age){
		cout<<"access denied due to age: "<<age<<endl;
	}
	
	return 0;
}
