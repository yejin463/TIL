#include <iostream>
using namespace std;

class USERDATA {
public:
    int nAge;
    char szName[30];
    USERDATA(int nAge, char* szName)
    {
        this->nAge = nAge;
        strcpy(this->szName, szName);
    }

    ~USERDATA() { ;} // cout << "Class ¼Ò¸ê"

    void Print()
    {
        cout << nAge << " " << szName << endl;
    }
};
int main() {
    int Age;
    char Name[10];
    cin >> Age >> Name;
    USERDATA user(Age, Name);
    user.Print();
    return 0;
}