#include <stdio.h>

int main(){
    int a[50], size, i, num, pos;

    printf("Enter Size of the array:");
    scanf("%d",&size);

    printf("Enter elements of the array:");
    for(i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter data you want to insert");
    scanf("%d", &num);

    printf("Enter Position");
    scanf("%d", &pos);

    for(i = size-1; i >= pos-1; i--){
        a[i+1] = a[i];
    }
    a[pos-1] = num;
    size++;

    for(i = 0; i < size; i++){
        prinf("%d")
    }
}