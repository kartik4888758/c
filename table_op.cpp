#include <iostream>
using namespace std;
class table{
    public:
    int a,i;

    int multi()
    {
        for(i=1;i<=10;++i)
        {
            cout<<a<<" x "<<i<<"="<<a*i<<endl;
        }
    }
};

int main(){
    table xyz;
     cout<<"enter a number for table:";
     cin>>xyz.a;

     cout<<xyz.multi()<<endl;
}
