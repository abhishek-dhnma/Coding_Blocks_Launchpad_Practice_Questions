#include <iostream>
using namespace std;

/*
            1
        2 1   1 2
    3 2 1       1 2 3
4 3 2 1           1 2 3 4
    3 2 1       1 2 3
        2 1   1 2
            1
*/

int main() {

    int N = 7;

    for (int i = 1; i <= N / 2 + 1; i++)
    {

        for (int j = i; j <= N / 2; j++)
        {
            cout << '\t';
        }

        for (int k = i; k > 0 ; k--)
        {
            cout << k << " ";
        }

        if (i >= 1) {

            for (int s = 0 ; s < (i - 1) * 2 - 1; s++)
            {
                cout << "  ";
            }
        }

        if (i >= 2)
        {
            for (int h = 1; h <= i; h++)
            {
                cout << h << " ";
            }
        }

        cout << endl;
    }

    for (int i = N / 2 + 1 - 1; i >= 1 ; i--)
    {

        for (int j = i; j <= N / 2; j++)
        {
            cout << '\t';
        }

        for (int k = i; k > 0 ; k--)
        {
            cout << k << " ";
        }

        if (i >= 1) {

            for (int s = 0 ; s < (i - 1) * 2 - 1; s++)
            {
                cout << "  ";
            }
        }

        if (i >= 2)
        {
            for (int h = 1; h <= i; h++)
            {
                cout << h << " ";
            }
        }

        cout << endl;
    }



    return 0;
}