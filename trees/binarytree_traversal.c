// Preorder, Inorder, Postorder Traversal

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

void Preorder(struct node *root){
    if (root == 0){
        return ;
    }
    else{
        printf("%d", root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Inorder(struct node *root){
    if(root == 0){
        Inorder(root->left);
        printf("%d",root->data);
        Inorder(root->right);
    }
}

void Postorder(struct node *root){
    if(root == 0){
        Postorder(root->left);
        Postorder(root->right);
        printf("%d", root->data);
    }
}

int main(){
    struct node *root;
    printf("Pre-order is: ");
    Preorder(root);
    Inorder(root);
    Postorder(root);
}
