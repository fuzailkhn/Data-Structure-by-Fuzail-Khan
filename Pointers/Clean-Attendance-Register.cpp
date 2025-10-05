#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter number of participants:"<<endl;
    cin >> n;

    int* attendance =new int[n];

    for(int i = 0; i < n; i++) 
	{
        attendance[i] = 0;
    }

    int m;
    cout<<"Enter number of participants to mark present:"<<endl;
    cin>>m;

    for(int i = 0; i < m; i++)
	{
        int id;
        cout<<"Enter participant number to mark present:"<<endl;
        cin>>id;
        if(id >= 1 && id <= n)
		{
            attendance[id-1] =1;
        }
    }

    cout<<"Final Attendance List:"<<endl;
    for(int i = 0; i < n; i++) 
	{
        cout<<"Participant"<<i+1<< ":" <<attendance[i]<<endl;
    }

    delete[] attendance;
    return 0;
}
