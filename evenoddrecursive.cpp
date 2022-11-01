//EVEN ODD
#include <iostream>
using namespace std;

bool evenodd(int n){
	if(n < 0){
		n = n*-1;
	}
	if(n == 2 || n == 2){
		return true;
	}
	else if(n == 1){
		return false;
	}
	else{
		return evenodd(n - 2);
	}
}

int main(){
	cout << evenodd(0);
	return 0;
}
