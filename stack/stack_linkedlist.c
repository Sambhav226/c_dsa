#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *top =0;

void push(int x){
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));

    newnode->data = x;
    newnode->link = top;
    top = newnode;
}

void display(){
    struct node *temp;
    temp = top;

    if(top == 0){
        printf("Enpty Stack");
    }

    else{
        while (temp != 0){
        printf("%d", temp->data);
        temp = temp->link;
        }
        
    }
}

void peek(){
    if(top == 0){
        printf("Stack is empty");
    }
    else{
        printf("Top element in the Stack is:- %d", top->data);
    }
}

void pop(){
    if(top == 0){
        printf("Stack is empty");
    }
    else{
        struct node *temp;
        temp = top;

        printf("%d", top->data);
        top = top->link;
        free(temp);
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