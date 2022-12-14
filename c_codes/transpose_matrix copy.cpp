#include<iostream>
using namespace std;
int main(){
    int rows,columns,i,j;//declaring rows and columns
    int matrix[30][30];//declaring matrix
    int transpose[30][30];//declaring transpose matrix
    cout<<"enter the rows"<<endl;
    cin>>rows;
    cout<<"enter the columns"<<endl;
    cin>>columns;
    // enter the elements in the matrix
    cout<<"enter the elements in the matrix"<<endl;
    for(i=0;i<=rows-1;i++){
        for(j=0;j<=columns-1;j++){
            cout<<"enter the element of matrix:"<<i+1<<j+1;
            cin>>matrix[i][j];
        }
    }
    // now check which elements you have entered in the matrix
    cout<<"print the elements that you have entered in the matrix"<<endl;
    for(i=0;i<=rows-1;i++){
        for(j=0;j<=columns-1;j++){
            cout<<" "<<matrix[i][j];
            if(j==columns-1)
            cout<<endl<<endl;
            
        }
    }

    // now transpose the matrix 
    for(i=0;i<=rows-1;i++){
        for(j=0;j<=columns-1;j++){
            transpose[j][i]=matrix[i][j];
        }
    }

    // now print the tranpose matrix
    cout<<"after the transpose  the matrix is:- "<<endl;
    for(i=0;i<=columns-1;i++){
        for(j=0;j<=rows-1;j++){
            cout<<" "<<transpose[i][j];
            if(j==rows-1)
            cout<<endl<<endl;
        }
    }
    return 0;
}