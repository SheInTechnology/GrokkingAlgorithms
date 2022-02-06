#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid;
   
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

    }
    return -1;
}

void main()
{
    int arr[6] = { -1, 0, 3, 5, 9, 12 };

    int target;

    cout << "Enter number you are searching for ? ";

    cin >> target;

    cout << BinarySearch(arr, 6, target);
}