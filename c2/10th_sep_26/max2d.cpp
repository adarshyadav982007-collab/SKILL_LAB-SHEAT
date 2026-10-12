#include<iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter row: ";
    cin >> r;

    cout << "Enter column: ";
    cin >> c;

    int arr[r][c];
    int max = 0;

    cout << endl
         << "Enter elements of array " << r << "*" << c << endl;

    // Input elements
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // Find maximum element
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << "Max = " << max << endl;

    return 0;
}

 