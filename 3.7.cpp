#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int x,y;
	cin>>x>>y;
	if (x==y) {
	cout<<"ERROR"; }
	if (x>y) {
		cout<<x<<" "<<"were replaced"<<" "<<2*x*y<<endl<<y<<" "<<"were replaced"<<" "<<(x+y)/2;
	}
	if (y>x) {
		cout<<y<<" "<<"were replaced"<<" "<<2*x*y<<endl<<x<<" "<<"were replaced"<<" "<<(x+y)/2;
	}
return 0;
}