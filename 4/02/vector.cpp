#include<bits/stdc++.h>
using namespace std;
 
// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 
// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << v << " : ";
        for (auto x: adj[v]){
        	cout << x << " ";
        	
		} 
		printf("\n");
    }
}
 
// Driver code
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    int V = 2;
    vector<int> adj[V];

    string line;

    while(getline(cin, line)){
    	istringstream is( line );
		int n,s;
		is >> s;

		while( is >> n ) {
		  addEdge(adj, s, n);
		}

    }
  
    
    printGraph(adj, V);
   
    return 0;
}