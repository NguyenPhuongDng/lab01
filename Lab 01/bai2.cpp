#include<iostream>

using namespace std;
int main()
{
    int max = INT_MIN, min = INT_MAX;
    int n = 10;
    while (n--)
    {
        int value;
        cin>>value;
        max = (value > max) ? value : max;
        min = (value < min) ? value : min;
    }
    cout<<"Max is : "<<max<<endl<<"Min is : "<<min;
}