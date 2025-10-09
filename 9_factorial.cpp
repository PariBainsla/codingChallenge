// FACTORIAL OF A NUMBER

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    long long fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact*i;
    }

    cout<<"Factorial is " <<fact; 
}