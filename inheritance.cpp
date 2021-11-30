//Basic introduction program
#include<iostream>
using namespace std;
class super{
	public:
		void display(){
			cout<<"this is class one";
		}
};
class sub:public super{
	
};
int main(){
	super obj;
	obj.display();
}
