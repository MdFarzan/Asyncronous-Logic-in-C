#include<stdio.h>
#include"conio2.h"
#include"conio.c"




//asyncronization with 18 digit addition
int main(){
char a;
int temp;
int back;
int b;
int count=0;
unsigned int res=0;
int i=1;
clrscr();

printf("Welcome to Decimal to Octal and Hexadecimal asychrounous program\n\n");
printf("Please remember this shortcuts:\n");
printf("b : for backspace/clear character\n");
printf("e : for quite or exit\n");
printf("Press any key to continue: ");
getch();

clrscr();
printf("enter values: ");
//for asynchronization feel

while(1){

//clearing buffer but it's not necessary
fflush(stdin);

//taking input
a=getch();
back=a;

//if it's 'b' character then...
if(back=='b'){
	back=0;
	//performing backspace
	 i--;
	 res=(res/10);
	 //skipping some calculation and jumping program
	 goto result;
	    }

//if it's 'e' character then exit
else if(back=='e'){
clrscr();
printf("Press any key to exit");
exit(0);
}

//making character to decimal
b=a-48;
res=res*10+b;

//Printing results
result:
clrscr();
printf("You Entered decimal value: %d\n",res);
printf("Octal :%o\n",res);
printf("Hexadecimal :%0x\n",res);
i++;

//Adjusting cursor by counting characters in decimal value
temp=res;
count=0;
while(temp!=0){
temp=temp/10;
count++;
}
gotoxy(27+count,1);
}

getch();
return 0;
}
