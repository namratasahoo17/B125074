#include <stdio.h>
int main(){
    int n,i;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++) scanf("%d",&arr[i]);
    // Starting the program work
    int min=arr[0], max=arr[0], avg=0;
    for (i=0; i<n; i++){
        avg+=arr[i];
        if (min>arr[i]) min = arr[i];
        if (max<arr[i]) max = arr[i];
    }
    printf("min is %d, max is %d and avg is %d", min, max, avg/n);
    return 0;
}