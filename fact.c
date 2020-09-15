#include<iostream>
using namespace std;
int main(){
	int i,fact=1,no;
	cout<<" enter the no";
	cin>>no;
	for(i=no;i>=1;i--){
		fact=fact*i;
	}
	cout<<"factorial is "<< fact;
}