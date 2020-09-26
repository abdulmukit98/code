# code
Timus JUDGE_ID: 299746HR

[interesting problems](#interesting-problems)<br><br>


index<br>
[1. insertion sort](#insertion-sort)<br>
[2. data types](https://en.wikipedia.org/wiki/C_data_types)<br>
[3. tokenize](#tokenize-basic)<br>
[4. class array sort](#class-array-sort)<br>
[5. formula](#formula)

### length/size
            string s1; cin>>s1;
            len = s1.size()

            vector<int> vec;
            len = vec.size()

            char arr[100] = "Happy";
            sizeof(arr) = 100;
            while strlen(arr) = 5
            
### string -----> char
            stack<string> stk;
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

### Clear vector
    vector<int> myvector; 
 
    myvector.push_back(1); 
    myvector.push_back(2); 
    myvector.push_back(3); 
    myvector.push_back(4); 
    myvector.push_back(5); 
  
    // Vector becomes 1, 2, 3, 4, 5 
  
    myvector.clear(); 

### insertion sort
    void insertion(int* arr, int n)
    {
         for(int j=1; j<n; j++)
         {
              int key = arr[j];
              int i = j-1;
              /// if previous index greater than key, right shift >>
              while(i>=0 && arr[i] > key)
              {
                  arr[i+1] = arr[i];
                  i = i-1;
              }
              arr[i+1] = key;
         }
    }    

    /**
    let array

                key
                 ^
           i     j
        -------------------------------------
        |  5  |  2  |  4  |  6  |  1  |  3  |
        -------------------------------------
          ^  ...^  |
          .........|


                      key
                       ^
                 i     j
        -------------------------------------
        |  2  |  5  |  4  |  6  |  1  |  3  |
        -------------------------------------
                ^  ...^  |
                |........|

                            key
                             ^
                       i     j
        -------------------------------------
        |  2  |  4  |  5  |  6  |  1  |  3  |
        -------------------------------------
                            ^  |
                            |..|

                                  key
                                   ^
                             i     j
        -------------------------------------
        |  2  |  4  |  5  |  6  |  1  |  3  |
        -------------------------------------
          ^  ....^ ....^ ...^ ...^  |
          |.........................|

                                        key
                                         ^
                                    i    j
        -------------------------------------
        |  1  |  2  |  4  |  5  |  6  |  3  |
        -------------------------------------
                      ^  ....^ ...^ ...^  |
                      | ..................|


        -------------------------------------
        |  1  |  2  |  3  |  4  |  5  |  6  |
        -------------------------------------

    */

### tokenize basic
    char s1[100];
    memset(s1,0x0,sizeof(s1));
    gets(s1);

    vector<string> word;
    char token[20];
    memset(token,0x0,sizeof(token));
    int d=0;

    for(int i=0; i<=strlen(s1); i++)
    {
        if(s1[i] == ',' || s1[i] == '.') s1[i] = ' ';

        if(s1[i] == ' ' || s1[i] == '\0')
        {
            if(strlen(token) > 0)
                word.push_back(token);
            d=0;
            memset(token,0x0,sizeof(token));
            continue;
        }
        token[d] = s1[i];
        d++;
    }
    
### strtok (string.h function)
    char str[200];
    gets(str);
    vector<string> word;
    char* token;
    token = strtok(str, " ");
    while (token != null)
    {
        word.push_back(token);
        token = strtok(null, " ");     // find next token
    }


### stringstream stl
    char str[100];
    gets(str);
    for(int i=0; i<strlen(str); i++s)
        if(str[i]==',') str[i]=' ';

    vector<string> word;

    stringstream func(str);
    string s;
    while(func >> s)        ///  >> bitwise write shift
    {
        word.push_back(s);
    }
    
### class array sort
    class student
    {
    public:
            string name;
            int roll;
            int mark;
    };

            student arr[3];

            arr[0]
            name = "hello"
            roll = 1
            mark = 20

            arr[1]
            name = "panda"
            roll = 2
            mark = 15

            arr[2]
            name = "joe"
            roll = 3
            mark = 25
            
            //insertion
            void sort_student(student* arr, int n)
            {
                student key;
                for(int j=1; j<n; j++)
                {
                    int i = j-1;
                    key = arr[j];

                    while (arr[i].mark > key.mark && i>=0)
                    {
                        arr[i+1] = arr[i];
                        i = i-1;
                    }
                    arr[i+1] = key;
                }
            }

### interesting problems
[* lightoj-1261  (K-SAT Problem)](http://lightoj.com/volume_showproblem.php?problem=1261)<br>
[----guideline](https://github.com/abdulmukit98/code/blob/master/lightOJ%201261)<br>


### formula
            * no of digit = log(num) + 1
            * triangle cone from slides
                        cosC = (a*a + b*b - c*c) / 2*a*b
            * triangle area from slides
                        sqrt(s(s-a)(s-b)(s-c))
                        s = (a+b+c)/2
            * pi = acos(-1)
