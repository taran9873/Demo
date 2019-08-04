#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int dec;
    int pow;
    int i =0;
    while(i < n){
        dec =0;
        pow =1;
        int a;
        cin>> a;
        while( a !=0){
            int reminder = a%10;
            dec = dec+ (pow*reminder);
            a= a/10;
            pow = pow*2;
        }
        cout<< dec<<endl;
        i++;
    }
    
}