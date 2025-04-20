#include<iostream>
using namespace std;
int find (int num1, int num2, int num3)
{
    if (num1>num2 && num1>num3)
    {

        cout << num1<< "is a maximum num"<< endl;
    }
    if (num2>num1 && num2>num3)
    {

        cout << num2<< "is a maximum num"<< endl;
    }

    else {
        cout << num3 << "is a maximum num" << endl;
    }
}
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    find(x,y,z);
    return 0;
}