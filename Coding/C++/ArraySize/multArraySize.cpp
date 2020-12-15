#include <iostream>
#include<vector>

using namespace std;

void main(){
	vector<vector<int>> ma;
	int k=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			ma[i][j]=k++;
		}
	}
	cout<<ma.size()<<endl;
}