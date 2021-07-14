#include <iostream>
using namespace std;


class Learn {
	public:
	//inside method
		void next(){
			cout<<"next is JS"<<endl;
		}
		
	//outside method
	void next1();
	
	//with parameter
	
	void next2 (string what){
		cout<<"next "<<what<<endl;
	}
};

void Learn ::  next1(){
	cout<<"Next is JS"<<endl;
}
int main(){
	Learn JS;
	
	JS.next();
	JS.next1();
	JS.next2("JS");
}
