#include <iostream>
#include <vector>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;

        int reverse = 0;
        int step = 1;
        while (x > reverse)
        {
            reverse = reverse * 10 + x % 10;
            x = x / 10;
            std::cout << "Step #" << step << ", x = " << x << ", reverse = " << reverse << std::endl;
            step += 1;
        }

        return (x == reverse) || (x == reverse / 10);
    }
};

int main() {
    Solution sol;
    int number = 1234543121;

    bool result = sol.isPalindrome(number);
    if (result == true)
        std::cout << number << " is a palindrome.";
    else
        std::cout << number << " is not a palindrome.";

    return 0;
}