#include <iostream>
using namespace  std;

int main() {
   int n;
    cin>> n;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<n-i-1;j=j+1)
        {
            cout<<" ";
            
        }
    
        for(int j=0;j<i+1;j=j+1)
        {
            cout<<"* ";
            
            
        }
     cout<<endl;   
    }

  for(int i=0;i<n;i++)
    {
      for(int j=0;j<i;j++)
        {
          cout<<" ";
            
        }
    for(int j=0;j<(n-i);j++)
      {
        cout<<"* ";
      }
    cout<<endl;
    
    }
























}