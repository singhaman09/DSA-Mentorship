#include<iostream>
using namespace std;
int main(){
    int a[30][30];//declaring int type of array
    int b[30][30];//declaring int type of array
    int i,j;
    int sum[30][30];
    int rows,columns;
  cout<<"enter the no. of rows"<<endl;// no. of rows
  cin>>rows;
  cout<<"enter the no. of columns"<<endl;//no. of columns
  cin>>columns;
  cout<<"enter the elements of the matrix a"<<endl;//elements of the first matrix
  for(i=0;i<=rows-1;i++){
      for(j=0;j<=columns-1;j++){
          cout<<"the element a"<<i+1<<j+1<<":-"<<endl;
          cin>>a[i][j];

      }
  }
  cout<<"enter the elements of the matrix b:-"<<endl;//elements of the matrix b
  for(i=0;i<=rows-1;i++){
      for(j=0;j<=columns-1;j++){
          cout<<"the element b"<<i+1<<j+1<<":-"<<endl;
          cin>>b[i][j];
      }
  }

  //the matrix a is 
  cout<<"the elements that you have entered in the matrix a is :-"<<endl;
  for(i=0;i<=rows-1;i++){
      for(j=0;j<=columns-1;j++){
          cout<<a[i][j];
          cout<<"   ";
          if(j==columns-1)
          cout<<endl;
      }
  }

  //the matrix b is 
  cout<<"the elements that you have entered in the matrix b is :-"<<endl;
  for(i=0;i<=rows-1;i++){
      for(j=0;j<=columns-1;j++){
          cout<<b[i][j];
          cout<<"   ";
          if(j==columns-1)
          cout<<endl;
      }
  }

 
  //sum of matrix a and b 
  for(i=0;i<=rows-1;i++){
      for(j=0;j<=columns-1;j++){
          sum[i][j]=a[i][j]+b[i][j];
      }
  }
  // the sum of the two matrix is 
  cout<<"the sum of the two matrix a and b is:-"<<endl;
  for(i=0;i<=rows-1;i++){
      for(j=0;j<=columns-1;j++){
          cout<<sum[i][j];
          cout<<"   ";
          if(j==columns-1)
          cout<<endl;
      }
  }

    return 0;
}