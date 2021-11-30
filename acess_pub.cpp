#include<iostream>
using namespace std;
class publicly_Accessible{
	public:
		int a=8;
		int b=9;
		int display(){
			cout<<"value of a is "<<a;
			cout<<"value of b is "<<b;
		}
};
int main(){
	publicly_Accessible obj1;
	obj1.display();
}

