# code

[clr](###clear-vector)

Timus JUDGE_ID: 299746HR

### length/size
            string s1; cin>>s1;
            len = s1.size()

            vector<int> vec;
            len = vec.size()

            char arr[100] = "Happy";
            sizeof(arr) = 100;
            while strlen(arr) = 5
            
### string -----> char
            stack(string) stk;
            string s1 = stk.top()

            char ar[100];
            for(int i=0; i<s1.size(); i++)  ar[i] = s1[i];

### char
    char  a[50] = "Hello World"           
    /** 
        char array let you assign once on creation. it wont allow assign further more.
        to assign char array further in code
    */ 
    strcpy(a, "new string")
    
### Char array comparisn
    char str[10]
    if ( strcmp(str, "QUIT") == 0 )
    break


### Clear char array
    memset(str,0x0,sizeof(str))

### Clear Stack
    stack<string> pages;
    while(!pages.empty())
        pages.pop();

###Clear vector
    vector<int> myvector; 
 
    myvector.push_back(1); 
    myvector.push_back(2); 
    myvector.push_back(3); 
    myvector.push_back(4); 
    myvector.push_back(5); 
  
    // Vector becomes 1, 2, 3, 4, 5 
  
    myvector.clear(); 
