#include <iostream>
using namespace std;

int sum (int x, int y){
	return x+y;
}

int sum (int x, int y, int z){
	return x+y+z;
}

int main(){
		int ans2, ans3;
		
		ans2 =  sum (1,2);
		ans3 = sum (1,2,3);
		
		cout<<"with 2 parameter: "<<ans2<<endl;
		cout<<"with 3 parameters: "<<ans3<<endl;
		
		return 0;
}
