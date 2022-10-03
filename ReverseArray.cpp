#include<iostream>
using namespace std;

void ReverseArray(int arr[],int n){
	
//	for(int i=0;i<n;i++){
//		 int temp =arr[i];
//		 arr[i]=arr[n-1-i];
//		 arr[n-i-1]=arr[i];
//		n=n-i;
//	}
	int s=0, e =n-1;
	while(s<=e){
		
		swap(arr[s],arr[e]);
		e--;
		s++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	
	int n=6;
	int arr[n]={6,5,4,3,2,1};
	ReverseArray(arr,n);
	
}