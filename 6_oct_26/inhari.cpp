#include<iostream>
using namespace std;
class vehicle{
    public:
    string brand = "BMW"
    void hunk(){
        cout<<"hello vehivle";

    }

};
class cycle:
    public car{
    void display(){
        cout<<"this is cycle class";

    }


};
class car:
    public vechicle{
    string modal ="m5";
};
class privetjet:public cycle{
    void p(){
        cout<<"this is cycle class";
    }
}
int main (){
    car c;
    vechicle v;
        cout << c.brand << endl;
    cout << c.model << endl;
    c.hunk();

}