#include <stdio.h>
#include <stdlib.h>

// Stack of data type integer

#define N 5
int stack[N];
int top = -1;

// Stack operations using arrays
void push(int x){
    if(top == N-1){
        printf("Overflow");
    }

    else{
        top ++;
        stack[top] = x;
    }
}

void pop(){
    if (top == -1){
        printf("Underflow");
    }

    else{
        top --;
    }
}

void peek(){
    if(top == -1){
        printf("Stack empty");
    }

    else{
        printf("%d", stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Stack empty");
    }
    
    else{
        int i = top;
        for(i = 0; i <= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

int main(){

    int ch,x;

    do{
        printf("enter choice: 1-Push, 2-Pop, 3-Peek, 4-Display");
        scanf("%d", &ch);

        switch(ch){
            case1: 
            printf("Enter Data: ");
            scanf("%d", &x);
            push(x);
            break;

            case2: pop();
            break;

            case3: peek();
            break;

            case4: display();
            break;

            default: printf("Invalid Choice");
        }
    }
    while( ch!=0 );
}