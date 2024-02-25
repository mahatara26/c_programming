

#include <stdio.h>

int main()
{
int choice;

printf("please see the MENU AND CHOOSE for your problem solution\n");
printf("\n");
printf("choose 1:for sum of two number\n");
printf("choose 2:for calculation of simple interest\n");
printf("choose 3:for find positive or negative number\n");
printf("choose 4:for odd or even \n");
printf("choose 5:for largest among three\n");
printf("choose 6:for sum of n natural number\n");
printf("choose 7:for factorial of given number\n");
printf("choose 8:for fibonacci series\n");
printf("choose 9:for reverse of given digit\n");
printf("choose 10:for electricity bill\n");
printf("choose 11:for sum of given digit\n");
printf("choose 12:for prime factor of given number\n");
printf("choose 13:for count of given digit\n");
printf("choose 14:for N is less then N1,N IS greater than n2 and divisible by 7\n");
printf("choose 15:for armstrong of given number\n");

printf("\n");


printf("please enter your choice between 1-15\n");
scanf("%d",&choice);
//use of switch case
switch(choice){
    
    
case 1:
{
    
//sum of two number
int first_num,second_num,sum;
printf("enter the first number\n");
scanf("%d",&first_num);
printf("enter the second number\n");
scanf("%d",&second_num);
sum=first_num+second_num;
printf("The sum of first and second number is :%d",sum);
break;
}
  case 2:{
      
//calculate the simple intrest
//principle=p,time=t,rate=r,simple_intrest=si
float p,t,r;
float si;
printf("enter the principle\n");
scanf("%f",&p);

printf("enter the time\n");
scanf("%f",&t);

printf("enter the rate\n");
scanf("%f",&r);
si=(p*t*r)/100;
printf("The simple_intrest is :%f",si);
break;

  }  
  case 3:{
      
//check the positive or negative number
int num;
printf("enter the  number \n");
scanf("%d",&num);

if(num==0){
    printf("The given number zero is :%d",num);

}
else if(num>0){
        printf("The given number positive is :%d",num);

}
else{
        printf("The given number negative is :%d",num);

}
   break;
  }
    
   case 4:{
       
       

//check the odd or even
int num;

printf("enter the number\n");
scanf("%d",&num);

 if(num%2==0)
 {
        printf("The given number is even  :%d",num);

}
else{
        printf("The given number is odd :%d",num);

}
   break;
   } 
    
 case 5:{
     

//largest among three

int n1,n2,n3;

printf("enter the first number\n");
scanf("%d",&n1);

printf("enter the second number\n");
scanf("%d",&n2);

printf("enter the third number\n");
scanf("%d",&n3);


if(n1>n2&&n2>n3){
            printf("first number is largest :%d",n1);
}
else if(n2>n1&&n2>n3){
            printf("second number is largest:%d",n2);

}
else{
        printf("third number is largest :%d",n3);
}
   break;
 }   
    
    
    
 case 6:{
     
//sum of n natural number
int i,n,sum=0;

printf("enter any number to which you want to add natural number\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    sum=sum+i;
}
        printf("the sum of natural number is:%d",sum);

   break;
 }   
    
    
case 7:
{
    

//factorial of given number
//fact=factorial of given number
int n,i,fact=1;
printf("enter any number you want of factorial\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fact=fact*i;
}
        printf("the factorial of given number is:%d",fact);

   break;
}
    
    
case 8:{
    
//calculate fibonacci series 1123581321....
int a=1,b=1,i,c,n;
printf("enter any number  upto which you want series::  ");
scanf("%d",&n);

        printf("%d\n",a);
        printf("%d\n",b);




for(i=2;i<=n;i++){
            c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
            c=a;

}
   break;
}    
case 9:{
    
//reverse of given digit

//digit=d
//rememder=rememder
//reverse=rev
int d,rem,rev;
printf("enter any digit of you want reverse::  ");
scanf("%d",&d);

//use of while loop
while(d!=0)

{
rem=d%10;
rev=rem+rev*10;
d=d/10;

}
        printf("the reverse of digit number is:%d",rev);

   break;
}
    
    case 10:{
        //electricity bill

int unit,total_bill;
printf("enter your electricity unit: ");
scanf("%d",&unit);

if(unit<=20){
            printf("your total bill is rs80 only");
            

}
else if(unit>20&&unit<=120)
{
    total_bill=80+8*(unit-20);
                printf("your total bill is %d",total_bill);

}
else{
    total_bill=80+8*100+10*(unit-120);
                    printf("your total bill is %d",total_bill);

}


   break;
    }
    
case 11:{
    
    
//sum of given digit

//digit=d
//rememder=rem

int d,rem,sum=0;
printf("enter any digit of you want sum::  ");
scanf("%d",&d);

//use of while loop
while(d!=0)

{
rem=d%10;
sum=sum+rem;
d=d/10;

}
        printf("the sum of digit number is:%d",sum);

   break;
}
 case 12:{
     
//prime factor of given number

    
int n,i;
printf("enter any no of you want prime factor ::");
scanf("%d",&n);
        printf("The prime factor of %d are:\n",n);

 if(n%2==0){
        printf("2\n");
        
    }
    else{
        
    }
for(i=3;i<n;i=i+2){
   if(n%i==0){
    printf("%d\n",i);

   }
    else{
        
    }
    
}
   



 break;


 }
case 13:{
//count of given digit

//digit=d
//rememder=rem

int d,rem,count=0;
printf("enter any digit of you want count::  ");
scanf("%d",&d);

//use of while loop
while(d!=0)

{
rem=d%10;
count=count+1;
d=d/10;

}
        printf("the number  of count in a given digit is:%d",count);
break;

}

case 14:{
int n;
int n1,n2;
int i;
printf("enter any number of your choice::\n");
scanf("%d",&n);
printf("please enter the value of N1 as your choice::");

scanf("%d",&n1);

printf("please enter the value of N2 as your choice::");

scanf("%d",&n2);

for( i=0;i<1;i++){
 if(n>n2){
    printf("N IS greaterTHEN N2");
    
}   
    
}
for( i=0;i<1;i++){
    if(n%7==0){
    printf("N IS DIVISIBLE BY 7");
    
}
else{
        printf("N IS not DIVISIBLE BY 7\n");

}
    
}
printf("\n");
if(n<n1){
    printf("N IS LESS THEN N1");
    
}

break;
}
case 15:{
//find the armstrong of given number
//armstrong=arm
//number=n
//rememder=rem

int n,rem,arm=0;
printf("enter any number of you want armstrong::  ");
scanf("%d",&n);

//use of while loop
while(n!=0)

{
rem=n%10;
arm=arm+rem*rem*rem;
n=n/10;

}
        printf("the armsrong of given number is:%d",arm);
break;
}

 default:{
     printf("out of range");
 }
}

    return 0;
}
