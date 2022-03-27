#include<stdio.h>
#include<math.h>
void main()
{
    int arr[10],min=__INT8_MAX__;
    int i;
    printf("Enter 10 numbers :\t");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(min>arr[i])
        min=arr[i];
    }
    printf("%d is the smallest number in the array.",min);
}