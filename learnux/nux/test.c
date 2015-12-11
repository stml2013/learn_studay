#include <stdio.h>
#include <string.h>

void fun(int x)
{
    printf("hello world");
}

void test()
{
    fun(0);
}

int main()
{
    printf("hello world");
    fun(0);
    return 0;
}
