#include <iostream>
using namespace std;
class calculator
{
public:
    int sub(int a, int b)
    {
        return a - b;
    }
    int sub(int a, int b, int c)
    {
        return a - b - c;
    }
    int sub(float a, float b, float c)
    {
        return a - b - c;
    }
};
int main()
{
    calculator obj;
    cout << obj.sub(2, 4) << endl;
    cout << obj.sub(9, 4, 5) << endl;
    cout << obj.sub(9.9f, 3.4f, 2.3f) << endl;
    return 0;
}
