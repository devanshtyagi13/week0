#include<iostream>
using namespace std;
int main()
{
    int n,size,key;
    cin>>n;
    cout<<"No. of test cases "<<n<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++){
            cin>>arr[j];
        }
        cin>>key;

        cout<<"Size "<<size<<endl;
        for(int k=0;k<size;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
        cout<<"Key "<<key<<endl;
    }

}