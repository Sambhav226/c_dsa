#include <stdio.h>
#include <stdlib.h>

#define N 5
int S1[N], S2[N];
int top1 = -1, top2 = -1;
int count = 0;

void push1(int data){
    if(top1 == N-1){
        printf("Queue is emty");
    }
    else{
        top 1++;
        S1[top1] = data;
    }
}

void push2(int data){
    if(top2 == N-1){
        printf("Queue is emty");
    }
    else{
        top2++;
        S1[top2] = data;
    }
}

int pop1(){
    return S1[top1--];
}

int pop(){
    return s2[top2--];
}

void enqueue(int x){
    push1(x);
    count ++;
}

void dequeue(){
    int i,a,b;
    if(top1==-1 && top2==-1){
        printf("Queue is empty");
    }
    else{
        for(i=0; i<count; i++){
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("Dequeued value is: %d", b);
        count--;

        for(i=0; i<count; i++){
            a = pop2();
            push1(a);
        }
    }
}

void display(){
    int i;
    for(i=0; i<top1; i++){
        printf("%d",S1[i]);
    }
}