#include <iostream>
using namespace std;
class a{
	protected:
		int pro;
};

class b : public a{
	public:
		void setPro(int x){
			pro = x;
		}
		int getPro(){
			return pro;
		}
};

int main(){
	b b1;
	
	b1.setPro(50);
	
	int z;
	z = b1.getPro();
	
	cout<<"The value using protected: "<<z<<endl;
	return 0;
	
	return 0;
}
