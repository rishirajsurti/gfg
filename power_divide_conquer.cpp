#include <iostream>
using namespace std;

int pow(int a ,int b);

int main(){
	cout<<pow(2,10)<<endl;
	return 0;
}

int pow(int a ,int b){
	if(b==1)
		return a;
	else{
		if(b%2 == 0)
			return pow(a,b/2)*pow(a,b/2);
		else
			return a*pow(a,b/2)*pow(a,b/2);
	}
}