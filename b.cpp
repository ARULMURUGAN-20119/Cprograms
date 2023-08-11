#include<iostream> 
using namespace std; 
class RunDCode 
{
    int x, y;
    public:
    RunDCode(int xx)
    {
         x = ++xx;
    }
    ~RunDCode()
    {
    cout<< x - 1 << " ";
    }
    void Display()
    {
    cout<< --x + 1 << " ";
    }
};
int main()
{
RunDCode objCode (5); 
objCode.Display(); 
int *p = (int*) &objCode; 
*p = 40; objCode.Display();
 return 0;
}