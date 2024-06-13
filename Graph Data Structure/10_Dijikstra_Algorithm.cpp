// Dijikstra Algorithm

/*

Dijikstra(graph, source_vartex)
{
    for each vartex v
    {
      visited[v] = false, dist[v] = oo(infinity)
    } 
    
    dist[s] = 0;
    create min Heap Q
    Q.push(s);

    while (Q is not empty)
    {
        u < --extract_min(Q)
        visited[u] = true;

        for each neighbour v of u
            {
                if (visited[v] == false)
                {
                    if (dist[u] + weight[u, v] < dist[v])
                    {
                        dist[v] = dist[u] + weight[u, v];
                        Q.push(v);
                    }
                }
            }
    }
}

*/