#include <stdio.h>
#include <stdlib.h>

// node structure
struct node {
    int data;
    struct node *next;
};

struct node *temp;

struct node * creating_linkedlist(){

    struct node *head, *new_node, *temp; 
    int choice;
    head = 0;
    while(choice){
        new_node = (struct node *)malloc(sizeof(struct node)); // ->This allocates memory for a new node and assigns the address of that memory to the new_node pointer.
        
        printf("Enter data");
        scanf("%d", &new_node->data);

        if(head == 0){
            head = temp = new_node;
        }
        else{
            temp->next = new_node;
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

// Function to delete from begning
struct node *delete_from_begning(struct node *head){

    if ( head == 0){
        printf("Head is empty");
    }
    else{
    temp = head;
    head = head->next;
    free(temp);
    }
    return head;
}

// Function to delete from end
struct node *delete_from_end(struct node *head){

    if ( head == 0){
        printf("Head is empty");
    }
    else{
        struct node *prevnode;
        temp = head;

        while(temp->next!=0){
            prevnode = temp;
            temp = temp->next;

            if(temp == head){
                head = 0;
            }
            else{
                prevnode->next = 0;
            }
            free(temp);
        }
    }
    return head;

}

// Funciton to delete from any position
struct node *delete_from_position(struct node *head, int pos){
    if ( head == 0){
        printf("Head is empty");
    }
    else{
        struct node * nextnode;

        int i = 0;
        while(i < pos-1){
            temp = temp->next;
            i++;
        }
        
        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);
    }
    return head;
}

int main() {
    // Call the linked list creation function
    struct node *head = creating_linkedlist();

    return 0; 
}