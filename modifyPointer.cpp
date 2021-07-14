#include <iostream>
using namespace std;
int main(){
	string food = "pizza";
	string *ptr = &food;
	
	cout<<"food = "<<food<<endl;
	cout<<"*ptr = "<<*ptr<<endl;
	
	cout<<"ptr = "<<ptr<<endl;
	*ptr = "Burger";
	
	cout<<"after change *ptr, food = "<<food<<endl;
	cout<<"after change *ptr,  *ptr = "<<*ptr<<endl;
	
	cout<<"after change *ptr,  ptr = "<<ptr<<endl;
}
