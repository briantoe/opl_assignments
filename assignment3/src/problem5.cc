#include <iostream>

using namespace std;


enum Numbers{ONE, TWO, THREE, FOUR};


int main()
{
    Numbers n[] =  {ONE, TWO, THREE, FOUR};
    for(int i = 0; i < 4; i ++)
    {
        cout << n[i] << endl;
    }

    return 0;
}