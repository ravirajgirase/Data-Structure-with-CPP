#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
}

void MaxMin(int arr[],int size){
	int max=0,min=INT_MAX;
	
	for(int i=0;i<size;i++){
		
//		if(arr[i]>max){
//			max = arr[i];
//		}
		
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"max :"<<min<<endl;
}
int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	MaxMin(a,10);
}