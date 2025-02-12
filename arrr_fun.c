#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the value %d:",i);
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<10;i++){
        printf("the values are :%d\n",arr[i]);

    }
    return 0 ;

}