#include<iostream>

using namespace std;

int main(){
	
	int a=0, b=1;
	int sum=0;
	cout <<a <<" " <<b;
	for(int i=0;i<=10;i++){
		
		sum=a+b;
		cout<<" "<< sum <<" ";
		a=b;
		b=sum;
	}
	
	for(int i=0;i<=10;i++){
		
		if(i==2){
	
			continue;
		}
		cout<<i<<endl;
	}
}