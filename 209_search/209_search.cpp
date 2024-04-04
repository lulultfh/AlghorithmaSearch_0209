// 209_search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20]; //array to be searched
int n; //number of elements in the array
int i; //index of array element

void input() {
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";  //if else for menentukan apaakh program akan melanjutkan eksekusi atau menampilkan pesan kesalahan
    }

    //accept array elements
    cout << "\n--------------------------------\n";
    cout << "Enter array elements \n"; 
    cout << "\n--------------------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinearSearch()
{
    char ch; //untuk menyimpan input dari pengguna yang menentukan apakah program akan melanjutkan pencarian atau tidak
    int ctr; //untuk menyimpan jumlah perbandingan yang dilakukan
    int item; //untuk menyimpan angka yang ingin dicari dalam array
}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
