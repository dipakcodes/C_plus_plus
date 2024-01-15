#include<iostream>
using namespace std;
int main()
{
    int numbers [10], *ptr;
    int n, i;
    cout << "Enter the count:" << endl;
    cin >> n;
    cout << "Enter the number one by one:" << endl;
    for (i=0; i<n; i++)
    {
        cin >> numbers[i];
    }
    ptr = numbers;
    int sum = 0;
    for (i= 0; i<n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    cout << "sum of the numbers:" << sum << endl;
}