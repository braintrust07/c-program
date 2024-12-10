#include <stdio.h>

int menu();
int deposit();
int withdraw();
int changepin();
int checkbalance();

float balance = 0.0;
int pin = 1234;

int main() { 
int enteredPin, choice;


    int authenticated = 0; 
    
    printf("Welcome to the ATM System\n"); 
    printf("Please enter your PIN: "); 
    scanf("%d", &enteredPin); 
  
    if (enteredPin == pin) { 
        authenticated = 1; 
    } else { 
        printf("Invalid PIN. Exiting...\n"); 
        return 0; 
    } 
  
    while (authenticated == 1) { 
        menu(); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
  
        switch (choice) { 
            case 1: 
                deposit(); 
                break; 
            case 2: 
                withdraw(); 
                break; 
            case 3: 
                changepin(); 
                break; 
            case 4: 
                checkbalance(); 
                break; 
            case 5: 
                printf("Thank you for using the ATM System. Goodbye!\n"); 
                authenticated = 0; 
                break; 
            default: 
                printf("Invalid choice. Please try again.\n"); 
        } 
    } 
    return 0; 
}


int menu(){
    
    printf("\nATM Menu\n");
    printf("1.Deposit Money\n"); 
    printf("2.Withdraw Money\n"); 
    printf("3.Change PIN\n"); 
    printf("4.Check Balance\n"); 
    printf("5.Exit\n"); 
}


int deposit(){
    
    float amount;
    printf("\nEnter the amount you want to deposit: ");
    scanf("%f",&amount);
    if(amount>0){
    balance += amount;
    printf("\nDeposit successful\nCurrent Balance is %.2f",balance);
    }
    else{
        printf("\nDeposit declined.");
    }
}


int withdraw(){
   
    float amount;
    printf("\nEnter the amount you want to withdraw: ");
    scanf("%f",&amount);
    if(amount<balance){
        balance -= amount;
        printf("\nWithdraw successful\nCurrent Balance is %.2f",balance);
    }
    else if(amount>balance){
        printf("\nInsufficient amount.Withdraw Declined.");
    }
    else{
        printf("\nInvalid amount.Withdraw Declined.");
    }
}


int changepin(){
   int pin;
    int newpin,confirmpin;
    printf("\nEnter New pin:");
    scanf("%d",&newpin);
    pin = newpin;
    printf("Enter the pin again to Confirm:");
    scanf("%d",&confirmpin);
    
    if(confirmpin == pin){
        printf("Pin changed successfully");
    }
    else{
        printf("Wrong pin.\nFailed to change pin.Try again");
        return changepin();
    }
}


int checkbalance(){
    float balance;
    printf("\nYour Account Balance is: %.2f",balance);
}
