#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int valliescount(int steps, string path){
	int count =0;
	long level =0;
	ofstream of("output.txt");
    for(int i=0;i<steps; i++){
        if(path[i] == 'U'){ level++; }
        else{ level--;}
		of<<level<<" ";
        if(level == 0){
			count +=1; 
			of<<path[i]<<"\nlevel settled :" << level<<"\n count -"<<count<<"  i value:"<<i<<" steps :"<<steps<<endl;
		}
    }
	cout<<"total steps :"<<steps<<"\ncount :"<<count<<endl;
	of.close();
	return count;
}

int main(){
	ifstream myfile("input.txt");
	int steps=0;
	string path="";
	if(myfile.is_open()){
		string line;
		while(getline(myfile, line)){
			if(steps == 0){
				steps = stoi(line.erase(0, line.find_first_not_of(' ')));
			}else{
				path +=line;
			}
		}
		myfile.close();
	}
	cout<<"Number of vallies :"<<valliescount(steps,path)<<endl;
	
	return 0;
}