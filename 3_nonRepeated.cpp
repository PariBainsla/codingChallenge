//FIND THE FIRST NON-REPEATED CHARACTER

#include <iostream>
using namespace std;

char firstNonRepeated(string s){
    int n = s.length();
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(s[i] == s[j])
            count++;
        }
        if(count ==1)
        return s[i];
    }
    return '/0';
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    if(firstNonRepeated(str) != '\0'){
        cout<< firstNonRepeated(str);
    }
    else{
        cout<< "None";
    }
}