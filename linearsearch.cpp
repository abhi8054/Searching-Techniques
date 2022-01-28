#include <iostream>
using namespace std;
int arrpos[10]={0};
int linearSearch(int arr[], int n, int ele)
{
    int count=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        { 
            count++;
            arrpos[count]=i+1;
        }
    }
    return count;
}
int main()
{
    int n, ele,len;
    int arr[100];
    cout << "Enter the length of array : ";
    cin >> n;
    cout << "Enter all the Elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array elements are :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout << "Enter the element you want to search : ";
    cin >> ele;
    len=linearSearch(arr,n,ele);
    if(arrpos[0]==0){
        cout<<"Element is not Found";
    }else{
        for(int i=0;i<=len;i++)
        cout<<"Element is Fount at "<<arrpos[i]<<"th position"<<endl;
    }

    return 0;
}