#include <iostream>
#include <chrono>
#include <thread>
#include <bits/stdc++.h>

using namespace std;

void staticArr();
void stackArr();
void heapArr();

const int LOOPS = 100000;
const int ARRSIZE = 5000;

int main()
{
    time_t start, end;
    double time_taken;

    time(&start);
    for (int i = 0; i < LOOPS; i++)
    {
        staticArr();
    }
    time(&end);
    time_taken = double(end - start);
    cout << time_taken << endl;

    time(&start);
    for (int i = 0; i < LOOPS; i++)
    {
        stackArr();
    }
    time(&end);
    time_taken = double(end - start);
    cout << time_taken << endl;

    //  stackArr();

    // heapArr();

    return 0;
}

void staticArr()
{
    static int arr[ARRSIZE];
    int size = sizeof(arr) / sizeof(arr[0]);
 
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}
void stackArr()
{
    int arr[ARRSIZE];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}
void heapArr()
{
    int *arr = new int[ARRSIZE];
    for (int i = 0; i < ARRSIZE; i++)
    {
        arr[i] = i + 1;
    }
    delete[] arr;
}