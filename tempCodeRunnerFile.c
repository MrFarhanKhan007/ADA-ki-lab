#include <stdio.h>
int main(){
    //prims algorithm using c
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    int cost[n][n];
    printf("Enter the cost matrix: ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &cost[i][j]);
        }
    }

    int visited[n];
    for (int i = 0; i < n; i++){
        visited[i] = 0;
    }

    int minCost = 0;
    int edgeCount = 0;
    visited[0] = 1;
    while (edgeCount < n - 1){
        int min = 999;
        int u, v;
        for (int i = 0; i < n; i++){
            if (visited[i] == 1){
                for (int j = 0; j < n; j++){
                    if (visited[j] == 0 && cost[i][j] < min){
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }
        visited[v] = 1;
        minCost += min;
        edgeCount++;
        printf("Edge %d: (%d, %d) cost: %d\n", edgeCount, u, v, min);
    }
    printf("Minimum cost: %d\n", minCost);
    return 0;

}

//sample test case of prims algo 
// Enter the number of vertices: 5
// Enter the cost matrix: 0 2 0 6 0
// 2 0 3 8 5