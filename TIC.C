#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,n,j=1,p;
char arr[3][3]={'_','_','_',
	       '_','_','_',
	       '_','_','_'};
clrscr();
printf("\n\n\nwelcome to tic-tac-toe game ");
printf("\t\t\t\t|_1_|_2_|_3_|\n\t\t\t\t|_4_|_5_|_6_|\n\t\t\t\t|_7_|_8_|_9_|\n");
while(arr[0][0]=='_'||arr[0][1]=='_'||arr[0][2]=='_'|| arr[1][0]=='_'|| arr[1][1]=='_'|| arr[1][2]=='_'|| arr[2][0]=='_'|| arr[2][1]=='_'|| arr[2][2]=='_')
{
i++;
printf("user%d:",j);
scanf("%d",&n);
if(n==1 && arr[0][0]=='_')
 {
 if(j==1)
 arr[0][0]='x';
 else
 arr[0][0]='0';
 printf("\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
 }
else if(n==2 && arr[0][1]=='_')
 {
 if(j==1)
 arr[0][1]='x';
 else
 arr[0][1]='0';
 printf("\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
 }
else if(n==3 && arr[0][2]=='_')
 {
 if(j==1)
 arr[0][2]='x';
 else
 arr[0][2]='0';
 printf("\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
 }
else if(n==4 && arr[1][0]=='_')
 {
 if(j==1)
 arr[1][0]='x';
 else
 arr[1][0]='0';
 printf("\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
 }
else if(n==5 && arr[1][1]=='_')
 {
 if(j==1)
 arr[1][1]='x';
 else
 arr[1][1]='0';
 printf("\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
 }
else if(n==6 && arr[1][2]=='_')
 {
 if(j==1)
 arr[1][2]='x';
 else
 arr[1][2]='0';
 printf("\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
 }
else if(n==7 && arr[2][0]=='_')
 {
 if(j==1)
 arr[2][0]='x';
 else
 arr[2][0]='0';
 printf("\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
 }
else if(n==8 && arr[2][1]=='_')
 {
 if(j==1)
 arr[2][1]='x';
 else
 arr[2][1]='0';
 printf("\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
 }
else if(n==9 && arr[2][2]=='_')
 {
 if(j==1)
 arr[2][2]='x';
 else
 arr[2][2]='0';
 printf("\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n\t\t\t\t|_%c_|_%c_|_%c_|\n",arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2]);
 }
else
{
printf("enter correct number");
continue;
}
if(j==1)
{
j=2;
}
else
{
j=1;
}
{
if(arr[0][0]=='x'&& arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2]||arr[1][0]=='x'&& arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2]||arr[2][0]=='x'&& arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2]||arr[0][0]=='x'&& arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0]||arr[0][1]=='x'&& arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1]||arr[0][2]=='x'&& arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2]||arr[0][0]=='x'&& arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]||arr[0][2]=='x'&& arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
{
printf("user1 wins");
break;
}
else if(arr[0][0]=='0'&& arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2]||arr[1][0]=='0'&& arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2]||arr[2][0]=='0'&& arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2]||arr[0][0]=='0'&& arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0]||arr[0][1]=='0'&& arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1]||arr[0][2]=='0'&& arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2]||arr[0][0]=='0'&& arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]||arr[0][2]=='0'&& arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
{
printf("user 2 wins");
break;
}
}
{
if(i==8)
{
printf("draw");
printf("1.play again\n2.exit");
scanf("%d",&p);
if(p==1)
{
main();
}
else
{
printf("thank you!");
}
}
}
}
getch();
}
