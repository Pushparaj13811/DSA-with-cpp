#include <iostream>
#include <vector>

using namespace std;
void subArrays(int arr[], int size){
    int count = 1;
    for(int st = 0; st < size; st++){
        for(int end = st; end < size; end++){
            for(int k = st; k <= end; k++ ){
                cout << arr[k] << " " ;
            }
            count++;
            cout << endl;
        }
        cout << endl;
    }
    cout << "Total no of sub array : "<< count << endl;
}

int main(){
    int nums[] = {4,23,32,12,5,6};
    int size = sizeof(nums)/sizeof(int);
    subArrays(nums,size);
    return 0;
}