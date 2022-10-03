#include<iostream>
using namespace std;

void swapArray(int arr[],int size){
	int temp=0;
	for(int i=0;i<size;i+=2){
	
	   if(arr[i+1]<size){
	   	/*temp=arr[i];
	   	arr[i]=arr[i+1];
	   	arr[i+1]=temp;
	   */
	   	swap(arr[i],arr[i+1]);
	   }
}
	   
}
		
int main(){
	
	int arr[8]={1,2,3,4,5,6,7,8};
	
	swapArray(arr,8);
	
	for(int i=0;i<=8;i++){
		cout <<" "<<arr[i];
	}
}