#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	if (x>=y && y>=z) { 
	cout<<x+x<<" "<<y+y<<" "<<z+z;
	} 
	else  {
	cout<<abs(x)<<" "<<abs(y)<<" "<<abs(z);
	 }
return 0;
}