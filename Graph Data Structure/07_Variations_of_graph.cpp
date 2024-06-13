/*
1.Directed Graph : when an edge in A--B, then it is not necessary is the edge between B--A also.
condition for Un-directed graph : matrix[i][j]=1;

2.Un-Directed Graph : when an edge in A--B, then it is necessary is the edge between B--A also.
condition for Un-directed graph : matrix[i][j]=1;
                                  matrix[j][i]=1;

3. Weighted Graph : for example A--B have 5 weight.
                    matrix[A][B]=5;
4. Un-weight Graph : for example A--B.
                    matrix[A][B]= INT_MIN, -infinity;
*/