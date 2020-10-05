### Quicksort


        /*
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

    */



<h3>
<p align="right">
  <a href="https://github.com/abdulmukit98/code/blob/master/README.md#index" >index</a>
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

