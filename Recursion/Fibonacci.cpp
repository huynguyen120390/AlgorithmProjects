#include <iostream>
#include <vector>
using namespace std;

int fibonacci_iter_array(int index){
    int nums[index];
    nums[0] = 0;
    nums[1] = 1;
    for(int i = 2; i < index + 1; i++){
        nums[i] = nums[i-1] + nums[i-2];
    }

    return nums[sizeof(nums)/sizeof(int)];
}


int fibonacci_iter_vector(int index){
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    for(int i = 2; i < index + 1; i++){
        nums.push_back(nums[i-2] + nums[i-1]);
    }

    return nums[index]; //we can use nums.at[index], nums.back()
}


int main(int argc, char ** argv){
    int val = fibonacci_iter_array(10);
    int val2 = fibonacci_iter_vector(10);
    std::cout << val << std::endl;
    std::cout << val2 << std::endl;
    return 0;
}