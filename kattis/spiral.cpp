#include<bits/stdc++.h>
#define lli long long int
using namespace std;
void fill(lli,lli,lli);
lli min(lli,lli);
void change_cor_dir(int*,lli*,lli*);
lli a[200][200];
int main()
{
  lli xx,yy;
  lli case_count=0;
  lli xxi,xxj,yyi,yyj;
  while(cin >> xx >> yy)
  {
    cout << "Case " << ++case_count << ": ";
    lli x=100,y=100;
    for (int i=0;i<200;i++)
      for (int j=0;j<200;j++)
          a[i][j]=0;
    int dir=1; //right
    a[x][y++]=1;
    for(auto i=2;i<=10000;i++)
    {
      bool check=true;
      for(auto j=2;j*j<=i;j++)
      {
        if(!(i%j))
          check=false;
      }
      if(check)
      {
        a[x][y]=-1;
        change_cor_dir(&dir,&x,&y);
      }
      else
      {
        a[x][y]=i;
        change_cor_dir(&dir,&x,&y);
      }   
    }  
  
  
    //cout << xx << " " << yy << endl;
    for(auto i=0;i<200;i++)
    {
      for(auto j=0;j<200;j++)
      {
        if(a[i][j]==-1)
          a[i][j]=0;
        else if(a[i][j]>0 && a[i][j]!=xx && a[i][j]!=yy)
          a[i][j]=-1;
        else if(a[i][j]==xx)
        {
          a[i][j]=51715171;
          xxi=i;
          xxj=j;
        }
        else if(a[i][j]==yy)
        {
          a[i][j]=51715172;
          yyi=i;
          yyj=j;
        }
      }
    }
    bool check=false;
    for(lli i=0;i<200;i++)
    {
      for(lli j=0;j<200;j++)
      {
        if(a[i][j]==51715171 && check==false)
        {
          fill(i,j,(lli)1);
          check=true;
        }
      }
    }
   
    /*
    for(lli i=95;i<115;i++)
    {
      for(lli j=95;j<115;j++)
      {
        cout << setw(8) << a[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;
    */
    
    if(a[xxi-1][xxj]==51715172 || a[xxi+1][xxj]==51715172 || a[xxi][xxj+1]==51715172 || a[xxi][xxj-1]==51715172)
      cout << "1\n";
    else
    {
      if(a[yyi-1][yyj]+a[yyi+1][yyj]+a[yyi][yyj+1]+a[yyi][yyj-1]==0)
        cout << "impossible\n";
      else
        cout << min(min(a[yyi-1][yyj],a[yyi+1][yyj]),min(a[yyi][yyj+1],a[yyi][yyj-1]))+1 << "\n";
    }
    
  }
  return 0;
}
lli min(lli x,lli y)
{
  if(x==0)
    return y;
  else if(y==0)
    return x;
  else 
    return (x>y?y:x);
}
void fill(lli i,lli j,lli count)
{
  if(i-1>=0 && a[i-1][j]!=0 && a[i-1][j]!=51715171 && a[i-1][j]!=51715172)
  {
    if(a[i-1][j]==-1 || a[i-1][j]>count)
    {
      a[i-1][j]=count;
      fill(i-1,j,count+1);
    }
  }
  if(i+1<200 && a[i+1][j]!=0 && a[i+1][j]!=51715171 && a[i+1][j]!=51715172)
  {
    if(a[i+1][j]==-1 || a[i+1][j]>count)
    {
      a[i+1][j]=count;
      fill(i+1,j,count+1);
    }
  }
  if(j-1>=0 && a[i][j-1]!=0 && a[i][j-1]!=51715171 && a[i][j-1]!=51715172)
  {
    if(a[i][j-1]==-1 || a[i][j-1]>count)
    {
      a[i][j-1]=count;
      fill(i,j-1,count+1);
    }
  }
  if(j+1<200 && a[i][j+1]!=0 && a[i][j+1]!=51715171 && a[i][j+1]!=51715172)
  {
    if(a[i][j+1]==-1 || a[i][j+1]>count)
    {
      a[i][j+1]=count;
      fill(i,j+1,count+1);
    }
  }
}

void change_cor_dir(int *dir, lli *x,lli *y)
{
  lli tempx= *x;
  lli tempy= *y;
  if(*dir==1) //right
  {
    if(a[tempx-1][tempy]==0)
    {
      *dir=2;
      *x=tempx-1;
    }
    else
      *y=tempy+1;
  }
  else if(*dir==2) //up
  {
    if(a[tempx][tempy-1]==0)
    {
      *dir=3;
      *y=tempy-1;
    }
    else
      *x=tempx-1;
  }
  else if(*dir==3) //left
  {
    if(a[tempx+1][tempy]==0)
    {
      *dir=4;
      *x=tempx+1;
    }
    else
      *y=tempy-1;
  }
  else //down
  {
    if(a[tempx][tempy+1]==0)
    {
      *dir=1;
      *y=tempy+1;
    }
    else
      *x=tempx+1;
  }
}