#include <stdio.h>
int main(){
  int first_number, second_number, i, j, lcm, gcd;
  printf("Input the first number: ");
  scanf("%d", &first_number);
  printf("Input the second number: ");
  scanf("%d", &second_number);
  printf("You entered %d as your first number and %d as your second number!\n", first_number, second_number);
  for(i=1; i <= first_number && i <= second_number; ++i) {
    // Checks if i is factor of both integers
    if(first_number % i == 0 && second_number % i == 0)
    gcd = i;
  }
  for(j=first_number*second_number; j >= first_number && j >= second_number ; --j) {
     // Checks if j is multiplier of both integers
     if(j % first_number == 0 && j % second_number == 0)
     lcm = j;
  }
  printf("G.C.D of %d and %d is %d!\n", first_number, second_number, gcd);
  printf("L.C.M of %d and %d is %d!\n", first_number, second_number, lcm);
  return 0;
}
