#include<iostream>
#include<vector>

using namespace std;

void main(){
	vector<int> v,v2;
	for(int i=0;i<3;i++) v.push_back(i+1);
	for(int i=0;i<3;i++){
		v2.push_back(v[3-i-1]);
	}
	for(auto it:v2) cout<<it<<endl;
}
