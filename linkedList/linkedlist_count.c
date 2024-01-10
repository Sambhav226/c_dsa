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
void linkedlist_count(struct node *head){
    if(head == 0){
        printf("Empty head pointer");
    }

    else{
        struct node *temp;
        int count = 0;
        temp = head;
        while (temp!=0){
            temp = temp->next;
            count ++;
        }
        printf("Length is %d", count);
    }
}

int main() {
    // Call the linked list creation function
    struct node *head = creating_linkedlist();

    return 0; 
}