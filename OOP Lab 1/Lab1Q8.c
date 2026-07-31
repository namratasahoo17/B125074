#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    printf("Enter no. of elements : ");
    scanf("%d", &n);
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    for (i=0; i<n; i++) scanf("%d",&arr[i]);
    printf("Displaying all the elements : ");
    for (i=0; i<n; i++) printf("%d   ",arr[i]);

    free(arr);
    return 0;

}