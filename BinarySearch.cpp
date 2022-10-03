#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int key){

	
	int start=0;
	int end = n-1;
	int mid =(start+end)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			return mid;
		}
		
		if(arr[mid]<key){
			start =arr[mid+1];
		}
		else{
			end = arr[mid-1];
		}
		
		mid = (start+end)/2;
	}
	return -1;
	
}
int main(){
	cout <<"Enter size of array" <<endl;

	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
		cout <<"Enter a key : ";
	cin >>key;
	cout<<"index is : "<<binarySearch(arr,n,key);
	
	
}

/*

#include<bits/stdc++.h>
using namespace std;

// Returns index of item in given array, if it is present
// otherwise returns -1
int binarySearch(int arr[], int l, int r, int item)
{
    while (l <= r) {
        int mid = l + (r - l) / 2;
  
        // if item is at mid
        if (arr[mid] == item)
            return mid;
  
        // If item greater, ignore left half, consider only right half
        if (arr[mid] < item)
            l = mid + 1;
  
        // If item is smaller, ignore right half, consider only left half
        else
            r = mid - 1;
    }
  
    // if we are able to reach here
    // means item wasn't present
    return -1;
}
  
int main()
{
    // array needs to be sorted to impliment binary search
    int arr[] = {3, 5, 7, 9, 12, 15, 16, 18, 19, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 7;
    
    int position = binarySearch(arr, 0, n - 1, item);
    
    if(position == -1)
        cout << item << " Not Found";
    else
        cout << item << " Found at index " << position;
        
    return 0;
}
*/