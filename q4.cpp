#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter size of matrix\n";
    cin>>n;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            x=n*i+j+1;
            cout<<left<<setw(5)<<x<<"";
        }
        cout<<endl;
    }
    return 0;
}