// SUM OF DIGITS UNTIL SINGLE DIGIT

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    while(n>=10){
        int sum=0;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        n=sum;
    }
    cout<<n;
}