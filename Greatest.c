#include <stdio.h>
int main(){
  int instances, i, c, maximum;
  int numbers[100];
  printf("Input the number of numbers you want to enter to find the greatest: ");
  scanf("%d", &instances);
  printf("Enter %d integers\n", instances);
  for(i=0; i<instances; ++i){
    scanf("%d", &numbers[i]);
  }
  maximum = numbers[0];
  for (c = 1; c < instances; c++) {
    if (numbers[c] > maximum) {
      maximum  = numbers[c];
    }
  }
  printf("The largest number is %d!\n", maximum);
  return 0;
}
