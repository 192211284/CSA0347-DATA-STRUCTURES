#include<stdio.h>
#include<conio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main()
{
 printf("enter the number of elements in stack");
 scanf("%d",&n);
 while(choice!=4)
 {
 printf("chose one from the below options..");
 printf("1.push\n2.pop\n3.show\n4.exit");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 {
 push();
 break;
 }
 case 2:
 {
 pop();
 break;
 }
 case 3:
 {
 show();
 break;
 }
 case 4:
 {
 printf("exit");
 break;
 }
 default:
 {
 printf("please enter valid choice");
 }
  }
  }
  }
 void push()
 {
 int val;
if(top==n)
printf("\n overflow");
else
{
printf("enter the value?");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
printf("underflow");
else
top=top-1;
}
void show()
{
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
if(top==-1)
{
printf("stack is empty");
}
}


