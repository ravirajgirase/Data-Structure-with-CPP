#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int i =1;
	
/*	while(i<=n){
		int j=1;
		while(j<=n){
			cout <<" * ";
			j++;
		}
		cout<<endl;
		
		i++;
	}*/
	
//int count=0;
//	while(i<=n){
//		int j=1;
//		
//		while(j<=n){
//			count++;
//			cout<<count;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
/*
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<" * ";
			j++;
		}
		cout<<endl;
		i++;
	}*/



/*
while(i<=n){
	int j=1;
	int count =i;
	while(j<=i){
		cout<<count<<" ";
		j++;
		count++;
	}
	count=count + 1;
	cout<<endl;
	i++;
}*/

/*	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<i-j+1;
			j++;
		}
		cout<<endl;
		i++;
	}*/
	char ch ='A';
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<ch-i+1 <<" ";
			ch++;
			j++;
		}
		cout<<endl;
		i++;
//		ch=ch-i+1;
	}

}