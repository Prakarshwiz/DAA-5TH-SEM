#include <iostream>
#include <queue>
#define MAX 20

using namespace std;

bool isBipartite(int *G[MAX], int V) {
    queue<int> Q;
    int *color = new int[V]();
    int curr = 1;

    color[0] = curr;
    Q.push(0);

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();

        if (G[u][u])
            return false;

        curr *= -1;

        for (int v = 0; v < V; ++v) {
            if (G[u][v] && color[v] == 0) {
                color[v] = curr;
                Q.push(v);
            }
            else if (G[u][v] && color[u] == color[v]) 
                return false;    
        }
    }
    
    return true;
}

int main() {
    int t, v;

    cin >> t;

    while (t--) {
        cin >> v;
        int **G = new int*[v];

        for (int i = 0; i < v; ++i) {
            G[i] = new int[v];
            for (int j = 0; j < v; ++j)
                cin >> G[i][j];
        }
        
        if (isBipartite(G, v))
            cout << "Yes, graph is Bipartite";
        else
            cout << "No, graph is not Bipartite";
        cout << endl;

        delete[] G;
    }
    return 0;
}
