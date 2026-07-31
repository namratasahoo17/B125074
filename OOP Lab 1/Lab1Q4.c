#include <stdio.h>
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    printf("Enter two numbers, a and b respectively. ");
    scanf("%d%d", &a, &b);
    Swap(&a,&b);
    printf("After Swapping \n Now a is %d and b is %d", a, b);
    return 0;
}