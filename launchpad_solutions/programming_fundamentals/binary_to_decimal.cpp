#include <iostream>
using namespace std;
int main() {
    int n=1;
    int dec=0;
    int pow =1;
    int i =0;
    while(i < n){
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