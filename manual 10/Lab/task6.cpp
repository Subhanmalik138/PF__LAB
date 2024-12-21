#include <iostream>
using namespace std;
void ascending(int arr[], int n);
int main()
{
    const int size = 10;
    int packages[size];
    cout << "Enter the weights of 10 packages: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> packages[i];
    }
    ascending(packages, size);
    cout << "Packages sorted by weight in ascending order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << packages[i] << " ";
    }
    cout << endl;
    return 0;
}
void ascending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}