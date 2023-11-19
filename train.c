#include <stdio.h>
void login(char username[12],int password);
int sum(int num1, int num2);

int main()

{ 

char user[12];
int password;
printf("\nEnter your name: ");
scanf("%s",user);
printf("\nEnter your password: ");
scanf("%d",&password);
int a;
int b;
printf("\nEnter value of num1: ");
scanf("%d",&a);
printf("\nEnter value of num2: ");
scanf("%d",&b);
login(user,password);
sum(a,b);

  
  return 0;
  
    
    
}

void login(char username[12],int password){
    printf("\nYour username is :%s",username);
    printf("\nYour password is: %d",password);
   
};

int sum(int num1, int num2){
    int result = num1 + num2;
    printf("\n%d",result);
    return result;
};
