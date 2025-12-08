#include <iostream>
using namespace std;

int intro()
{
    int n = 24;
    cout <<"After surviving Arlong’s invasion of Cocoyashi Village, Keigan “Kei” Lee vows revenge.\n Beaten and left for dead, he spends eight years training in isolation to surpass his limits.";
    while(n != 0){
        cout << n << "\n";
        n--;
    }
    return 0;
}

int main()
{

intro();

    return 0;
}