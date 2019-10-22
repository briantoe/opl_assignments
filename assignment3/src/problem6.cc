#include <iostream>
#define ARRSIZE 10

using namespace std;


int main()
{
    // section accesses array using subscripting
    int subscript[ARRSIZE][ARRSIZE]; // creates a 10 x 10 matrix
    int c = 100;
    for(int i = 0; i < ARRSIZE; i++)
    {
        for(int j = 0; j < ARRSIZE; j++)
        {
            subscript[i][j] = c;
            cout << subscript[i][j] << " ";
            c++;
        }
        cout << endl;
    }
    cout << endl;

    // section accesses array using pointers
    int **pointerAccess;
    pointerAccess = new int* [ARRSIZE];
    for (int i=0; i < ARRSIZE; i++)
    {
        *(pointerAccess + i) = new int[ARRSIZE];

    }

    for (int i=0; i < ARRSIZE; i++)
    {
        for (int j=0; j < ARRSIZE; j++)
        {
            *(*(pointerAccess + i) + j) = j;
            cout << *(*(pointerAccess + i) + j) << " ";
        }
        cout << endl;
    }

    for (int i=0; i < ARRSIZE; i++)
    {
        delete [] *(pointerAccess + i);
    }

    return 0;
}