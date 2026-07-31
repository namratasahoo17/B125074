#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++) scanf("%d",&arr[i]);
    // Starting the program work
    int *ptr = arr;
    for (i=0; i<n; i++){
        sum+= *(ptr+i);
    }
    printf("sum = %d", sum);
    return 0;
}