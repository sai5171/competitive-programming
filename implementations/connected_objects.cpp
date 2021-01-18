#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int objectCount(int **arr,int row,int col,int i,int j);
void fill_color(int **arr,int row,int col,int i,int j,int fill);
void fill_color(int **arr,int row,int col,int i,int j,int fill)
{
  arr[i][j]=fill;
  if(i+1<row && j-1>=0 && arr[i+1][j-1]==1)
    fill_color(arr,row,col,i+1,j-1,fill);
    
  if(i+1<row && arr[i+1][j]==1)
    fill_color(arr,row,col,i+1,j,fill);
    
  if(i+1<row && j+1<col && arr[i+1][j+1]==1)
    fill_color(arr,row,col,i+1,j+1,fill);
    
  if(j-1>=0 && arr[i][j-1]==1)
    fill_color(arr,row,col,i,j-1,fill);
    
  if( j+1<col && arr[i][j+1]==1)
    fill_color(arr,row,col,i,j+1,fill);
    
  if(i-1>=0 && j-1>=0 && arr[i-1][j-1]==1)
    fill_color(arr,row,col,i-1,j-1,fill);
    
  if(i-1>=0 && arr[i-1][j]==1)
    fill_color(arr,row,col,i-1,j,fill);
    
  if(i-1>=0 && j+1<col && arr[i-1][j+1]==1)
    fill_color(arr,row,col,i-1,j+1,fill);  
  return ;
}
int objectCount(int **arr,int row,int col,int i,int j)
{
  int count=2;
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      if(arr[i][j]==1)
      {
        fill_color(arr,row,col,i,j,count);
        count++;
      }
    }         
  }      
  return count;
}
int main()
{
  int n,m;
  int **arr;
  int i,j,count=0;
  printf("Enter number of rows:\n");
  scanf("%d",&n);
  printf("Enter number of columns:\n");
  scanf("%d",&m);
  printf("Enter the matrix:\n");
  arr=(int **)malloc(sizeof(int *)*n);
  arr[0]=(int*)malloc(sizeof(int)*m*n);
  for(i=0;i<n;i++)
    arr[i]=(*arr+m*i);
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      int x;
      scanf("%d",&x);
      arr[i][j]=x;
    }
  }
  printf("Number of connected objects = %d",objectCount(arr,n,m,0,0)-2);
  return 0;
}
