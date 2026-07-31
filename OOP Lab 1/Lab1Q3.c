#include <stdio.h>
int main(){
    int n,i,x;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++) scanf("%d",&arr[i]);
    // Starting the program work
    printf("Enter element to be searched : ");
    scanf("%d", &x);
    for (i=0; i<n; i++){
        if (x == arr[i]) {
            printf("Found at %d", i);
        }
        return 0;
    }
    printf("Not found");
    return 1;
}