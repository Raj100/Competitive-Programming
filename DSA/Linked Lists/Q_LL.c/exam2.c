#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
void InOrder(struct node* t){
    if(t!=NULL){
        InOrder(t->left);
        printf("%d\n",t->data);
        InOrder(t->right);
    }
}
int main() {
    struct node* root=(struct node*)malloc(sizeof(struct node));
    root->data=1;
    root->left=(struct node*)malloc(sizeof(struct node));
    root->right=(struct node*)malloc(sizeof(struct node));
    root->left->data=2;
    root->left->left=NULL;
    root->left->right=NULL;
    root->right->data=3;
    root->right->left=NULL;
    root->right->right=NULL;
    InOrder(root);

    return 0;
}