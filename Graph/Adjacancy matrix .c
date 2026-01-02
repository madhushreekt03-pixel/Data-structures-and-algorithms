#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct node{
    int vertex;
    struct node*next;
};
struct node*adjList[MAX];
struct node*createNode(int v){
    struct node*newNode=malloc(sizeof(struct node));
    newNode->vertex=v;
    newNode->next=NULL;
    return newNode;
}
void addEdge(int u,int v){
    struct node*newNode=createNode(v);
    newNode->next=adjList[u];
    adjList[u]=newNode;
    newNode=createNode(u);
    newNode->next=adjList[v];
    adjList[v]=newNode;
}
void printfGraph(int vertices){
    for(int i=0;i<vertices;i++){
        struct node*temp=adjList[i];
        printf("%d: ",i);
        while(temp!=NULL){
            printf("%d ",temp->vertex);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
int main(){
    int vertices,edges,u,v;
    printf("Enter number of vertices:");
    scanf("%d",&vertices);
    for(int i=0;i<vertices;i++){
        adjList[i]=NULL;
    }
    printf("Enter number of edges:");
    scanf("%d",&edges);
    for(int i=0;i<edges;i++){
        printf("Enter edges(u v):");
        scanf("%d %d",&u,&v);
        addEdge(u,v);
    }
    printf("\nAdjacancy List:\n");
    printfGraph(vertices);
}
