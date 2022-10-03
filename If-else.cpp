#include<iostream>
using namespace std;

int main(){
	
//	If Else Conditions

	cout << "Enter a value :"<<endl;
	int a,b;
	cin >> a >>b;
//	cout << "Enter number is :" <<a;
//	
//	if(a>0){
//		cout <<"Positive";
//	}
//	else{
//		cout<<"Negative";
//	}

	if(a>b){
		cout <<"A is greater \n";
	}
	else if(a<b){
		cout <<"B is greater"<<endl;
	}
	else{
		cout << "equl";
	}
}