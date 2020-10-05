# code
Timus JUDGE_ID: 299746HR

[interesting problems](#interesting-problems)<br><br>

### index
1. [insertion sort](#insertion-sort)
1. [data types](https://en.wikipedia.org/wiki/C_data_types) :cloud:
1. [tokenize](#tokenize-string)
1. [class array sort](#class-array-sort)
1. [formula](#formula)
1. [getline vs gets](#getline-vs-gets)
1. [typecast](https://en.cppreference.com/w/cpp/string/byte/atoi) :cloud:
1. [vector parameter](https://www.geeksforgeeks.org/passing-vector-function-cpp/) :cloud:
1. [global variable](#global-variable)
1. [combination](#combination)

   Part II<br>
11. [Quicksort](https://github.com/abdulmukit98/code/blob/master/Readme_second.md#quicksort)
11. [dfs](https://github.com/abdulmukit98/code/blob/master/Readme_second.md#dfs)

<br>
* meaasuring length / size
 
            string s1; cin>>s1;
            len = s1.size()

            vector<int> vec;
            len = vec.size()

            char arr[100] = "Happy";
            sizeof(arr) = 100;
            while strlen(arr) = 5
            
            sizeof shows how many byte it take
            
* string -----> char

            stack<string> stk;
            string s1 = stk.top()

            char ar[100];
            for(int i=0; i<s1.size(); i++)  ar[i] = s1[i];

* assign char in code 

            char  a[50] = "Hello World"           
            /** 
             char array let you assign ( whitespace line ) once on creation. it wont allow assign further more.
            to assign char array further in code
            */ 
            strcpy(a, "new string")
            
            *** use gets(char[]) or getline(cin, string) to assign line through terminal
    
* Char array comparisn
  
            char str[10]
            if ( strcmp(str, "QUIT") == 0 )
            break
            
            string s1 = "Hello";
            if(s1.compare("Hello")==0) print ok


### cleaning memory garbage 
* char array
            
            memset(str,0x0,sizeof(str))
* int array
            
            int arr[100]
            memset(arr, 0, sizeof(arr))
            
* clear Stack
 
            stack<string> pages;
            while(!pages.empty())
            pages.pop();

* clear vector
  
            vector<int> myvector; 

            myvector.push_back(1); 
            myvector.push_back(2); 
            myvector.push_back(3); 
            myvector.push_back(4); 
            myvector.push_back(5); 

            // Vector becomes 1, 2, 3, 4, 5 

            myvector.clear(); 

<h3>
<p align="right">
  <a href="#code" >top^</a>
</p>
</h3>

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
        ----|------|------------------------
          ^ \___^  |
          \________/


                      key
                       ^
                 i     j
        --------------------------------------
        |  2  |  5   |  4  |  6  |  1  |  3  |
        -----------|-----|--------------------
                ^  \_^   |
                \________/

                            key
                             ^
                       i     j
        -------------------------------------
        |  2  |  4  |  5  |  6  |  1  |  3  |
        -----------------------|-------------
                            ^  |
                            \__/

                                  key
                                   ^
                             i     j
        -------------------------------------
        |  2  |  4  |  5  |  6  |  1  |  3  |
        -----|-----|-----|----|-----|--------
          ^  \__^  \__^  \__^ \__^  |
          \_________________________/

                                        key
                                         ^
                                    i    j
        -------------------------------------
        |  1  |  2  |  4  |  5  |  6  |  3  |
        ----------------|-----|-----|--------
                      ^ \___^ \___^ \___^ |
                      \___________________/


        -------------------------------------
        |  1  |  2  |  3  |  4  |  5  |  6  |
        -------------------------------------

    */

<h3>
<p align="right">
  <a href="#code" >top^</a>
</p>
</h3>

### tokenize string
* Basic apprach

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
    
* strtok (string.h function)
                
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


* stringstream stl
                
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


<h3>
<p align="right">
  <a href="#code" >top^</a>
</p>
</h3>

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
* [lightoj-1261  (K-SAT Problem)](http://lightoj.com/volume_showproblem.php?problem=1261)<br>
  [way out](https://github.com/abdulmukit98/code/blob/master/lightOJ%201261)
* [lightoj-1414 (February 29)](http://www.lightoj.com/volume_showproblem.php?problem=1414)<br>
  [using map](https://github.com/abdulmukit98/code/blob/master/lightOJ%201414.cpp)<br>
  [using class](https://github.com/abdulmukit98/code/blob/master/lightOJ%201414(II).cpp)


### formula
            * no of digit = log(num) + 1
            * triangle cone from slides
                        cosC = (a*a + b*b - c*c) / 2*a*b
            * triangle area from slides
                        sqrt(s(s-a)(s-b)(s-c))
                        s = (a+b+c)/2
            * pi = acos(-1)
            * vol of cone
                        V = 1/3 * pi*r*r*h
            * vol of glass (fraction of cone)
            
                                  \--------|--R----/
                                   \       |      /
                                    \      |h    /
                                     \     |    /
                                      -----|-r--
              
              V = 1/3 * pi* h (R*R + r*r + R*r)
              
            * dummy_gets sits only after int,double,ll 
              use **getchar()** instead of dummy gets
            * range value 
                        INT_MIN
                        INT_MAX
                        LONG_LONG_MIN
                        ...
                        ...


            * reverse an integer
                         int i=1234;
                         int  ans=0;
                         while (i!=0)
                         {
                             int rem = i%10;
                             i = i/10;
                             ans = ans*10 + rem;
                         }
                         //ans is 4321
            
            

            * any base to decimal      
                         int num = 10110;
                         int d=0, rem, dec=0;
                         while (num != 0)
                         {
                             //last digit
                             rem = num%10;                   
                             num = num/10;
                             dec = dec + rem * pow(2,d);    // 2 is the base     
                             // power
                             d++;
                         }
                         //dec is 22
                         // if we put 10 as base , we will get num itself!
                         
                       
            * decimal to any base
                       int n = 125
                       vector<int> reminder;
                       while (n!=0)
                       {
                           /// 2 is the convertion base
                           reminder.push_back(n%2);      
                           n = n/2;
                       } 
                       /*show the result in decimal format*/
                       int bin = 0, d=0;
                       // reminder[0] should be the last digit     /\
                       // reminder[n-1] should be the first digit  |
                       for (int i = 0; i < reminder.size(); ++i) {
                           bin = bin + reminder[i] * pow(10, d);
                           d = d+1;
                       } 
                       // here bin is 1111101 after convertion
            
 
            * leap count
                      ll leap_count(int y)
                      {
                          ll cnt = 0;
                          cnt = cnt + y / 4; 
                          cnt = cnt - y / 100;
                          cnt = cnt + y / 400;

                          return cnt;
                      }
            
 
            * fibonacci memorization top down
                      ll fib(int n)
                      {
                          // global arr
                          if(arr[n]==-1)
                          {
                              if(n<=1) arr[n] = n;                /// fib[0], fib[1]
                              else arr[n] = fib(n-1) + fib(n-2);
                          }
                          return arr[n];
                      } 
                      
            * 2^n is the binary digit variance 
            * stack.top() == vector.back()
 
### getline vs gets
            for line input
            char arr[100]
            gets(arr)
            len = strlen(arr)
            
            string arr
            getline(cin, arr)
            len = arr.size()
            
            lightoj compiler dont detect gets, hence show compilation error
            

<h3>
<p align="right">
  <a href="#code" >top^</a>
</p>
</h3>

### global variable

    string MON;
    int DAY;
    int YEAR;

    int main() {
        string date1, date2;

        /*  refresh global variable
            send it to function
            modify its value
            save it to local variable
        */

        MON=""; DAY=-1; YEAR=-1;
        tokenize(date1);
        m1 = MON; d1 = DAY; y1 = YEAR;

        MON=""; DAY=-1; YEAR=-1;
        tokenize(date2);
        m2 =MON; d2=DAY; y2 = YEAR;

        return 0;
    }

    void tokenize(string date)
    {
         MON = "Aug";
         YEAR = 2020;
         DAY = 28;
    }

### combination
    
    /*
     * nCr
     * logic
     *   for a string s
     *   generate n-digit binary number
     *   where n = len(s)
     *
     *  00000
     *  00001
     *  00010
     *  .....
     *  .....
     *  10001
     *  10010
     *  .....
     *  .....
     *  11111
     *
     *  all possible combination for n-digit binary
     *  then we recall those formation 
     *  where 1 is exactly appear r-times 
     *  
     *  thats how we measure nCr
     */


    void combination(string s, int r)
    {
        int upper = pow(2, s.size()) - 1;        // 0 to 2^n -1

        for (int i = 0; i <= upper; ++i) {
            int k = i;
            int d = 0;
            vector<int> index;

            while (k != 0)
            {
                if(k%2==1) index.push_back(d);    // d is the current index of 1
                d++;
                k = k/2;
            }

            if(index.size() == r)
            {
                for (int j = 0; j < index.size(); ++j) {
                    cout<<s[index[j]];
                }
                cout<<"\n";
            }
        }

    }

<h3>
<p align="right">
  <a href="#code" >top^</a>
</p>
</h3>
