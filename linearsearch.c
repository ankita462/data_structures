#include<stdio.h>
int main(void)
{
int arr[5];
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int num,i;
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(arr[i]==num)
{
printf("Element is present at index %d",i);
}
}
}


