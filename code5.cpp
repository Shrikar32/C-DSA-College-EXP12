#include<iostream>
using namespace std;
int count=0;
int destroy=5;

class destruct{
public:
destruct()
{
    count++;
    cout<<"No. of object created: "<<count<<endl;
}
~destruct()
{
    --destroy;
    cout<<"No. of object destroyed: "<<destroy<<endl;
}
};

int main()
{
destruct aa,bb,cc;
{ destruct dd;
}
return 0;
}