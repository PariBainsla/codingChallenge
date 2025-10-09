// COUNT VOWELS AND CONSONANTS

#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin, str);
    int vowel = 0;
    int consonant = 0;
    int n = str.length();

    for(int i=0; i<n; i++){
        char ch = tolower(str[i]);

        if(ch>='a' && ch<='z'){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowel++;
            }
            else{
                consonant++;
            }
        }
    }
    cout<<"Number of vowels are: "<<vowel<<endl;
    cout<<"Number of consonant are: "<<consonant<<endl;
}