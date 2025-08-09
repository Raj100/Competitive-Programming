#include <stdio.h> 
#include <stdlib.h>

struct node {
    char data;
    struct node* left;
    struct node* right;
};
struct node * newnode(char d){
    struct
}
void postorder(struct node* current){
    if(current!=NULL){
        postorder(current->left);
        postorder(current->right);
        printf("%c",current->data);

    }
}

int main(){
    struct node* root=(struct node *)malloc(sizeof(struct node));
    root->data='R';
    root->left=(struct node *)malloc(sizeof(struct node));
    root->left->data='l';
    root->left->left=NULL;
    root->left->right=NULL;

    root->right=(struct node *)malloc(sizeof(struct node));
    root->right->data='r';
    root->right->left=NULL;
    root->right->right=NULL;

    postorder(root);
}
