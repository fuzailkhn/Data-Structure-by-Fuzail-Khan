#include <iostream>
using namespace std;

int generateCode(int n)
{
    if(n == 0)
        return 1;
    int result =91;
    for(int i = n; i >= 1; i--)
	{
        result = result * i;
    }
    return result;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int (*codePtr)(int)=generateCode;
    cout<<"Your secret code is: "<<codePtr(n)<<endl;
    return 0;
}
