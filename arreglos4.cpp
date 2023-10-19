#include<iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << tam << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;

    int *ptr = arr;
    cout << *(ptr + 0) << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + tam - 1) << endl;

    return 0;
}
