#include<iostream>
using namespace std;

int pivotElement(int arr[],int n){

	int s =0;
	int e =n-1;
	int mid =s+(e-s)/2;
	
	while(s<=n){
		
		if(arr[0]<mid){
			s=mid+1;
		}
		else{
			e =mid;
		}
		s=s+(e-s)/2;
	}	
return s;
}

int main(){
	
	int arr[6]={1,2,3,4,1,2};
	int ans = pivotElement(arr,6);
	
	cout << "pivot element is : "<<ans;
}