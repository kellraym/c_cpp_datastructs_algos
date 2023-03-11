#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> nums) {
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (nums.at(i) < nums.at(i + 1))
            {
                int temp = nums[i];
                nums[i + 1] = nums[i];
                nums[i + 1] = temp;
            }
        }
    }

    return nums;
}

int main()
{
    std::cout << "Hello, World!";
    return 0;
}