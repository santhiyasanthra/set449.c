#include <stdio.h>
#include<conio.h>
void main() 
{
char name[90];
int i,a,count=0;
scanf("%s",&name);
for(i=0;name[i]!='\0';i++)
{
if((name[i]>='0')&&(name[i]<='9'))
{
count++;
}
}
getch();
printf("%d",count);
}
