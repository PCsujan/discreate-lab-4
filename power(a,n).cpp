// write a program to calculate a^n

#include<iostream>
#include<cmath>

using namespace std;

int power (int a,int n){
	int result = 1;
	for(int i=0; i<n ;i++){
		result *=a;
		}
	return result;
}

int main(){
	int a ,n;
	cout<<"Enter the value for a:";
	cin>>a;
	cout<<"Enter the value for n:";
	cin>>n;
	
	cout<<"The result of "<<a<<"^"<<n<<" is "<<power(a,n)<<endl;
	return 0;
}
