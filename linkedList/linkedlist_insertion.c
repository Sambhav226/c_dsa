#include <stdio.h>
#include <stdlib.h>

// node structure
struct node {
    int data;
    struct node *next;
};

struct node * creating_linkedlist(){

    struct node *head, *new_node, *temp; 
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
            temp = new_node; // Update temp to the new node
        }
        printf("Do you want to continue, If yes Type -> 0 : Else Type -> 1");
        scanf("%d", &choice);
    }
    return head;
}

void view_linkedlist(struct node *head){
    struct node *temp;
    temp = head;
    while( temp != 0){
        printf("%d", temp->data);
        temp = temp->next;
    }
}


// Function to insert a new node at the beginning of the linked list
struct node* insert_at_beginning(struct node *head, int value) {

    struct node *newnode;
    // Allocate memory for a new node
    newnode = (struct node *) malloc(sizeof(struct node));
    
    if (newnode == NULL) {

        // Handle memory allocation failure if needed
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newnode->data = value;
    newnode->next = head;

    // Update the head to point to the new node
    head = newnode;

    return head; // Return the updated head
}

// Function to insert at End of the Linkedlist
struct node* insert_at_end(struct node *head, int value) {

    struct node *newnode, *temp;
    // Allocate memory for a new node
    newnode = (struct node *) malloc(sizeof(struct node));
    
    if (newnode == NULL) {

        // Handle memory allocation failure if needed
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    
    newnode->data = value;
    newnode->next = 0;
    temp = head;

    while(temp->next!=0){
        temp = temp->next;
    }
    temp->next = newnode; 
    
    return head;
}

// Function to insert at given position
struct node* insert_at_position(struct node *head, int pos, int value) {

    struct node *newnode, *temp;
    // Allocate memory for a new node
    newnode = (struct node *) malloc(sizeof(struct node));
    
    if (newnode == NULL) {

        // Handle memory allocation failure if needed
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    temp = head;
    while(i<pos){
        temp = temp->next;
        i++;
    }
    newnode->data = value;
    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}


int main() {
    // Call the linked list creation function
    struct node *head = creating_linkedlist();

    return 0; 
}