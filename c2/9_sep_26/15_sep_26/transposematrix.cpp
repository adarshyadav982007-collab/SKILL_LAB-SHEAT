   #include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Transpose Matrix" << endl << endl;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    int arr[r][c];

    // Input matrix
    cout << "Enter matrix elements:" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    // Print transpose
    cout << "\nTranspose of matrix:" << endl;

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}