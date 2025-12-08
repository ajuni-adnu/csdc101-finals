#include <iostream>
using namespace std;

const int maxHP = 50;
const int maxEP = 5;
int EPRegen = 0;
int HP = 1;
int ATK = 10;
int END = 15;

int intro()
{
    int n = 0;
    int choice;
    cout <<"After surviving Arlong’s invasion of Cocoyashi Village, Keigan “Kei” Lee vows revenge.\n Beaten and left for dead, he spends eight years training in isolation to surpass his limits.\n";
    while(n != 48){
        cout << "\nMonth " << n << endl;
        n++;
        cout<<"Choose which skill to train:";
        cout << R"(
  1. HP, Each session improves durability.
  2. ATK, Physical strength grows more steadily.
  3. END, Represents defense/stamina.
  4. EP (Pool), Expands total energy capacity.
  5. EP Regen, Determines how much EP returns per turn.
)";
        cout << "What would you like to train? (1,2,3,4,5): "; cin >> choice;
        
        if (choice == 1){
        
        } else if (choice == 2){
        ATK += 11 + 2 * (n - 1);
        cout << ATK;
        } else if (choice == 3){
            
        } else if (choice == 4){
            
        } else if (choice == 5){
            
        } else {
        ATK = 11 + 2 * (n - 1);
        cout << ATK;
        }
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