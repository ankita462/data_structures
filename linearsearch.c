#include<stdio.h>
int main(void)
{
int arr[5];
for(int i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
int num,i;
scanf("%d",&num);
for(i=0;i<5;i++)
{
if(arr[i]==num)
{
printf("Element is present at index %d",i);
}
}
  return 0;
}


