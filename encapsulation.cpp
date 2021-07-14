#include <iostream>
using namespace std;

class bank{
	private:
		int money;
		
	public:
		void setMoney(int x){
			money = x;
		}
		
		int getMoney(){
			return money;
		}
};

int main(){
	bank customer1;
	int total = 0;
	
	customer1.setMoney (10000);
	total = customer1.getMoney();
	
	cout<<"Money: "<<total<<endl;
	
	return 0;
}
