// CHECK BALANCED PARENTHESES

#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;
    for (char ch : s)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if (ch == ')' && top != '(' || ch == '}' && top != '{' || ch == ']' && top != '[')
            {
                return false;
            }
        }
    }
}

int main(){
    string expr;
    cout<<"Enter expression: ";
    cin>>expr;

    if (isBalanced(expr)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
}