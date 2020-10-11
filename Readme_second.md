### Part II
### Quicksort
![chi](https://github.com/abdulmukit98/code/blob/master/chi.png)

       
                Quicksort - use divide and conquer method

                let arr[p...........r]

                Divide: partition arr into two part
                    arr[p........q-1  q  q+1..........r]
                            <=        .         >

                    where   q is the pivot
                            arr[p.....q-1]  is less or equal to q
                            arr[q+1......r]  is greater than q

                Conquer: sort the two sub-array arr[p.....q-1]   and   arr[q+1......r]
                         by recursive call to quicksort


            |---Quicksort(A, p, r)
            |   if(p<r)
            |       q = Partition(A, p, r)
            |-------Quicksort(A, p, q-1)        // recursive
            |-------Quicksort(A, q+1, r)

            the main tricks is partition.
            because these sub-array again goes to partition


                Partition(A, p, r)
                // make array last element A[r] as pivot
                // re-arrange all item <= pivot to the left part (left subarray)
                // move A[r] to its mid position of two parts

                x = A[r]              i
                i = p-1                 p................r
                for j = p to r-1        0---------------|r
                    if(A[j] <= x)
                    i = i+1
                    swap A[i], A[j]

                swap A[i+1] A[r]        // i+1 is the pivot index
                return i+1


                Visualization:   A = {13, 19, 9, 5, 12, 8, 7, 4, 21, 2, 6}

                        _________________________________________________
                        | 13 | 19 | 9 | 5 | 12 | 8 | 7 | 4 | 21 | 2 | 6 |
                        0---------------------------------------------r--
                  i        p                                      r-1

                pivot x = A[r] = 6
                      i = p-1 = -1
                      p = 0
                      r = 10
                      r-1 = 9
                                                                                                                                        
                for j = p to r-1                                                            is(  A[j] <= x )

                     i  __j___________________________________________*__
                        | 13 | 19 | 9 | 5 | 12 | 8 | 7 | 4 | 21 | 2 | 6 |
                        0------------------------------------------------


                     i  ________j_____________________________________*__
                        | 13 | 19 | 9 | 5 | 12 | 8 | 7 | 4 | 21 | 2 | 6 |
                        -------------------------------------------------


                        ____________j_________________________________*__
                        | 13 | 19 | 9 | 5 | 12 | 8 | 7 | 4 | 21 | 2 | 6 |
                        -------------------------------------------------


                           _____________
                          /             v 
                     i++__|_____________j.____________________________*__
                        | 9 | 19 | 13 | 5 | 12 | 8 | 7 | 4 | 21 | 2 | 6 |
                        ----------------|--------------------------------
                          ^_____________/

                        __i__________________j________________________*__
                        | 5 | 19 | 13 | 9 | 12 | 8 | 7 | 4 | 21 | 2 | 6 |
                        -------------------------------------------------

                        __i______________________j____________________*__
                        | 5 | 19 | 13 | 9 | 12 | 8 | 7 | 4 | 21 | 2 | 6 |
                        -------------------------------------------------

                        __i__________________________j________________*__
                        | 5 | 19 | 13 | 9 | 12 | 8 | 7 | 4 | 21 | 2 | 6 |
                        -------------------------------------------------

                                _________________________
                               /                          v
                        ___i++_|__________________________j.___________*__
                        | 5 | 19 | 13 | 9 | 12 | 8 | 7 | 4 | 21 | 2 | 6 |
                        ---------------------------------|---------------
                              ^__________________________/

                        ______i______________________________j________*__
                        | 5 | 4 | 13 | 9 | 12 | 8 | 7 | 19 | 21 | 2 | 6 |
                        -------------------------------------------------

                                    _____________________________
                                   /                             v
                        _______i++_|_______________________________j._*__
                        | 5 | 4 | 13 | 9 | 12 | 8 | 7 | 19 | 21 | 2 | 6 |
                        ------------------------------------------|------
                                   ^______________________________/


         // end for
                        __________i___________________________________*__
                        | 5 | 4 | 2 | 9 | 12 | 8 | 7 | 19 | 21 | 13 | 6 |
                        -------------------------------------------------

         swap A[i+1] A[r]
                                       _______________________________ 
                                      /                               v
                        __________i___|_______________________________*__
                        | 5 | 4 | 2 | 9 | 12 | 8 | 7 | 19 | 21 | 13 | 6 |
                        ----------------------------------------------|--
                                       ^______________________________/


                        __________i___*__________________________________
                        | 5 | 4 | 2 | 6 | 12 | 8 | 7 | 19 | 21 | 13 | 9 |
                        --------------q----------------------------------
                        A[p.....q-1]      A[q+1........................r]

            q = Partition(A, p, r)
            Quicksort(A, p, q-1)
            Quicksort(A, q+1, r)


            int Partition(int A[], int p, int r)
            {
                int x = A[r];       // pivot (last element)
                int i = p-1;
                for(int j=p; j<=r-1; j++)
                {
                    if(A[j] <= x)
                    {
                        i = i+1;
                        swap(A[i], A[j]);
                    }
                }
                swap(A[i+1], A[r]);   // swap pivot to mid
                return i+1;           // return pivot index
            }



            void Quicksort(int* A, int p, int r)
            {
                if(p < r)
                {
                    int q = Partition(A, p, r);
                    Quicksort(A, p, q-1);       // recursive call
                    Quicksort(A, q+1, r);
                }
                return;
            }

   



<h3>
<p align="right">
  <a href="https://github.com/abdulmukit98/code/blob/master/README.md#index" >index</a>
        /
  <a href="https://github.com/abdulmukit98/code/blob/master/Readme_second.md#part-ii" >top</a>
</p>
</h3>

### dfs


        vector<int> adjacent[1000];
        bool visited[1000];
        void dfs(int node);

        int main() {
            /*
                dfs
                recursively visit from root node to its child.
                if child visited, return to parent
                find another child from adjacency stack

                used to check if a graph is connected
                or to find a node in a graph
                time complexity O(V+E)
                dfs is faster than bfs
            */

            memset(visited , false, sizeof(visited));

            int vertices, edges;
            printf("Enter vertices and edges:");
            scanf("%d %d",&vertices, &edges);


            for (int i = 0; i < edges; i++) {
                printf("Enter edges between a and b node:");
                int a, b;
                scanf("%d %d",&a, &b);

                adjacent[a].push_back(b);
                adjacent[b].push_back(a);
            }
            dfs(0);

            return 0;
        }


        void dfs(int node)
        {
            if (visited[node] == true)
                return;

            // not visited
            visited[node] = true;
            printf("%d ",node);

            while (!adjacent[node].empty())
            {
                int child = adjacent[node].back();      // stack property
                adjacent[node].pop_back();
                // go from deep to deeper and check if child visited
                dfs(child);
            }

        }


<h3>
<p align="right">
  <a href="https://github.com/abdulmukit98/code/blob/master/README.md#index" >index</a>
</p>
</h3>

### BFS

        void bfs(int node);
        int counter;
        vector<int> adjacent[1000];
        bool visited[1000];
        list<int> que;


        int main() {
            /*
                bfs
                can't done recursive

             */
            memset(adjacent, 0, sizeof(adjacent));
            memset(visited, false, sizeof(visited));
            que.clear();

            int vertices, edges;
            printf("Enter vertices and edgs:");
            scanf("%d %d",&vertices, &edges);

            for (int i = 0; i < edges; ++i) {
                printf("Enter a edge b:");

                int a,b;
                scanf("%d %d",&a, &b);

                adjacent[a].push_back(b);
                adjacent[b].push_back(a);

            }

            // starting node 0
            bfs(0);

            return 0;
        }

        // bfs is not recursive algorithm
        void bfs(int node)
        {
            /*
            push starting node into que
            and the game begin

                                        (front)------------->-----------------|
                                    |      |                                 \|/
                                    |      |        |                         |
                                    |      |        |                         |
                                    |               |                         |
                                    |               |                         |
                                    |               |                         |
                                    | ^           ^ |                         |
                                    | |  make     | |                         |
                                      |  visited  | |       adjacent(front)   |
                    starting node-----|           |---------------------------|


            */
            que.push_back(node);
            visited[node] = true;

            while (!que.empty())
            {
                int front = que.front();
                que.pop_front();
                printf("%d ",front);

                for (int i = 0; i < adjacent[front].size(); ++i) {
                    int child = adjacent[front][i];
                    if(visited[child] != true)
                    {
                        visited[child] = true;
                        que.push_back(child);
                    }
                }

            }


        }

<h3>
<p align="right">
  <a href="https://github.com/abdulmukit98/code/blob/master/README.md#index" >index</a>
        /
  <a href="https://github.com/abdulmukit98/code/blob/master/Readme_second.md#part-ii" >top</a>
</p>
</h3>

### priority queue
    // restriction - element in priority queue can not be modified 
    priority_queue<int> que;
    que.push(5);
    que.push(9);
    que.push(29);
    que.push(1);
    que.push(3);

    while (!que.empty())
    {
        printf("%d ",que.top());
        que.pop();
    }
    
    Output: 29 9 5 3 1
    
    
    priority_queue<int, vector<int>, greater<int>> que;
    que.push(5);
    que.push(9);
    que.push(29);
    que.push(1);
    que.push(3);

    while (!que.empty())
    {
        printf("%d ",que.top());
        que.pop();
    }
    
    Output: 1 3 5 9 29

### priority queue of class 
        * lets have a class
                class node{
                    // pi , d
                    // parent, distance from source
                public:
                    int parent;
                    int dis;

                    node( int p, int d)
                    {
                        this->parent = p;
                        this->dis = d;
                    }
                };

        
        * now build a priority queue of node's object
            priority_queue<node> Q;
                     //par, dis
            Q.push(node(0, 12));
            Q.push(node(0, 7));
            Q.push(node(1, 15));
            Q.push(node(0, 29));
            Q.push(node(0, 3));
        
        * if we try to run this we will get exception
                no match for 'operator<' (operand types are 'const node' and 'const node')
                { return __x < __y; }
          that mean we need to modify operator < for node class object to process the priority
          we use operator overloading concept for < operator for node class object
          
          bool operator < (node a, node b)
          {
                // this return type decide how the operator will behave
                // its necessary for measuring priority type of priority_queue Q
               
                return a.dis < b.dis;
          }
          
          basically it determine nodeA < nodeB behavior
        
### pair & tuple
        
    priority_queue<pair<char, char>> que;
    que.push({1,'a'});
    que.push({5,'b'});
    que.push({3,'c'});
    que.push({9,'f'});
        output
        9 f
        5 b
        3 c
        1 a

    * weighted graph
        vector<pair<int, int>> adjacent[1000];
        
        scanf edge --> a, b, w;
        adjacent[a].push_back({b, w});
        adjacent[b].push_back({a, w});

<h3>
<p align="right">
  <a href="https://github.com/abdulmukit98/code/blob/master/README.md#index" >index</a>
        /
  <a href="https://github.com/abdulmukit98/code/blob/master/Readme_second.md#part-ii" >top</a>
</p>
</h3>

### Happy Dijkstra Day

Before
 ![before](https://github.com/abdulmukit98/code/blob/master/before.jpg) <br>
After <br>
 ![after](https://github.com/abdulmukit98/code/blob/master/after.jpg)

        class node{
        public:
            int parent;
            int distance;
            bool completed;

            node()
            {
                this->distance = INT_MAX;
                this->parent = -1;
                this->completed = false;        // completed = true mean
            }                                   // this node been added to shorted path tree

            //        node   weight
            vector<pair<int, int>> adjacent;
        };

        vector<node> G;
        void Relax(int u, int v, int w);
        int Extract_min();

        int main() {
            /*
                dijkstra algorithm

                Initialize-Single-Source(G, s)
                {
                    for each vartex v -> G.V
                        v.distance = infinity
                        v.parent = NIL = -1
                    s.distance = 0                  // only source parent 0 others null
                }

                Relax(u, v, w)
                {
                    if v.distance > u.distance + w(u,v)
                        v.distance = u.distance + w(u,v)
                        v.parent = u
                }

                Dijkstra(G, w, s)
                {
                    Initialize-Single-Source(G, s)
                    S = NIL                                 // shorted path tree null
                    Q = G.V                                 // min priority queue Q
                    while Q != empty                        // keyed by vertex.distance value
                        u = Extract-Min(Q)
                        S = S (UNION) u                     // shorted path tree
                        for each vertex v --> adjacent(u)
                            Relax(u, v, w)
                }

            */

            printf("Dijkstra\nEnter vertex and edges number: ");
            int vartex, edges;
            scanf("%d %d",&vartex, &edges);

            // Initialize-single-source
            for (int i = 0; i < vartex; ++i) {
                G.push_back(node());
            }

            for (int i = 0; i < edges; ++i) {
                printf("Enter edge A, B, W: ");
                int a, b, w;        // two node and their weight
                scanf("%d %d %d",&a, &b, &w);

                G[a].adjacent.push_back({b, w});
                G[b].adjacent.push_back({a, w});
            }

            printf("Enter source node: ");
            int src; scanf("%d",&src);
            G[src].distance = 0;


            while (true)
            {
                int u = Extract_min();
                if (u == -1) break;

                G[u].completed = true;
                for (int i = 0; i < G[u].adjacent.size(); ++i) {
                    int v = G[u].adjacent[i].first;               // pair<b, weight>
                    int w = G[u].adjacent[i].second;
                    Relax(u, v, w);
                }
            }

            for (int i = 0; i < G.size(); ++i) {
                printf("node: %d \tparent: %d \tdistance: %d\n", i, G[i].parent, G[i].distance);
            }

            return 0;
        }


        /*
         * here u-node belong to shorted path tree
         * it has the lowest possible distance from source
         * we will enlighten all his adjacent vartex v through him

            Relax(u, v, w)
            {
                if v.distance > u.distance + w(u,v)
                v.distance = u.distance + w(u,v)
                v.parent = u
            }
        */
        void Relax(int u, int v, int w)
        {
            if (G[v].distance > G[u].distance + w)          // u-node already sorted
            {
                G[v].distance = G[u].distance + w;
                G[v].parent = u;
            }
        }


        // min priority queue keyed by vartex.distance value
        int Extract_min()
        {
            int min = INT_MAX;
            int index;
            for (int i = 0; i < G.size(); ++i) {
                if (G[i].completed == false && G[i].distance < min)
                {
                    index = i;
                    min = G[i].distance;
                }
            }

            // all node has been processed
            if (min == INT_MAX)
                index = -1;

            /*
                if index == -1
                min priority queue empty
                terminate dijkstra
            */
             return index;
        }

<h3>
<p align="right">
  <a href="https://github.com/abdulmukit98/code/blob/master/README.md#index" >index</a>
        /
  <a href="https://github.com/abdulmukit98/code/blob/master/Readme_second.md#part-ii" >top</a>
</p>
</h3>





