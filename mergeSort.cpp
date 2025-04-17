#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input(){
    while (true)
    {      
        cout << "masukkan panjang elemen array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else{
            cout << "\nMaksimal panjang array adalah 20";
        }
    }

    cout << "\n=========================";
    cout << "\nInputkan isi elemen array";
    cout << "\n=========================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "array index ke - " << i << ": ";
        cin >> arr[i];
    }
}

void mergeSort(int low, int high){
    if (low >= high)        // step1
    {
        return;             // step 1.a
    }

    int mid = (low + high)/2;  // step 2

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid);               //step 3.a
    mergeSort(mid + 1, high);           //step 3.b

    //step 4
    int i = low;            // step 4.a
    int j = mid + 1;        // step 4.b
    int k = low;            // step 4.c

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            
        }
        
    }
    
}