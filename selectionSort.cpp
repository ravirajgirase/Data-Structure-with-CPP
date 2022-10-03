#include<iostream>

using namespace std;

void selection(int arr[],int n){
	
	int minIndex=0;
	int i,j;
	
	for(i=0;i<n-1;i++){
		minIndex = i;
		
		for(j=i+1;j<n;j++){
			
			if(arr[minIndex]>arr[j]){
				minIndex = j;
			}
		}
		swap(arr[minIndex],arr[i]);
	}
}

int main(){
	
	int arr[] = {6,5,4,3,2,1};
	selection(arr,6);
	for(int i=0;i<6;i++){
		cout<<" "<<arr[i];
	}
}