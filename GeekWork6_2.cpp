#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


void reverse(int *Array)
{
    int i = 0, j = 10;
    while (i < j)
    {
        int buffer = Array[i];
        Array[i] = Array[j];
        Array[j] = buffer;
        i++; j--;
    }     
}

int *formula(int *Array)
{
    int Array2[11];
    for (int i = 0; i < 11; i++)
    {
        Array2[i] = sqrt(fabs(Array[i])) + 5 * pow(Array[i], 3);
    }
    return Array2;
}

int main()
{
    int Array[11]{0};

    for (int i = 0; i < 11; i++)
    {
        cout << "Enter value N " << i << endl;
        cin >> Array[i];
    }

    reverse(Array);
    

    for (int i = 0; i < 11; i++)
    {
        if (*(formula(Array) + i) > 400)
        {
            cout << *(formula(Array) + i) << " > 400" << endl;
        }
        else 
        {
            cout << *(formula(Array) + i) << endl;
        }
    }
    return 0;

}