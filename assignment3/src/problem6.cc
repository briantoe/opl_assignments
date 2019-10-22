#include <iostream>

#define ARRSIZE 10

using namespace std;


int main()
{
    // section accesses array using subscripting
    int subscript[ARRSIZE][ARRSIZE]; // creates a 10 x 10 matrix
    int c = 1;
    for(int i = 0; i < ARRSIZE; i++)
    {
        for(int j = 0; j < ARRSIZE; j++)
        {
            subscript[i][j] = c;
            c++;
        }
    } 

    int **pointer = new int*[ARRSIZE];
    
    int *temp = *pointer;
    for(int i = 0; i < ARRSIZE; i++)
    {
        temp = new int[ARRSIZE];
        temp ++;
    }

    int **row = pointer;
    int *col = *pointer;

    for(int i = 0; i < ARRSIZE; i++)
    {
        for(int j = 0; j< ARRSIZE; j++)
        {
            
        }
    }

    return 0;
}