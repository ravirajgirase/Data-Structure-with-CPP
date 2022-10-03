#include<iostream>
using namespace std;

int main(){
	
	int n;
	int sum;
	int i=1;
	cin >> n;
//	while(i<=n){
//		sum = sum+i;
//		i++;
//	}
//	cout<<"Sum is : "<<sum <<endl;
	
//	sum of even number

/*	while(i<=n){
		if(i%2==0){
			sum = sum+i;
		}
		i++;
	}
	cout <<"Sum of even number is : "<<sum <<endl;
*/
	i=2;
	while(i<n){
		if(n%i==0){
			cout<<"Not prime";
		}
		else{
			cout<<"prime";
			
		}
		i++;
	}
}