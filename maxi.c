#include <stdio.h>
#include<conio.h>
void main()
{
int array[10],lar=0,i;
for(i=0;i<=10;i++)
{
scanf("%d",array[i]);
}
for(i=1;i<=10;i++)
{
if(lar<array[i])
{
lar=array[i];
}
}
printf("%d",lar);
getch();
}

