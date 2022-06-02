#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size] = { 7, 87, 13, 45, 37, 17, 73, 52, 55, 45 };

    cout << "Before sorting: " << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < size; i++) {
        int j = i;
        while (arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            if (--j == 0)
                break;
        }
    }

    cout << endl << "After sorting: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
