#include<iostream>

class Number
{
	static int num;
	public:
		Number(){
			std::cout<<num<<std::endl;
			++num;
			}
};
int Number::num = 1;
void main()
{
	Number obj[100];
}