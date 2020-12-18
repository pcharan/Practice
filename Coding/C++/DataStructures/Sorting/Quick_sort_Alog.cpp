#include<iostream>

using namespace std;

int Partition(int ar[], int f, int l)
{
	int pivot=ar[l];
	int pivotindex=f;
	cout<<pivot<<" last index"<<l<<endl;
	for(int i=f;i<l;i++){
		if(pivot>ar[i]){
			int tmp=ar[pivotindex];
			ar[pivotindex]=ar[i];
			ar[i]=tmp;
			pivotindex++;
		}
	}
	int tmp=ar[l];
	ar[l]=ar[pivotindex];
	ar[pivotindex]=tmp;
	cout<<pivotindex;
	return pivotindex;
}

void Quicksort(int arr[], int f, int l){
	if(f<l){
		int pivot=Partition(arr, f, l);
		Quicksort(arr, f, pivot-1);
		Quicksort(arr, pivot+1, l);
	}
}

int main(){
	int ar[]={2,5,3,7,9,10,34,52,0,54,89};
	cout<<"before sorting"<<endl;
	for(int i : ar){
		cout<<i<<"\t";
	}
	cout<<endl;
	Quicksort(ar,0,sizeof(ar)/sizeof(ar[0]) -1);
	cout<<"After sorting"<<endl;
	for(int i : ar){
		cout<<i<<"\t";
	}
	cout<<endl;
	return 0;
}
