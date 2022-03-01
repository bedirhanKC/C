/*
Bedirhan Kömürcü
01.03.2022
hafta 3 lab
*/

#include <stdio.h>

void fun(int x)
{

    if (x > 0)
    {
        fun(--x);
        printf("%d\t", x);
        fun(--x);
    }
}


int main()
{

int a = 4;
fun(a);

return 0;

