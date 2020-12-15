#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void main(){
	ifstream fo("Filevector.cpp");
	
	vector<string> fstr;
	while(!fo.eof()){
		string st;
		getline(fo,st);
		fstr.push_back(st);
	}
	
	string str;
	for(auto st : fstr) str+=st;
	
	cout<<str<<endl;
}