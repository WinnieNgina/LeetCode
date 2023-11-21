#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool checkpalindrome (char arr[]);

int main() {
    // Write C code here
    char string1 [] = "racecar";
    bool result = checkpalindrome(string1);
    if (result) {
        printf("%s is a palindrome.\n", string1);
    } else {
        printf("%s is not a palindrome.\n", string1);
    }

    return 0;
}
bool checkpalindrome (char arr[])
{
  int len = strlen(arr);
  int i, j;
  for (i = 0, j = len - 1; i < j; i++, j--)
  {
      if (arr[i] != arr[j])
      {
          return false;
      }
  }
  return true;
}
