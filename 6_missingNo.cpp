// FIND MISSING NUMBER IN A SEQUENCE

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;
    int arr[N - 1];
    cout << "Enter " << N - 1 << " elements from 1 to " << N << ":\n";
    int arrSum = 0;

    for (int i = 0; i < N - 1; i++)
    {
        cin >> arr[i];
        arrSum += arr[i];
    }
    int totalSum = N * (N + 1) / 2;
    int missingNo = totalSum - arrSum;
    cout <<"Missing number is "<< missingNo;
}