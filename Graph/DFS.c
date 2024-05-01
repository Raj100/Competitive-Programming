#include<stdio.h>
#include<stdlib.h>
int visited[5]={0};


struct node{
    int data;
    struct node* next;
};

void addedge(struct node* adjList[],int u,int v){
    struct node* newnode= (struct node *)malloc(sizeof(struct node));
    newnode->data=v;
    newnode->next=adjList[u];
    adjList[u]=newnode;
}

void DFS(struct node* adjList[],int v){
    visited[v]=1;
    struct node* temp=adjList[v];
    while(temp!=NULL){
        int neighbour=temp->data;
        if(visited[neighbour]==0){
            printf("%d\n",neighbour);
            DFS(adjList,neighbour);
        }
        temp=temp->next;
    }
}

int main(){
    struct node* adjList[5];
    for(int i=0;i<5;i++)
    adjList[i]=NULL;
    
    addedge(adjList,0,1);
    addedge(adjList,0,2);
    addedge(adjList,0,3);
    addedge(adjList,3,4);
    addedge(adjList,3,1);

    DFS(adjList,0);

    return 0;
}