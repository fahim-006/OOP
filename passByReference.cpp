#include <iostream>
using namespace std;

void swapPassByReference (int &x, int &y){
	cout<<"swapPassByReference address x = "<<&x<<" y = "<<&y<<endl;
	int z = x;
	x = y;
	y = z;
}

void swapNotPassByReference (int x, int y){
	cout<<"swapNotPassByReference address x = "<<&x<<" y = "<<&y<<endl;
	int z = x;
	x = y;
	y = z;
}


int main(){
	int firstNum = 10;
	int secondNum = 20;
	
	cout<<"before swap firstNum = "<<firstNum<<" and 2nd num = "<<secondNum<<endl;
	
	swapNotPassByReference(firstNum, secondNum);
	cout<<"address firstNum = "<<&firstNum<<" secondNum = "<<&secondNum<<endl;
	cout<<"swapNotPassByReference: firstNumber = "<<firstNum<<" and second Number = "<<secondNum<<endl;
	
	swapPassByReference(firstNum, secondNum);
	
	cout<<"swapPassByReference: firstNumber = "<<firstNum<<" and second Number = "<<secondNum<<endl;
	
	
	
	return 0;
	
}
