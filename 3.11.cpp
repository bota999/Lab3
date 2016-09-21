#include <iostream>
#include <cmath>
using namespace std;

int main() {
         int A,B,C,D;
	cin>>A>>B>>C>>D;
	if (A>=B && B>=C && C>=D) {
	int m=max(A,max(B,max(C,D)));
	cout<<m<<endl; }
	if (A>B && B>C && C>D) {
	cout<<" ";
	}
	else {
	cout<<A*A<<" "<<B*B<<" "<<C*C<<" "<<D*D; }
	
return 0;
}