// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int balance=5000,withdraw,deposit,choice=1;
    while(choice!=4){
    printf("\n1.Withdraw amount:\n2.Deposit Amount\n3.View Balance\n4.Exit\nEnter The Choice:");
    scanf("%d",&choice);
    printf("\n");
    switch(choice){
        case 1:
            printf("Enter the amount to Withdraw:");
            scanf("%d",&withdraw);
            if(withdraw>balance){
                printf("Insufficient Balance!\n");
            }
            else{
            balance=balance-withdraw;
            printf("Amount Withdrawn Successfully!\n");
            }
            break;
        case 2:
            printf("Enter the amount to deposit:");
            scanf("%d",&deposit);
            balance=balance+deposit;
        
            printf("Amount Deposited Successfully!\n");
            break;
        case 3:
            printf("Available Balance:%d\n",balance);
            break;
        case 4:
            printf("Exited!");
            break;
        default:
            printf("Invalid Choice!");
            break;
            
        
   }
    }
   return 0;
   
}
