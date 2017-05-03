#include <stdio.h>
int main() {
  char name[15];
  printf("Input your Name: ");
  scanf("%s", &name);
  printf("Hello %s!\n", name);
  return 0;
}
