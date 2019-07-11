#include<stdio.h>
void binary_search(int,int,int);
int main(void)
{
int n;
scanf("%d",&n);
int arr[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int ele;
scanf("%d",&ele);
binary_search(arr,ele,n);
return 0;
}
void binary_search(int arr,int ele,int n)
{
int begin=0,end=n-1;
int mid=(begin+end)/2;
while((begin<=end) && (arr[mid]!=ele))
{
if(ele<arr[mid])
{
end=mid-1;
}
else
{
begin=mid+1;
}
mid=(begin+end)/2;
}
if(arr[mid]==ele)
{
printf("Element is found at index %d",mid);
}
else
{
printf("\nElement not found");
}
}
