#include <stdio.h>
/**
 * Find fibonacci iteratively
 */
int main() {
   fn(0, 1, 20);
}
void fn (int a, int b, int num)
{
    int arr[num];
    arr[0] = a;
    arr[1] = b;
    int i = 2;
    while (i < num)
    {
        int c = a + b;
        arr[i] = c;
        a = b;
        b = c;
        i++;
    }
    for (int j = 0; j < num; j++)
    {
        printf(" %d", arr[j]);
    }
}
