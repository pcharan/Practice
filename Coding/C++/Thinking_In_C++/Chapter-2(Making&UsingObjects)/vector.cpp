#include <iostream>
#include <vector>

using namespace std;

void main(){
	vector<float> vf;
	
	for(int i=0; i<25; i++) vf.push_back(i+3);
	
	for(int i=0; i<vf.size();i++) vf[i]=vf[i]*vf[i];
	
	for(auto it:vf) cout<<it<<endl;
}