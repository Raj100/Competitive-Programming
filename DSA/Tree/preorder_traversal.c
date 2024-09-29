#include <stdio.h> 
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void preorder(struct node* current){
    if(current!=NULL){
        printf("%d",current->data);
        preorder(current->left);
        preorder(current->right);
    }
}

int main(){
    struct node* root=(struct node *)malloc(sizeof(struct node));
    root->data=1;
    root->left=(struct node *)malloc(sizeof(struct node));
    root->left->data=2;
    root->left->left=NULL;
    root->left->right=NULL;

    root->right=(struct node *)malloc(sizeof(struct node));
    root->right->data=3;
    root->right->left=NULL;
    root->right->right=NULL;

    preorder(root);
}