#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cmath>
using namespace std;

char yap;

// Player
string name = "Lee";
const int HP_max = 50, EP_max = 5;
// Order of arrays: HP_current[0], EP_current[1], EP_Regen[2], ATK[3], END[4]
int playerStats[5] = {1,0,0,10,15};

// Arlong
// Order of arrays: enemyHP_current[0], enemyHP_max[1], enemyATK[2], enemyEND[3], enemyPhase[4]
int enemyStats[5] = {2500, 2500, 520, 600, 1};
// int enemyHP_current;
// int enemyHP_max;
// int enemyATK;
// int enemyEND;
// int enemyPhase;


void showplayerStats(){
    cout << "\n" << name << "'s current status  \nfor the month: \n";
    cout << " HP: " << playerStats[0] << endl;
    cout << " EP: " << playerStats[1] << endl;
    cout << " Regen: " << playerStats[2] << endl;
    cout << " ATK: " << playerStats[3] << endl;
    cout << " END: " << playerStats[4] << endl;
}

void showenemyStats(){
    cout << "\n\n" << "Arlong HP: " << enemyStats[0] << endl;
    cout << "Arlong ATK: " << enemyStats[2] << endl;
    cout << "Arlong END: " << enemyStats[3] << endl;  
    cout << "Phase: " << enemyStats[4] << endl;
}


void intro(){

}

int trainingLoop()
{
    int n = 0;
    int choice;
    char response = toupper(response);
    
    if (yap == 'Y'){
        cout <<"[Scene 2: East Blue]\n After surviving Arlong’s invasion of Cocoyashi Village, Keigan “Kei” Lee vows revenge.\nBeaten and left for dead, he spends eight years training in isolation to surpass his limits.\n\n";
    } else {
        cout << "[Scene 2: East Blue]\n ";
        cout << R"(
 After drifting for days at sea, Keigan’s unconscious body is discovered by the Good Heart Pirates, 
a small and kind-hearted crew sailing the East Blue. They nurse him back to health and drop him off at a quiet,
uninhabited island, where he can recover and start anew. 
Before they leave, their captain tells him: 
“Live first. Then choose what to do with the life you still have.”

Alone on the island, Keigan stumbles upon an old training scroll, half-worn and salt-damaged,
titled “The Eight Inner Gates.” The scroll details an ancient form of body conditioning that channels life force into power,
at the risk of one’s own body. The technique fascinates him — and terrifies him. But he knows it’s his only path forward.

From that day on, training becomes his entire life.
Each day is a blur of sweat and strain:";
• mornings spent striking trees until his knuckles bleed,
• afternoons climbing cliffs or swimming against the island’s currents,
• nights spent meditating under waterfalls to stabilize his life energy.

Days turn to months, and months into years. 
The island changes with him — from a deserted shore to a battlefield of growth and self-discovery.
The Eight Gates become both a spiritual and physical journey, shaping him into a warrior who balances life, strength, and control.

)";
    }
    
    while(n <= 48){
        cout << "Month " << n << endl;

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
        
        switch(choice){
            case 1:
            if (playerStats[0] < HP_max){
                playerStats[0] += 21 + 4 * (n - 1);
                if (playerStats[0] > HP_max){
                playerStats[0] = HP_max;
                }
            }
            showplayerStats();
            cout << "Confirm? Y only: "; cin >> response;
            break;
            
            default:
            playerStats[3] += 11 + 2 * (n - 1);
            showplayerStats();
            cout << "Confirm? Y only: "; cin >> response;
            break;
            
            case 3:
            playerStats[4] += 15 + 3 * (n - 1);
            showplayerStats();
            cout << "Confirm? Y only: "; cin >> response;
            break;
            
            case 4:
            if (playerStats[1] < EP_max){
                playerStats[1] += 15 + 3 * (n - 1);
                if (playerStats[1] > EP_max){
                playerStats[1] = EP_max;
                }
            }
            showplayerStats();
            cout << "Confirm? Y only: "; cin >> response;
            break;
            
            case 5:
            playerStats[2] = 2.5 + 0.5 * (n - 1);
            showplayerStats();
            cout << "Confirm? Y only: "; cin >> response;
            break;
        }
        cout << "\n";
    }
    return n;
}

int bossFight()
{
    int turn = 1;
    int choice;
    
    if (yap != 'Y'){
cout << R"(
By the eighth year, Keigan’s transformation is complete. 
His once lean frame now carries the strength of countless battles with nature itself. 
The scroll lies torn and faded, but its lessons live within him.

With his body tempered and his heart steady, he sets out to sea, back to Cocoyashi Village.
His first destination isn’t Cocoyashi — but Baratie, the floating restaurant, 
where fate brings him face to face with Luffy and the Straw Hat Crew.

That encounter sets everything in motion once more.

    Press any key to continue: )"; cin >> choice;
        
cout << R"(
            Act 3 — Return to Cocoyashi (The Arlong Battle)
            
    After eight years of grueling training on the island, 
Keigan sets sail again—hardened, focused, and carrying Bell-mère’s faded headband as a promise. 
His path leads him to Baratie, the restaurant ship, where laughter and chaos greet him. 
He watches a lively crew move like a storm: the Straw Hat Pirates.

There he notices a sharp-eyed navigator whose manner and guarded expression stir something in him.
He can’t place her face after so many years; the recognition is an ache without a name. He keeps his distance.

The peace is shattered when Don Krieg and his armada attack.
In the chaos that follows, Dracule Mihawk appears, Zoro challenges him, and the fight ends with Zoro beaten but unbroken.
During the scramble, the navigator and her crew steal away aboard the Going Merry. 
Keigan hears her name for the first time—Nami—spoken by the fleeing pirates. The name lands in him like a stone.

| Keigan (quiet, to himself): “Nami…?”

The Straw Hats decide to pursue. 
Luffy and Sanji remain at Baratie for their own reasons, while Zoro, Usopp, Yosaku, and others give chase. 
Keigan, whose gut tells him where Nami will head, volunteers to join the pursuit. 
He rides with the group toward the Conomi Islands, steering them by instincts he kept buried for eight years.

    Press any key to continue: )"; cin >> choice;
    
cout << R"(

    [Arrival at Cocoyashi Village]
    
The group reaches Cocoyashi and finds a village hollowed by fear. 
They meet Nojiko, who—together with Luffy and Sanji (who arrive with the Baratie party and stand with the crew)—explains Nami’s past:
Bell-mère’s death, the tribute, Arlong’s rule, and Nami’s forced servitude. 
Nojiko tells the story plainly and painfully; the Straw Hats listen, stunned. 
When Nojiko mentions a name from the old days—Keigan—the crew turns. 
For a heartbeat, the village, the pirates, and the man who once was thrown into the sea are all connected.

| Usopp: “You—Keigan—the one Arlong tossed in the water?”
| Zoro: “And you survived. Not many would.”
| Luffy (to Kei): “So you’re here to help us?”
| Keigan (soft): “I promised I would come back. I’m here to end it.”

Keigan still doesn’t confront Nami immediately; the recognition comes later, in the heat of the battle with Arlong. 
But Nojiko’s telling anchors the crew’s purpose: this fight is about freeing Cocoyashi and saving Nami.

    Press any key to continue: )"; cin >> choice;
    
cout << R"(

    [The March to Arlong Park]
    
United, the Straw Hats and Keigan move toward Arlong Park. 
The corrupt local Marines and Fishman sentries try to block them,
but the crew cuts through the bureaucracy with blunt force and blunt words. 
As they approach Arlong Park, the gates loom like a promise and a threat: 
everything Keigan trained for — every two months, every year — has built to this single moment.




| Keigan (quiet, under his breath): “This time I bring what I should have had eight years ago.”


    Press any key to continue: )"; cin >> choice;
    
cout << R"(

They step into the arena where Arlong awaits, and the encounter begins...

    Press any key to continue: )"; cin >> choice;


 
    }
    
    cout << "\n=== BOSS FIGHT: ARLONG ===\n";
    cout << "After 8 years of training, Kei finally faces Arlong!\n\n";
    
    while (playerStats[0] > 0 && enemyStats[0] > 0)
    {
        cout << "\n═══════════════════════════════════════\n";
        cout << "Turn " << turn << endl;
        cout << "═══════════════════════════════════════\n";
        
        // Show current stats
        showplayerStats();
        showenemyStats();
        
        // Player's turn
        cout << "\n--- Your Turn ---\n";
        cout << "1. Attack\n";
        cout << "2. Check Status\n";
        cout << "Choice: ";
        cin >> choice;
        
        if (choice == 1) {
            // Calculate damage using your formula
            int playerDamage = ceil((playerStats[3] - enemyStats[3]) / 2.0);
            if (playerDamage < 0) playerDamage = 0; // Minimum 0 damage
            
            enemyStats[0] -= playerDamage;
            cout << "\nYou attack Arlong for " << playerDamage << " damage!\n";
            
            // Check if enemy is defeated
            if (enemyStats[0] <= 0) {
                enemyStats[0] = 0;
                cout << "\n═══════════════════════════════════════\n";
                cout << "ARLONG DEFEATED!\n";
                cout << "═══════════════════════════════════════\n";
                break;
            }
        } 
        else if (choice == 2) {
            // Just show stats and don't count as a turn
            showplayerStats();
            showenemyStats();
            turn--; // Don't count status check as a turn
        }
        else {
            cout << "\nInvalid choice! You hesitate and lose your turn.\n";
        }
        
        // Enemy's turn (only if still alive)
        if (enemyStats[0] > 0) {
            cout << "\n--- Arlong's Turn ---\n";
            
            // Calculate enemy damage using the same formula
            int enemyDamage = ceil((enemyStats[2] - playerStats[4]) / 2.0);
            if (enemyDamage < 0) enemyDamage = 0; // Minimum 0 damage
            
            playerStats[0] -= enemyDamage;
            cout << "Arlong attacks you for " << enemyDamage << " damage!\n";
            
            // Check if player is defeated
            if (playerStats[0] <= 0) {
                playerStats[0] = 0;
                cout << "\n═══════════════════════════════════════\n";
                cout << "YOU HAVE BEEN DEFEATED!\n";
                cout << "═══════════════════════════════════════";
                break;
            }
            
            if (enemyStats[0] >= 1601){
                enemyStats[2] = 520;
                enemyStats[3] = 600;
                enemyStats[4] = 1;
                cout << "\n| Arlong mocks Kei, relying on his raw strength.\n";
            } else if (enemyStats[0] <= 1600 && enemyStats[0] >= 901){
                enemyStats[2] = 550;
                enemyStats[4] = 2;
                cout << "\n| Arlong draws his massive sawblade weapon..\n";
            } else if (enemyStats[0] <= 900){
                enemyStats[2] = 600;
                enemyStats[3] = 660;
                enemyStats[4] = 3;
                cout << "\n| Arlong abandons his weapon, fighting with primal rage.\n";
            }
        
        }
        
        turn++;
    }
    
    return turn;
}

void ending()
{
    int choice = 0;
    if (playerStats[0] <= 0){
        cout << "\nKeigan (to himself): “Was it… all a dream? Can I really defeat Arlong?”\n";
        cout << "The vision dissolves into silence.\n";
        cout << "[End Scene — Reset Game]\n";
        intro();
    } else if (enemyStats[0] <= 0){
        // Arlong defeat
cout << R"(
        Act 4 – Cocoyashi’s Freedom and Beyond 
        
    [Scene 1: Nami and Keigan’s Freedom]
    
    Arlong Park crumbles as the dust clears.
The villagers of Cocoyashi pour out, their chains broken, laughter and disbelief mixing with tears. 
Amid the wreckage, Keigan collapses, his body drained from the toll of battle and the burden of opening the Gates. 
Nami rushes to him, her voice trembling between relief and worry.

Luffy, grinning as always, pulls Keigan out from the debris, casually brushing off his own injuries.
The victory feels surreal — Arlong’s tyranny is finally over. 
Genzo and the villagers begin their three-day celebration of freedom while the Straw Hats rest.

Keigan looks to the sky, quietly whispering his thanks to Bell-mère. The nightmare has ended.

    Press any key to continue: )"; cin >> choice;
        
cout << R"(
        Act 4 – Cocoyashi’s Freedom and Beyond 
        
    [Scene 1: Nami and Keigan’s Freedom]
    
    Arlong Park crumbles as the dust clears.
The villagers of Cocoyashi pour out, their chains broken, laughter and disbelief mixing with tears. 
Amid the wreckage, Keigan collapses, his body drained from the toll of battle and the burden of opening the Gates. 
Nami rushes to him, her voice trembling between relief and worry.

Luffy, grinning as always, pulls Keigan out from the debris, casually brushing off his own injuries.
The victory feels surreal — Arlong’s tyranny is finally over. 
Genzo and the villagers begin their three-day celebration of freedom while the Straw Hats rest.

Keigan looks to the sky, quietly whispering his thanks to Bell-mère. The nightmare has ended.

    Press any key to continue: )"; cin >> choice;
            
cout << R"(
    [Scene 2: Nami and Keigan’s Reunion]
    
    Cocoyashi Village wakes to laughter again. 
At Bell-mère’s grave, Nami and Keigan stand side by side, the weight of eight long years between them.
Nojiko and Genzo watch nearby, smiling knowingly. 

Nami places a bouquet of tangerine blossoms on the grave; 
Keigan bows deeply, promising that the village’s freedom will never be stolen again.

There’s no grand declaration, only quiet understanding — two children of the same home, finally free to breathe. 
Nojiko teases them softly, lightening the mood, and they share a moment of warmth under the morning sun.

    Press any key to continue: )"; cin >> choice;
        
cout << R"(
    [Scene 3: Nami’s Farewell]
    
    As the festival winds down, Nami prepares to leave with the Straw Hats. 
She visits Doctor Nako to have her tattoo tended and her wounds checked, 
while Genzo and Keigan make a final visit to Bell-mère’s grave.

Luffy interrupts their reflection with his trademark volume — shouting, laughing, and reminding them the ship’s about to sail.
The solemn moment turns cheerful as everyone joins in Luffy’s energy. 
Genzo gives Nami his blessing; Keigan watches silently, proud but wistful.

This isn’t a goodbye — it’s the start of something greater.

    Press any key to continue: )"; cin >> choice;
        
cout << R"(
    [Scene 4: Luffy Recruits Keigan]
    
    As the Going Merry prepares to depart,
Luffy turns to Keigan with that usual reckless grin.

| Luffy: “Oi, Keigan! You’re strong — come with us!”
Keigan freezes, caught off guard. The crew watches expectantly. After a pause, he smiles and nods.
| Keigan: “Guess I’ll handle the bookkeeping, then.”
The Straw Hats erupt in cheers. Nami smirks, already imagining her new navigator-partner and accountant in one.
Together, they board the ship — two hearts bound by the same promise of freedom.

Keigan glances back at the village one last time before setting sail with his new crew. 
The sea breeze feels lighter than ever.

    Press any key to continue: )"; cin >> choice;
           
cout << R"(
    [Scene 5: Bounty Reveal]
    
    Nami lounges on deck, reading the newspaper.
As she flips a page, two sheets flutter loose — Keigan catches them before they hit the floor. His eyes widen.

| Wanted Posters:
| “Straw Hat Monkey D. Luffy — 30,000,000 Beli”
| “*Jet* Lee Keigan — 5,000,000 Beli”
The crew bursts into laughter over Keigan’s nickname.
| Usopp: “Jet? What, you planning to fly next time?”
Keigan smirks then laughs. 
For the first time, his name carries weight across the seas.
The world now knows who he is — and who he sails with.

    Press any key to continue: )"; cin >> choice;
    }
}

void prerequisite(){
 cout << R"(
-- .-,--. .                                             .           
--  '|__/ |-. ,-. ,-. ,-.  ,-,  ,'`,'  . ,              '           
--  ,|    | | ,-| `-. |-'   /          -X-                          
--  `'    ' ' `-^ `-' `-'  '-`         ' `      :;                  
--                                                                  
--                                                                  
-- ,-, ,                     ,           .          ,.           
--  )|/  ,-. . ,-. ,-. ,-.   )   ,-. ,-. ' ,-.     / |   ,-. ,-. 
--   |\  |-' | | | ,-| | |  /    |-' |-'   `-.    /~~|-. |   |   
--  ,' ` `-' ' `-| `-^ ' '  `--' `-' `-'   `-'  ,'   `-' '   `-' 
--              ,|                                               
--              `'                                                     `'                                                  
)";

 cout << R"(
 
-- ,-_/            
-- '  | ,-. ," ,-. 
-- .^ | | | |- | | 
-- `--' ' ' |  `-' 
--          '      
               
    After surviving Arlong’s invasion of Cocoyashi Village, Keigan “Kei” Lee vows revenge. Beaten and left for dead, he spends eight years training in isolation to surpass his limits.
When he finally returns, Luffy and the Straw Hat crew are about to face Arlong. Kei joins their fight, wielding his newly learned Eight Gates techniques and refined taijutsu mastery.

    "Skip yapping?" Y/N. )";
    cin >> yap; cout << "\n";
}

/* Hackr mode 
    playerStats[3] = 2271;
    playerStats[4] = 1332;
    playerStats[0] = 50;
*/

int main()
{
    prerequisite();
    intro();
    trainingLoop();
    bossFight();
    ending();
    return 0;
}