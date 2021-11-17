#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <cstdlib>
#include <ctime>

int Random(int m, int n)
{
	int r = rand();
	srand(r);
    int pos, dis;
    if(m == n)
    {
        return m;
    }
    else if(m > n)
    {
        pos = n;
        dis = m - n + 1;
        return rand() % dis + pos;
    }
    else
    {
        pos = m;
        dis = n - m + 1;
        return rand() % dis + pos;
    }
}

#endif