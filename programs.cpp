#include<iostream>
using namespace std;

void fibonacci(int n){
	int n1=0,n2=1,n3;
	cout<<n1<<" "<<n2;
	for(int i=2;i<=n;i++){
		n3=n1+n2;
		cout<<" "<<n3;
		n1=n2;
		n2=n3;
	}
}

void primeNum(int n){
	int flag=0;
	for(int i=2;i<n/2;i++){
		
		if(n%i==0){
//			cout<<"Not Prime";
			flag++;
		}
	}
		if(flag==0){
			cout<<"prime";
		}
		else{
			cout<<"not prime";
		}
	
}

int main(){
//	fibonacci(5);
	primeNum(7);
	
}