#include <stdio.h>
int main(){
    int n,i;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++) scanf("%d",&arr[i]);
    // Starting the program work
    printf("Reverse array:\n");
    for (i=n-1; i>=0; i--)
        printf("%d  ", arr[i]);
    return 0;
}