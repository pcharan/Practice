#include <iostream>
#include <vector>
using namespace std;

void main(){
	typedef unsigned int uint;
	vector<int> v;
	for(int i=0;i<5;i++) v.push_back(i);
	uint l=4;
	cout<<"size of an array :"<<v.size()<<endl;
	for(uint i=0;i<v.size();i++){
		uint index;int diff=v.size()-(l+i);
		cout<<"difference :"<<diff<<endl;
		cout<<"i :"<< i << "l+i :" << (l+i) <<endl;
		if(diff>0){
			index = l+i;
			cout<<"index in if:"<<index<<endl;
		}
		else{
			index = (l+i)-v.size();
			cout<<"index in else:"<<index<<endl;
		}
	}
}