#include <stdio.h>
#include <stdlib.h>
struct account account_validation(int acc_no);
int pin_validation(int pin);
struct account {
  int acc_no;
  int password;
  int id_no;
  char first_name[15];
  char second_name[15];
  char DOB[12];
  signed int transaction;
  char DOT[12];
  char Description[100];
  int balance;
  char state[15];
};

int main(){
  int account_no;
  int pin;
  printf("**********Hello Welcome to Bank Service Today*********\n\t");
  printf("Enter your Card/Acc Number:\n\t");
  scanf("%d", &account_no);
  struct account current = account_validation(account_no);
  printf("%d,%s,%d,%s,%s,%s,%d,%s,%s,%d,%s\n",current.acc_no,
                                                        current.password,
                                                        current.id_no,
                                                        current.first_name,
                                                        current.second_name,
                                                        current.DOB,
                                                        current.transaction,
                                                        current.DOT,
                                                        current.Description,
                                                        current.balance,
                                                        current.state);
  printf("\n\tEnter your Pin:\n\t");
  scanf("%d", &pin);
  pin_validation(pin);


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

struct account account_validation(int account_no){
  struct account validate;
  FILE *fp;
  fp=fopen("/root/C/bankaccount.csv","r");
  if (fp==NULL){
    printf("The file bankaccount.csv could not be opened for writing");
    exit(1);
  }

  while (fscanf(fp, "%d,%s,%d,%s,%s,%s,%d,%s,%s,%d,%s\n",validate.acc_no,
                                                         validate.password,
                                                         validate.id_no,
                                                         validate.first_name,
                                                         validate.second_name,
                                                         validate.DOB,
                                                         validate.transaction, 
                                                         validate.DOT,
                                                         validate.Description,
                                                         validate.balance,
                                                         validate.state)==11)
  {
    if (validate.acc_no == account_no)
      return validate;
    fclose(fp);
  }

}
int pin_validation(int pin){
  
}
