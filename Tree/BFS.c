#include <stdio.h>
#include <stdlib.h>

// struct leaf
// {
//     int data;
//     struct leaf *next;
//     struct leaf *next1;
// };


// struct leaf *root = NULL;
// Using adjency matrix
struct leaf{
    int value;
    int matrix1;
    int matrix2;
    int matrix3;
    int matrix4;

}
int BFS{
    int u=v;
    while(1){

    }
}

int main()
{
    int a[4];
    a[0];
    int tree[4][4];
    tree[0][0]=1;
    tree[0][1]=1;
    tree[0][2]=1;
    tree[0][3]=0;

    tree[1][0]=1;
    tree[1][1]=1;
    tree[1][2]=0;
    tree[1][3]=1;

    tree[2][0]=1;
    tree[2][1]=0;
    tree[2][2]=1;
    tree[2][3]=1;

    tree[3][0]=0;
    tree[3][1]=1;
    tree[3][2]=1;
    tree[3][3]=1;

    int key;
    scanf("%d",&key);
    int ans=BFS(key);



    return 0;
}