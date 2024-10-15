#include <iostream>
#include <vector>

using namespace std;


void print(vector<int> nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

// This is not optimized approch. It will give TLE error.
vector<int> prodArray(vector<int> nums){
    int len = nums.size();
    vector<int> prodArray; 

    for(int i = 0; i < len; i++){
        int mul = 1; 
        for(int j = 0; j < len; j++){
            if(j != i){
                mul *= nums[j];
            }
        }
        prodArray.push_back(mul);
        mul = 1;
    }
    return prodArray;
}


// This solution won't give TLE but still it is not optimized approach since it uses two extra array viz. prefix, suffix. which increase its space complexity.
vector<int> prefix(vector<int> nums){
    vector<int> prefix(nums.size(), 1);
    vector<int> suffix(nums.size(), 1);
    vector<int> result;
    for(int i = 1; i < nums.size(); i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    for(int i = nums.size()-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    for(int i = 0; i < nums.size(); i++){
        int ans = prefix[i] * suffix[i];
        result.push_back(ans);
    }
    return result;
}

// Fully optimized code 

vector<int> optimisedResult(vector<int> nums){
    int len = nums.size();
    vector<int> result(len, 1); 
    for(int i = 1; i < len; i++){
        result[i] = result[i-1] * nums[i-1];
    }
    cout << "Prefix : ";
    print(result);
    cout << endl;

    for(int i = len - 2; i >= 0; i--){
        result[i + 1] = result[i + 1] * nums[i + 1];
    }
    return result;
}

int main(){
    vector<int> nums = {1,2,3,4};
    print(optimisedResult(nums));

    return 0;
}