#include<iostream>
#include<cmath>

using namespace std;

void swap(int &x, int &y){
	int tmp=x;
	x=y;
	y=tmp;
}

void MaxHeapify(int* a, int n, int root)
{
	int largest=root;
	int l = root*2+1;
	int r = l+1;

	if( l<=n && a[l] > a[largest] ){
		largest = l;
	}
	if( r<=n && a[r] > a[largest] ){
		largest = r;
	}
	if(largest != root){
		//swap(a[i], a[largest]);
		int tmp=a[root];
		a[root]=a[largest];
		a[largest] = tmp;
		MaxHeapify(a, n, largest);
	}
}
	
void HeapSort(int* a, int n){
	//Building Max heap
	for(int i=(n/2 -1); i>=0; i--){
		MaxHeapify(a, n, i);
	}
	//extracting elements from heap one by one
	for(int i=n; i>=0; i--){
		//swap(a[i], a[1]);
		int tmp=a[i];
		a[i]=a[0];
		a[0] = tmp;
		MaxHeapify(a, i-1, 0);
	
	}
}

int main(){
	int ar[]={2,5,3,7,9,10,34,52,0,54,89};
	cout<<"before sorting"<<endl;
	for(int i : ar){
		cout<<i<<"\t";
	}
	cout<<endl;
	int size= sizeof(ar)/sizeof(ar[0]);
	HeapSort(ar,size-1);
	cout<<"After sorting"<<endl;
	for(int i : ar){
		cout<<i<<"\t";
	}
	cout<<endl;
	return 0;
}
