#include <stdio.h>

int main(void) {
  int t, a, b, c, d;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if ((a == d) && (b == c))
      printf("Yes\n");
    else if ((a == c) && (b == d))
      printf("Yes\n");
    else if ((a == b) && (c == d))
      printf("Yes\n");
    else
      printf("NO\n");
  }
  return 0;
}