#include<iostream>
using namespace std;
int count=0;
int binarySearch(int [],int, int); //line 28

int main()
{
    int n, ele,pos;
    int arr[100];
    cout << "Enter the length of array : ";
    cin >> n;
    cout << "Enter all the Elements of array in sorted order : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search : ";
    cin >> ele;

    if(pos=binarySearch(arr,n,ele)){
        for(int i=0;i<count;i++)
            cout<<"The "<<ele<<" is found at "<<pos+i<<" position"<<endl;
    }else{
        cout<<"The element is not found ";
    }
}

int binarySearch(int arr[],int n,int ele){
    int j=n-1,i=0;
    int mid=0;
    while(i<=j){
        mid=int((i+j)/2);
        if(arr[mid]>ele){
            i=mid+1;
        }else if(arr[mid]<ele){
            j=mid-1;
        }else{
            int val;
            val=mid+1;
            while (arr[mid]==ele)
            {
                count++;
                mid++;
            }
            return val;
        }
    }
    return 0;
}