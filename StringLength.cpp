#include<iostream>
using namespace std;

int getLength(char name[]){
	
	int count=0;
	
	for(int i=0; name[i]!='\0';i++){
		
		count++;
	}
	return count;
}
int reverse(char name[],int n){
	
	int s=0, e=n-1;
//	for(;s<e;s++){
//		swap(name[s++],name[e--]);
//	}
	while(s<=n){
		swap(name[s++],name[e--]);
	}
}

int main(){
	
	char name[20];
	cin>> name;
	int len = getLength(name);
	cout<<"Reverse string is : "<<reverse(name,len);
//	cout<<"Length is : "<<getLength(name);
	
	return 0;
}