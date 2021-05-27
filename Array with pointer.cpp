#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,m;
    int *p;
    cout<<"Enter element:";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    p=arr;
    cout<<"You entered:";
    for(m=0;m<5;m++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
