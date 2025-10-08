// REVERSE WORDS IN A STRING

#include <iostream>
using namespace std;

void reverseWord(string &s, int start, int end)
{
    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    int n = s.length();
    int start = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i == n || s[i] == ' ')
        {
            reverseWord(s, start, i - 1);
            start = i + 1;
        }
    }

    reverseWord(s, 0, n - 1);
    cout << s;
}