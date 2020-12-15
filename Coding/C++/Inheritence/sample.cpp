#include<iostream>

using namespace std;

class A{
	public:
		int x=0;
	protected:
		int y=1;
	private:
		int z=2;
};

class B:protected A{
	
};
void main(){
	cout<<A::y<<endl;
}