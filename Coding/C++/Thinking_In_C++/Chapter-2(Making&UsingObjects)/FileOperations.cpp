#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
void main(){
	typedef unsigned int uint;
	
	ifstream in("CircleArea.cpp");
	char st;
	uint count = numeric_limits<uint>::min(), c= numeric_limits<uint>::min();
	cout<<"Enter a word which need to be known how many times repeated in a file"<<endl;
	string str,s;
	getline(cin,str);
	while(!in.eof()){
		in.get(st);
		if(st == ' ' || st == '\n' || st == '\t'){
			count++;
			if(s == str)
				c++;
			s.clear();
		}else{
			s+=st;
		}
	}
	cout<<"Total number of White spaces are :"<<count<<endl;
	cout<<"Total number of times the word "<<str<< " repeated for :"<<c<<endl;
}