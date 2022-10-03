#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int prod=1;
	int sum=0;
	
	while(3>=0){
		int digit = n%10;
		prod = prod * digit;
		sum = sum + digit;
		n = n% 10;
	}
	int answer=0;
	answer= prod-sum;
	cout<<answer;
	
}