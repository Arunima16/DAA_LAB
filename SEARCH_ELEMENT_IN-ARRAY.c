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
int key;
printf("Enter the key you want to search : ");
scanf("%d",&key);
int flag = 0;
for(int i = 0 ; i<n ;i++)
{
    if(a[i]==key)
    {
        printf("KEY found at position %d",i+1);
        flag = 1;
        break;
    }
}
if(flag ==0)
printf("Key not found!!");


}
