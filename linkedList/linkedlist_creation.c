#include <stdio.h>
#include <stdlib.h>

int main(){

    struct node{
        int data;
        struct node *next;
    };
    
    struct node *head, *new_node, *temp; /* ->  head: This pointer is typically used to point to the first node in a linked
                                                new_node: This pointer can be used to create and hold the address of a new node.
                                                temp: This pointer is often used as a temporary pointer for various operations while traversing or manipulating a linked list.
                                                */
                                                
                                                
                                                /*
                                                -> the use of struct node is part of the declaration syntax in C. 
                                                When we declare a pointer to a structure, we need to specify the type of the structure that the pointer will point to. 
                                                This is done using the struct keyword followed by the structure tag (node in this case). 
                                                The * indicates that these are pointers
                                                */

    int choice;

    while(choice){
        head = 0;
        new_node = (struct node *)malloc(sizeof(struct node)); // ->This allocates memory for a new node and assigns the address of that memory to the new_node pointer.
        
        printf("Enter data");
        scanf("%d", &new_node->data);

        if(head == 0){
            head = temp = new_node;
        }
        else{
            head->next = new_node;
        }
        printf("Do you want to continue, If yes Type -> 0 : Else Type -> 1");
        scanf("%d", &choice);
    }
    temp = head;
    while( temp != 0){
        printf("%d", temp->data);
        temp = temp->next;
    }

}