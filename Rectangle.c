#include <stdio.h>
int main(){
  int columns, rows, counter1, counter2;
  printf("Input the Number of Columns: ");
  scanf("%d", & columns);
  printf("Input the Number of Rows: ");
  scanf("%d", & rows);
  for(counter1=1;counter1<=rows;counter1++){
    for(counter2=1;counter2<=columns;counter2++)printf("* ");
    printf("\n");
  }
  return 0;
}
