#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int rem;
	int ans=0;
	while(n!=0)
	{
		rem=n%10;
		ans=(ans*10)+rem;
		n=n/10;
	}
	cout<<ans;
	return 0;
}
