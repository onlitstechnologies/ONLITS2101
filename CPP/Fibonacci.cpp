#include<iostream>
using namespace std;
int main()
{
    int n, ft=0, st=1, nt;
    cout<<"Enter a number: ";   //printf
    cin>>n;                     //scanf
    cout<<"Fibonacci series upto "<<n<<" terms is: "<<endl;
    cout<<ft<<" "<<st<<" ";
    for(int i=3; i<=n; i++)
    {
        nt = ft + st;
        cout<<nt<<" ";
        ft = st;
        st = nt;
    }
    cout<<endl;     //endl = \n
    return 0;
}