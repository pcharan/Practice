#include <iostream>

int main(){
	unsigned int r=std::numeric_limits<unsigned int>::min();
	double a;
	std::cout<<"Enter the Radius of a circle"<<std::endl;
	std::cin>>r;
	std::cout<<"The area of a circle :"<<3.14*r*r<<std::endl;
	return 0;
}