#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void addedge(struct node *adjList[],int u,int v)
{
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data = v;
    newnode->next = adjList[u];
    adjList[u] = newnode;
}
void bfs(struct node* adjList[], int v)
{
    int u = v;
    int visited[5];
    for (int i = 0; i < 5; i++)
        visited[i] = 0;

    int queue[5];
    int front = 0, rear = 0;

    visited[u] = 1;
    queue[rear++] = u;

    while (front < rear)
    {
        int currentNode = queue[front++];
        printf("%d ", currentNode);
        struct node *temp = adjList[currentNode];
        while (temp != NULL)
        {
            int neighbor = temp->data;
            if (visited[neighbor] == 0)
            {
                queue[rear++] = neighbor;
                visited[neighbor] = 1;
            }
            temp = temp->next;
        }
    }
}
int main()
{
    struct node* adjList[5];
    for (int i = 0; i < 5; i++)
        adjList[i] = NULL;
    addedge(adjList,0, 1);
    addedge(adjList,0, 2);
    addedge(adjList,0, 3);
    addedge(adjList,3, 4);

    bfs(adjList, 0);
    return 0;
}