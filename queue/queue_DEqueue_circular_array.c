#include <stdio.h>
#include <stdlib.h>

#define N 5
int dequeue[N];
int f = -1, r = -1;

void enqueueFront(int x) {
    if ((r + 1) % N == f) {
        printf("DEqueue is full\n");
    } else if (f == -1 && r == -1) {
        f = r = 0;
        dequeue[f] = x;
    } else if (f == 0) {
        f = N - 1;
        dequeue[f] = x;
    } else {
        f--;
        dequeue[f] = x;
    }
}

void enqueueRear(int x) { // Added missing parameter 'int x'
    if ((r + 1) % N == f) {
        printf("DEqueue is full\n");
    } else if (f == -1 && r == -1) {
        f = r = 0;
        dequeue[r] = x;
    } else if (r == N - 1) {
        r = 0;
        dequeue[r] = x;
    } else {
        r++;
        dequeue[r] = x;
    }
}

void display() {
    int i = f;
    if (f == -1 && r == -1) {
        printf("DEqueue is empty\n");
    } else {
        while (i != r) {
            printf("%d ", dequeue[i]); // Added space after each element for better readability
            i = (i + 1) % N;
        }
        printf("%d\n", dequeue[r]); // Added newline for better formatting
    }
}

void getfront() {
    if (f == -1 && r == -1) {
        printf("DEqueue is empty\n");
    } else {
        printf("%d\n", dequeue[f]);
    }
}

void getrear() {
    if (f == -1 && r == -1) {
        printf("DEqueue is empty\n");
    } else {
        printf("%d\n", dequeue[r]);
    }
}

void dequeueRear() {
    if (f == -1 && r == -1) {
        printf("DEqueue is empty\n");
    } else if (f == r) {
        f = r = -1;
    } else if (r == 0) {
        printf("Dequeued value is: %d\n", dequeue[r]);
        r = N - 1; // Corrected index to N-1
    } else {
        printf("Dequeued value is: %d\n", dequeue[r]);
        r--;
    }
}

void dequeueFront() {
    if (f == -1 && r == -1) {
        printf("DEqueue is empty\n");
    } else if (f == r) {
        f = r = -1;
    } else if (f == N - 1) {
        printf("Dequeued value is: %d\n", dequeue[f]);
        f = 0;
    } else {
        printf("Dequeued value is: %d\n", dequeue[f]);
        f++;
    }
}

int main() {
    enqueueFront(1);
    enqueueFront(4);
    enqueueRear(-1);
    enqueueRear(0);
    enqueueFront(5);
    enqueueFront(7);

    display();

    dequeueFront();
    dequeueRear();
    dequeueFront();

    display(); // Added display after dequeue operations

    return 0;
}
