//kruskal algorithm(DSU) to find MST
#include <stdio.h>
#define MAX 50

struct Edge {
    int u, v, weight;
};

struct Edge edge[MAX];
int parent[MAX];

int find(int x) {
    while(parent[x] != x) x = parent[x];
    return x;
}

void unionSet(int x, int y) {
    parent[find(x)] = find(y);
}

void sortEdges(int e) {
    int i, j;
    struct Edge tmp;
    for (i = 0; i < e - 1; i++) {
        for (j = 0; j < e - i - 1; j++) {
            if (edge[j].weight > edge[j + 1].weight) {
                tmp = edge[j];
                edge[j] = edge[j + 1];
                edge[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int V, E, i;
    printf("Edges in MST\n");
    int totalCost = 0;
    int edgeSelected = 0;
    printf("Enter no of vertexes: \n");
    scanf("%d", &V);
    printf("Enter no of edges: \n");
    scanf("%d", &E);
    printf("Enter edges(srt dst weight)\n");
    for (i = 0; i < E; i++) {
        scanf("%d%d%d", &edge[i].u, &edge[i].v, &edge[i].weight);
    }
    for (i = 0; i < V; i++) {
        parent[i] = i;
    }
    sortEdges(E);
    printf("Edges in MST\n");
    for (i = 0; i < E && edgeSelected < V -1; i++) {
        int root1 = find(edge[i].u);
        int root2 = find(edge[i].v);
        if (root1 != root2) {
            printf("%d - %d==%d\n", edge[i].u, edge[i].v, edge[i].weight);
            totalCost += edge[i].weight;
            unionSet(root1, root2);
            edgeSelected++;
        }
    }
    printf("Minimum cost=%d\n", totalCost);
    return 0;
}