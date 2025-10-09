// FIND THE SECOND LARGEST NUMBER

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int secondMax = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }
    if (secondMax == INT_MIN)
    {
        cout << "No second largest number";
    }
    else
    {
        cout <<"Second Largest number is: "<<secondMax;
    }
}