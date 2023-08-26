#include<bits/stdc++.h>
using namespace std;

//#define int long long int
#define endl "\n"
#include<stdio.h>
#define f(i,a,b)    for(int i=a;i<=(b);++i)
#define fr(i,a,b)   for(int i=a;i>=b;i--)




// ****
// ****
// ****
// ****
void pattern1(int n){
    f(row,1,n){
        f(col,1,n){
            cout<<"*";
        }
        cout<<endl;
    }
}

// *
// **
// ***
// ****
void pattern2(int n){
    f(row,1,n){
        f(col,1,row){
            cout<<"*";
        }cout<<endl;
    }
}

// 1
// 12
// 123
// 1234
// 12345
void pattern3(int n){
    f(row,1,n){
        f(col,1,row){
            cout<<col;
        }cout<<endl;
    }
}

// 1
// 22
// 333
// 4444
void pattern4(int n){
    f(row,1,n){
        f(col,1,row){
            cout<<row;
        }cout<<endl;
    }
}

// 1234
// 123
// 12
// 1
void pattern5(int n){
    f(row,1,n){
        f(col,1,n-row+1){
            cout<<col;
        }cout<<endl;
    }
}

//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
void pattern6(int n){
    f(row,0,n){
        f(space,1,n-row+1){
            cout<<" ";
        }

        f(star,1,2*row+1){
            cout<<"*";
        }

        f(space,1,n-row+1){
            cout<<" ";
        }
        cout<<endl;
    }
}

//  ********* 
//   *******  
//    *****   
//     ***    
//      *  
void pattern7(int n){
    fr(row,n,0){
        f(space,1,n-row+1){
            cout<<" ";
        }

        f(star,1,2*row+1){
            cout<<"*";
        }

        f(space,1,n-row+1){
            cout<<" ";
        }
        cout<<endl;
    }
}

// *
// **
// ***
// ****
// ***
// **
// *
void pattern8(int n){
    f(row,0,2*n-1){
        int star = row;
        if(row>n) star = 2*n-row;
        f(col,1,star){
            cout<<"*";
        }
        cout<<endl;

    }   
}

// 1
// 01
// 101
// 0101
// 10101
void pattern9(int n){
    int start = 1;
    f(row,0,n){
        if(row%2==0) start = 1;
        else start = 0;
        f(col,0,row){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;

    }   
}

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
void pattern10(int n){
    int space = 2*(n-1);
    f(row,1,n){
        f(col,1,row){
            cout<<col;
        }
        f(s,1,space){
            cout<<" ";
            
        }
        fr(col,row,1){
            cout<<col;
        }
        cout<<endl;
        space = space-2;
    }
}

// 1
// 23
// 456
// 78910
void pattern11(int n){
    int num = 1;
    f(row,1,n){
        f(col,1,row){
            cout<<num;
            num+=1;
        }
        cout<<endl;
    }
}

// A
// AB
// ABC
// ABCD
// ABCDE
void pattern12(int n){
    
    f(row,0,n){
        for(char i='A';i<='A'+row;i++){
            cout<<i;
        }
        cout<<endl;
    }
}


// ABCDE
// ABCD
// ABC
// AB
// A
void pattern13(int n){
    
    fr(row,n,0){
        for(char i='A';i<='A'+row;i++){
            cout<<i;
        }
        cout<<endl;
    }
}

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
void pattern14(int n){
    
    f(row,0,n){
        char alp = 'A' + row;
        f(col,0,row){
            cout<<alp<<" ";
        }
        cout<<endl;
    }
}

//      A     
//     ABA    
//    ABCBA   
//   ABCDCBA  
//  ABCDEDCBA 
void pattern15(int n){
    f(row,0,n){
        f(space,1,n-row+1){
            cout<<" ";
        }

        char c = 'A';
        int rev = ((2*row)+1)/2;
        f(alp,1,2*row+1){
            cout<<c;
            if(alp<=rev) c++;
            else c--;
        }    

        f(space,1,n-row+1){
            cout<<" ";
        }
        cout<<endl;
    }
}

// E
// DE
// CDE
// BCDE
// ABCDE
void pattern16(int n){
    
    f(row,0,n){
        for(char i='E'-row;i<='E';i++){
            cout<<i;
        }
        cout<<endl;
    }
}


// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********
void pattern17(int n){
    int space = 0;
    f(row,0,n){
        f(col,1,n-row){
            cout<<"*";
        }
        f(s,1,space){
            cout<<" ";

            
        }
        fr(col,n-row,1){
            cout<<"*";
        }
        cout<<endl;
        space = space+2;
    }

    int space2 = 2*(n-1);
    f(row,1,n){
        f(col,1,row){
            cout<<"*";
        }
        f(s,1,space2){
            cout<<" ";
            
        }
        fr(col,row,1){
            cout<<"*";
        }
        cout<<endl;
        space2 = space2-2;
    }
}

// ****
// *  *
// *  *
// ****
void pattern18(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 
void pattern19(int n){
    for(int i=0;i<2*n-1;i++){
         for(int j=0;j<2*n-1;j++){
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         cout<<endl;
     }
}


int main()
{
    int n;
    cin>>n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    return 0;
}