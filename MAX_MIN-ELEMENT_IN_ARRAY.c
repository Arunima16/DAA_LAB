#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the no of elements you want to enter : ");
scanf("%d",&n);

int a[n];
printf("Enter the elements of the array : ");
for(int i = 0 ; i<n ; i++)
{
  scanf("%d",&a[i]);
}
int max = a[0], min = a[0];

for(int i = 0 ; i<n ;i++)
{
    if(a[i]>max)
    max = a[i];
}
for(int i = 0 ; i<n ;i++)
{
    if(a[i]<min)
    min = a[i];
}
printf(" MAXIMUM element is : %d\n",max);
printf(" MINIMUM element is : %d",min);
}

