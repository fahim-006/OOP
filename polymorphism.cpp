#include <iostream>
using namespace std;

class animal{
	public:
		void sound(){
			cout<<"animals make sound!"<<endl;
		}
};

class dog : public animal{
	public: 
		void sound(){
			cout<<"Dogs say: bhew bhew"<<endl;
		}
};

class cat :  public animal{
	public:
		void sound(){
				cout<<"Cats say: Meow"<<endl;
		}
};
int main(){
	cat cat1;
	animal animal1;
	dog dog1;
	
	cat1.sound();
	animal1.sound();
	dog1.sound();
	
	return 0;
}
