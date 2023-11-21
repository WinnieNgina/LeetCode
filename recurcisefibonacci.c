#include <stdio.h>

// Function declaration
void fn(int a, int b, int num);

int main() {
   fn(0, 1, 20);
   return 0;
}

void fn(int a, int b, int num) {
   printf(" %d, %d", a, b);
   int i = 2;
   while (i < num) {
      int c = a + b;
      printf(" %d", c);
      a = b;
      b = c;
      i++;
   }

   // Add a base case to terminate the recursion
   if (i == num) {
      return;
   }

   // Recursive call with updated values
   fn(a, b, num);
}
