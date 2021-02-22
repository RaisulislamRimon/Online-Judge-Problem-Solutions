//-----------------------------------------
// POJ - 1004
// UVA - 11945 - Financial Management
//-----------------------------------------
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    double avg, sum = 0.0, a[12] = {0};

    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    avg = sum / 12;

    printf("$%.2lf\n", avg);

    return 0;
}
