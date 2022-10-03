#include<iostream>
using namespace std;


void print(int n){
	
	if(n==0){
		return ;
	}
	
	print(n-1);
	cout<<n<<" ";
}

int factorial(int n){
	
	if(n>=1){ 	
	return n * factorial(n-1);
}
	else
		return 1;
	
		
}
int main(){

//	print(5);
	factorial(5);
}            