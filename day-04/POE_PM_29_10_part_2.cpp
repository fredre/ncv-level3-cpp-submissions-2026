#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int SIZE = 5;

// input 5 numbers into an array

void inputNumbers(int arr[])
{
    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// count and return the number of even numbers

int countEven(int arr[])
{
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    return count;
}

// display only the odd numbers in the array

void displayOdd(int arr[])
{
    cout << "Odd numbers: ";
    bool found = false;
    for (int i = 0; i < SIZE; i++)
        {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
            found = true;
        }
    }
    if (!found) cout << "(none)";
    cout << endl;
}

// bubble sort array in ascending order

void sortArray(int arr[])
{

    for (int i = 0; i < SIZE - 1; i++)
        {
        for (int j = 0; j < SIZE - 1 - i; j++)
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

// display the sorted values
void displaySorted(int arr[])
{
    cout << "Sorted values: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int numbers[SIZE];

    inputNumbers(numbers);
    int evenCount = countEven(numbers);
    cout << "Number of even numbers: " << evenCount << endl;

    displayOdd(numbers);

    sortArray(numbers);
    displaySorted(numbers);

    return 0;
}
