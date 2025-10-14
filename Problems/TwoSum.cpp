#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// vector<int> twoSum(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> num_map; 
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        
        if (num_map.find(complement) != num_map.end()) 
        {
            return {num_map[complement], i}; 
        }
        
        num_map[nums[i]] = i; 
    }
    
    return {}; 
}
// int main()
// {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     vector<int> result = twoSum(nums, target);

//     if (!result.empty())
//     {
//         cout << "Indices at: " << result[0] << " " << result[1] << endl;
//     }
//     else
//     {
//         cout << "no solutions found." << endl;
//     }

//     return 0;
// }


int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices at: " << result[0] << " " << result[1] << endl;
    }
    else
    {
        cout << "No solutions found." << endl;
    }

    return 0;
}