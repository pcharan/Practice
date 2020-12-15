#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void main(){
	ifstream fo("CircleArea.cpp");
	
	vector<string> lstr;
	while(!fo.eof()){
		string s;
		getline(fo,s);
		lstr.push_back(s);
	}
	for(auto it:lstr){
		for(string::reverse_iterator reve=it.rbegin(); reve!=it.rend(); ++reve)
			cout<<*reve;
		cout<<endl;
	}
}