#include<iostream>
using namespace std;

int firstOcc(int arr[],int n , int key){
	int s =0;
	int e = n-1;
	int mid = (s+e)/2;
	int ans = -1;
	
	while(s<=e){
		
		if(arr[mid]==key){
			ans = arr[mid];
			e = mid -1;
		}
		else if(arr[mid]<key){
			s = mid+1; 
		}
		else if(arr[mid]>key){
			e =mid -1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}

int lastOcc(int arr[],int n , int key){
	int s =0;
	int e = n-1;
	int mid = (s+e)/2;
	int ans = -1;
	
	while(s<=e){
		
		if(arr[mid]==key){
			ans = arr[mid];
			e = mid +1;
		}
		else if(arr[mid]<key){
			s = mid+1; 
		}
		else if(arr[mid]>key){
			e =mid -1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
}



int main(){
	
	int n=10;
	int arr[n]={1,2,2,3,4,5,6,7,8,8};
	
	int first = firstOcc(arr,n,2);
	int last = lastOcc(arr,n,2);
	cout<<"hello"<<endl;
	cout<<"First Occurrenc is : "<<first;
	
	return 0;
	
}