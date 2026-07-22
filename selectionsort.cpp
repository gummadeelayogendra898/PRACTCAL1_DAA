#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int i,j,temp;
    for ( i = 0; i < n - 1; i++) {
        int min = i;

        for ( j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }

        // Swap using temp variable
         temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "Sorted Array: ";
    for ( i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
