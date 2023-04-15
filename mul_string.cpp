#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string add(string num1, string num2)
    {
        if (num1 == "0")
            return num2;
        if (num2 == "0")
            return num1;

        string result = "";
        int index1, index2;
        index1 = num1.length() - 1;
        index2 = num2.length() - 1;
        int carry = 0;
        while (index1 >= 0 || index2 >= 0)
        {
            int digit = carry;
            if (index1 >= 0)
                digit += int(num1[index1]) - int('0');
            if (index2 >= 0)
                digit += int(num2[index2]) - int('0');
            carry = digit / 10;
            digit = digit % 10;
            result = char(digit + int('0')) + result;
            index1--;
            index2--;
        }
        if (carry > 0)
            result = '1' + result;
        return result;
    }
    string multiplyWithNumber(string num, int b)
    {
        if (b == 0)
            return "0";
        if (num == "0")
            return "0";
        string result = num;
        for (int i = 0; i < b - 1; i++)
            result = this->add(result, num);
        return result;
    }
    string multiply(string num1, string num2)
    {
        if (num1 == "0")
            return "0";
        if (num2 == "0")
            return "0";
        string result = "";
        for (int i = 0; i < num2.length(); i++)
        {
            int digit = int(num2[i]) - int('0');
            result += "0";
            result = this->add(result, this->multiplyWithNumber(num1, digit));
        }
        return result;
    }
};

int main()
{
    string num1 = "999";
    string num2 = "999";
    cout << Solution().multiply(num1, num2);
    return 0;
}