#include<stdio.h>
#define MAX 10
int adjMatrix[MAX][MAX];
void addEdge(int u,int v){
    adjMatrix[u][v]=1;
    adjMatrix[v][u]=1;
}
void printfGraph(int vertices){
    printf("Adjacent Matrix:\n");
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            printf("%d",adjMatrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int vertices,edges;
    int u,v;
    printf("Enter number of vertices: ");
    scanf("%d",&vertices);
    printf("Enter number of edges: ");
    scanf("%d",&edges);
    for(int i=0;i<edges;i++){
        printf("Enter edges(u,v):");
        scanf("%d %d",&u,&v);
        addEdge(u,v);
    }
    printfGraph(vertices);
}
