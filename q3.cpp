#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string\n";
    getline(cin,a);
    int b,i,flag=0;
    b=a.length();
   for(i=0;i<b;i++)
    {
        if(a[i]!=a[b-i-1])
        flag=1;
    }
    if(flag==1)
    {cout<<a<<"is not Palindrome";}
    else
    cout<<a<<"is Palindrome";
    int freq[256] = {0};
    for (char c : a) {
        freq[c]++;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << ": " << freq[i] << endl;
        }
    }
    for(i=0;i<b;i++)
    {
        if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u' )
        a[i]='*';
    }
    cout<<a;
    return 0;
}