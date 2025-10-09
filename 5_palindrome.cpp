// PALINDROME CHECK

#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the word: ";
    cin >> s;

    int start = 0;
    int end = s.length() - 1;
    bool isPalindrome = true;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome){
        cout<<"True";
    }
    else{
cout<<"False";
    }
}