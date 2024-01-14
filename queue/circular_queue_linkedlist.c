#include <stdio.h>
#include <stdlib.h>

// node structure
struct node {
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue(int x){
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;

    if(rear == 0){
        front= rear = newnode;
        rear->next = front;
    }

    else{
        rear->next = newnode; // This actually points the last node to new node -> This is the different node from rear node
        rear = newnode;// This step apoints the rear to the last node 
        rear->next = front;
    }
}

void dequeue(){
    struct node *temp;
    temp =  front;
    if(front == 0 && rear == 0){
        printf("Queue is empty");
    }
    else if(front == rear){
        front = rear = 0;
    }
    else{
        printf("Dequeued value is: %d",temp->data);
        front = front->next;
        free(temp);
        rear->next = front;
    }
}

void peek(){
    if(front == 0 && rear == 0){
        printf("Queue is empty: ");
    }
    else{
        printf("%d", front->data);
    }
}

void display(){
    if(front == 0 && rear == 0){
        printf("Queue is empty: ");
    }
    else{
        struct node *temp;
        temp = front;
        while(temp->next!=front){
            printf("%d",temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    // Example usage of the queue operations
    enqueue(1);
    enqueue(2);
    enqueue(3);

    display();

    dequeue();
    
    display();

    peek();

    return 0;
}