#include<stdio.h>
void main()
{
    int arr[10],max=0;
    int i;
    printf("Enter 10 numbers :\t");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(max<arr[i])
        max=arr[i];
    }
    printf("%d is the largest number in the array.",max);
}