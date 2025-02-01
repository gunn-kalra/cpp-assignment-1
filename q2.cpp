#include<iostream>
using namespace std;
int main(){
    int a[5],i,n;
    cout<<"Enter number of elements you want in array\n";
    cin>>n;
    cout<<"Enter elements in array\n";
    for(i=0;i<n;i++)//taking iputs in array
    {
        cin>>a[i];
    }
    int max=a[0];
    int secmax=a[0];
    int min=a[0];
    int secmin=a[0];
    cout<<"Reversed array :\n";
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]> max)
        {
            secmax=max;
            max=a[i];
        }  
    }
    for(i=0;i<n;i++)
    {
        if(a[i]< min)
        {
            secmin=min;
            min=a[i];
        }  
    }
    cout<<"Second largest element in array is:"<<secmax<<endl;
    cout<<"Second smallest element in array is:"<<secmin<<endl;
    return 0; 
}