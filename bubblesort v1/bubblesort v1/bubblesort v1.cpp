#include <iostream>
#include <vector>
#include <istream>

using namespace std;

// Function to sort an array using the bubble sort algorithm
void bubbleSort(vector<int>& arr)
{
    // Loop through the array, starting from the end and moving towards the front
    for (int i = arr.size() - 1; i > 0; i--)
    {
        // Loop through the array, starting from the beginning and moving towards the end
        for (int j = 0; j < i; j++)
        {
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    
    // Define an unsorted array of integers
    vector<int> arr = {9, 39, 2, 7};
    // Print the unsorted array
    cout << "Unsorted array: ";
    for (int elem : arr)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Sort the array in ascending order using the bubble sort algorithm
    bubbleSort(arr);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int elem : arr)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
