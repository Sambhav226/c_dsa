#include <stdio.h>

int main(){
    int a[50], size, i, num, pos;

    printf("Enter Size of the array:");
    scanf("%d",&size);

    printf("Enter elements of the array:");
    for(i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Position from where to delete the data:");
    scanf("%d", &pos);

    if(pos <= 0 || pos > size){
        printf("invalid position");
    }
    else if(pos == 0 ){
        for(i = 0; i < size-1; i++){
            a[i] = a[i+1];
        }
        size--;
    }
    else{
        for(i = pos-1; i < size-1; i++){
            a[i] = a[i+1];
        }
        size--;

        for(i = 0; i < size; i++){
        printf("%d\n",a[i]);
    }
    }

}