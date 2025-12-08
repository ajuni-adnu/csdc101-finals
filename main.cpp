#include <iostream>
using namespace std;

int intro()
{
    int n = 48;
    cout <<"After surviving Arlong’s invasion of Cocoyashi Village, Keigan “Kei” Lee vows revenge.\n Beaten and left for dead, he spends eight years training in isolation to surpass his limits.\n";
    while(n != 0){
        cout << n << "\n";
        n--;
        cout<<"Choose which skill to train:";
        cout << R"(
  1. HP, Each session improves durability.
  2. ATK, Physical strength grows more steadily.
  3. END, Represents defense/stamina.
  4. EP (Pool), Expands total energy capacity.
  5. EP Regen, Determines how much EP returns per turn.
            )";
    }
    return n;
}

int bossFight()
{
    return 0;
}



int main()
{

intro();

    return 0;
}