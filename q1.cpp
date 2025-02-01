#include<iostream>
using namespace std;
bool isprime(int n)
{   
    for(int i=2;i<n;i++){
    if(n%i==0)
    return false;}
    return true;
}
int main(){
    int n,i,flag=0;
    cout<<"Enter a postive integer";
    cin>>n;
    if(n==1)
    {
        cout<<"Not a prime number";
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0){
        flag=1;
        break;}
    }
    if(flag==1){
    cout<<"Not a prime number\n";
    cout<<"Factors are"<<endl;
    for(i=1;i<=n;i++)
    { 
        if(n%i==0)
        cout<<i<<endl;
    }
    }
    else{
    cout<<"Prime number";
    int np=n+1;
    while(!isprime(np)){
        np++;
    }
    cout<<"Next prime number is:"<<np;
    }
    return 0;
}