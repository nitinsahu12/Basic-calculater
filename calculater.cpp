#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float ans;
	double N1,N2;
	char op;
	cout<<"Enter the operation:(+,-,*,/,%)"<<endl;
	cin>>op;
	cout<<"Enter the first number  N1=";
	cin>>N1;
	cout<<"Enter the second number N2=";
	cin>>N2;
	switch(op){
		case '+':
			ans=N1+N2;
			break;
		case '-':
			ans=N1-N2;
			break;
		case '*':
			ans=N1*N2;
			break;
		case '%':
			if(N2==0){
				cout<<"Enter Non zero Number";
				return 0;
			}
			ans=fmod(N1,N2);
			break;
		case '/':
			if(N2==0){
				cout<<"Enter Non zero Number";
				return 0;
			}
			ans=N1/N2;
			break;
		default:
			cout<<"Invailid operation";
			return 0;
	}
	cout<<"Your ans is:"<<N1<<op<<N2<<"="<<ans<<endl;
	return 0;
}