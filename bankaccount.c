#include <stdio.h>
#include <stdlib.h>
int main(){
  int acc_no;
  int pin;
  printf("**********Hello Welcome to Bank Service Today*********\n\t");
  printf("Enter your Card/Acc Number:\n\t");
  scanf("%d", &acc_no);
  //account_validation(acc_no);
  printf("\n\tEnter your Pin:\n\t");
  scanf("%d", &pin);
  //pin_validation(pin);


  /**
  FILE *fp;
  fp=fopen("/root/C/bankaccount.csv","w");
  if (fp==NULL){
    printf("The file bankaccount.csv could not be opened for writing");
    exit(1);
  } 
  fprintf(fp, "Card/Acc Number, Password, National ID, First Name, Second Name, Date of Birth, Transaction, Date, Description, Balance, Card/Acc State\n");
  int a = 00000001;
  int b = 1234;
  int c = 30000001;
  char d[15] = "James Owino";
  char e[15] = "Sharon Ogayo";
  char f[12] = "17/11/1996";
  signed int g = +200;
  char h[12] = "14/06/2017";
  char i[100] = "Initial Deposit";
  int j = 200;
  char k[15] = "Unblocked";
  fprintf(fp, "%d, %s, %d, %s, %s, %s, %d, %s, %s, %d, %s\n", a,b,c,d,e,f,g,h,i,j,k);
  **/

  return 0;
}
