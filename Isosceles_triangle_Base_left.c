#include <stdio.h>
int main(){
  int columns, counter1, counter2;
  printf("Input the Number of Columns: ");
  scanf("%d", & columns);
  for(counter1=1;counter1<=columns;counter1++){
    for(counter2=1;counter2<=counter1;counter2++)printf("*");
    printf("\n");
  }
  for(counter1=columns-1;counter1>=1;counter1--){
    for(counter2=1;counter2<=counter1;counter2++)printf("*");
    printf("\n");
  }
  return 0;
}
