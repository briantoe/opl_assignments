#include <iostream>
#include <chrono>
#include <thread>
#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>

#define LOOPS 1000000
#define ARRSIZE 10000

using namespace std;

void staticArr();
void stackArr();
void heapArr();


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

    time(&start);
    for (int i = 0; i < LOOPS; i++)
    {
        heapArr();
    }
    time(&end);
    time_taken = double(end - start);
    cout << time_taken << endl;


    // srand(time(0));
    // int r = (rand() % 1000) + 1;
    // int temparr[r];
    // for(int i = 0; i < r; i++)
    // {
    //     temparr[i] = i + 1;
    //     cout << temparr[i] << endl;
    // }

    return 0;
}

void staticArr()
{
    int static arr[ARRSIZE];
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