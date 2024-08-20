#include<iostream>
#include<vector>
using namespace std;

void max_min(vector<int> arr){
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<arr.size();i++){
        if( max < arr[i]){
            max=arr[i];
        }
        if( min > arr[i]){
            min=arr[i];
        }
    }

    cout<<"Maximun :"<<max<<endl<<"Minimum :"<<min;

}

int main(){
    vector<int> arr={1,2,5,3,8,6,4};
    max_min(arr);



    return 0;
}