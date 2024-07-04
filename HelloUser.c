#include <stdio.h>

int main() {
  char n[100];
  
  printf("Who are you?\n");
  printf("> ");
  scanf("%s", n);
  printf("Hello, %s!\n", &n);

  return 0;
}
