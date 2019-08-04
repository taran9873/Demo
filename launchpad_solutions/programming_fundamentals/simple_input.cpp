#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    sum=sum+n;
    while(sum>=0)
    {
        cout<<n<<"\n";
        cin>>n;
        sum=sum+n;

    }
	return 0;
}
