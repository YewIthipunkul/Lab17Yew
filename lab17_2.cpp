#include<iostream>
using namespace std;

void myString(char *&t, int N){
	t = new char[N+1];    
	for(int i = 0; i < N;i++) t[i] = 'A'+i;
	t[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
	}
