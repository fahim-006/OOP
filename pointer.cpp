#include <iostream>
using namespace std;

int main(){
		string food = "pizza";
		string *ptr = &food;
		
		cout<<"Food name: "<<food<<endl;
		cout<<"Address of the food: "<<ptr<<endl;
		
		return 0;
}
