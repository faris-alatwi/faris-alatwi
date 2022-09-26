#include <iostream>
#include <cmath>
using namespace std;
class faris
{
    int f,i=0,n,desmal=0;
    public:
    faris();
    void x();
    ~faris();
};
faris::faris()
{
    cout<<"enter num :"<<endl;
    cin>>f;
}
void faris::x()
{
    while(f!=0)
    {
        n=f%10;
        f=f/10;
        desmal=desmal+ n * pow(2,i);
        i++;
    }
}
faris::~faris()
{
    cout<<desmal<<endl;
}
int main()
{
    faris obj;
    obj.x();

    return 0;
}

