#include <iostream>
using namespace std;

class B
{
public:
    void showB()
    {
        cout << "Class B" << endl;
    }
};

class C
{
public:
    void showC()
    {
        cout << "Class C" << endl;
    }
};

class D : public B, public C
{
public:
    void showD()
    {
        cout << "Class D" << endl;
    }
};

int main()
{
    D obj;

    obj1.showB();
    obj1.showC();
    obj1.showD();

    return 0;
}