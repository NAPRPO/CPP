#include <iostream>
#include <string>

using namespace std;
class Mother {
public:
    Mother (void)       {cout<<"Mother: no data\n"; }
    Mother  (char* name){cout<<"Mother: "<<name<<endl;}
};

class Daughter: public Mother {
public:
    Daughter(char* name)        {cout << "Daughter:  "<< name <<endl;}
};

class Son : public Mother {
public:
    Son ( char* name): Mother (name)
    { cout << "Son:       Mother's name:" << name << endl;}


};

int main()
{
    Daughter    Pinya ("Pinya");
    Son         daniel  ("Retta");
    return 0;
}

