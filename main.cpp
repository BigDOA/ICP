/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a=8;
    srand(time(0));
    int matrix[8][8]={};
   
    for (int i =0;i<a;i++){
        for (int j=0;j<a;j++){
            matrix[i][j]=1+(rand() %2000);
            
        }
    }
    
  
      
          int b[a*(a+1)/2]={};
     int i, j;
     int k=0;
     
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            
            if(i>=j){
            cout << matrix[i][j] << " ";
            if(k<a*(a+1)/2)
            {
                b[k]=matrix[i][j];
                k++;
            }
            
        }
         
        
        }
        cout << endl;
    }
    cout<<b[8]<<endl;
    
    return 0;
    
    
    
}

