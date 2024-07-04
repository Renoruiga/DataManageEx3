#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tossing(int, int);

int main() {
  char n[100];
  int i, r, h = 0, t = 0;

  srand((unsigned int)time(NULL));

  printf("Who are you?\n");
  printf("> ");
  scanf("%s", n);
  printf("Hello, %s!\n", &n);
  
  printf("Tossing a coin...\n");
  
  for (i = 0; i < 3; i++) {
    printf("Round %d: ", i + 1);
    
    r = tossing(0, 1);

    if(r == 0) {
      printf("Heads\n");
      h++;
    } else {
      printf("Tails\n");
      t++;
    }
  }

  printf("Heads: %d, Tails: %d\n", h, t);

  if(h > t) {
    printf("%s won!\n", &n);
  } else {
    printf("%s lost.\n", &n);
  }
  return 0;
}

int tossing(int H, int T) {
  return H + (int)(rand() * (T - H + 1.0) / (1.0 + RAND_MAX));
}
