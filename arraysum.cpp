 /*Write a C++ program to calculate the sum of all even and odd numbers in an array.
Sample Output:
Original array: 1 2 3 4 5 6 7 8
Sum of all even and odd numbers: 20,16*/
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sumEven = 0, sumOdd = 0;

    cout << "Original array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";

        if(arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    cout << "\nSum of all even and odd numbers: " << sumEven << "," << sumOdd << endl;

    return 0;
}