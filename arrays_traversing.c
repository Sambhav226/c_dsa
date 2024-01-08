#include <stdio.h>

int main(){

    // Traversing elements to the array and printing it
    int a[50], i, size;

    printf("Enter Size of the array:");
    scanf("%d",&size);

    printf("Enter elements of the array:");
    for(i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++){
        printf("%d\n",a[i]);
    }

}
