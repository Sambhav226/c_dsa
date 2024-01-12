#include <stdio.h>
#include <stdlib.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

// Function to add element to queue -> we can only add from back of the queue
void enqueue(int x){
    if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else if (rear == N-1){
        printf("Overflow");
    }
    else{
        rear ++;
        queue[rear] = x;
    }
}

// Functino to remove value from a queue -> we can only remove from the front of the queue
void dequeue(){
    if (front == rear){
        front = rear = -1;
    }
    else if(front == -1 && rear == -1){
        printf("underflow");
    }
    else{
        printf("Dequeued value is: %d", queue[front]);
        front ++;
    }
}

// Function to display the queue
void display(){
    int i = 0;
    if(front == -1 && rear == 1){
        printf("Empty Queue");
    }
    else{
        while (i != rear + 1){
            printf("%d",queue[i]);
            i++;
        }
    }
}

// Funciton to view in the frnt of the queue
void peek(){
    if(front == -1 && rear == 1){
        printf("Empty Queue");
    }
    else{
        printf("%d", queue[front]);
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