#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void InputData(string Intro[], string PlayerName[], string PlayerQuestion1[], string PlayerQuestion2[], string PlayerQuestion3[], string PlayerQuestion4[], int PlayerAnswer1[], int PlayerAnswer2[], int PlayerAnswer3[], int PlayerAnswer4[], int Score[], int &size, const int &a);
void DisplayPlayerData(string Intro[], string PlayerName[], string PlayerQuestion1[], string PlayerQuestion2[], string PlayerQuestion3[], string PlayerQuestion4[], int PlayerAnswer1[], int PlayerAnswer2[], int PlayerAnswer3[], int PlayerAnswer4[], int Score[], int &size);
double CalculateTotalScore(string PlayerName[], int Score[], int &size);

 

class NavSeal
{
public:
    string desc;
    void printdesc()
    {
        cout << desc << "Hey, it sounds like you might make a good fit as a Navy Seal. If you really plan on taking this route, I wish the best of luck to you!\n\n";
    }
};

class Infantry
{
public:
    string desc;
    void printdesc()
    {
        cout << desc << "I would suggest joining an infantry unit with the US Marines or US Army. They even offer specialized infantry units that way you don't miss out on the action!\n\n";
    }
};

class OthOptions
{
public:
    string desc;
    void printdesc()
    {
        cout << desc << "Look, I know being a US Navy Seal sounds like the coolest thing ever. But it's more than just admiration that brings these soldiers together. You should try your hand in another career.\n\n";
    }
};

int main()
{
    const int a = 1;
    string Intro[a];
    string PlayerName[a];
    string PlayerQuestion1[a];
    string PlayerQuestion2[a];
    string PlayerQuestion3[a];
    string PlayerQuestion4[a];
    int PlayerAnswer1[a];
    int PlayerAnswer2[a];
    int PlayerAnswer3[a];
    int PlayerAnswer4[a];
    int Score[a];
    int size = 0;

    InputData(Intro, PlayerName, PlayerQuestion1, PlayerQuestion2, PlayerQuestion3, PlayerQuestion4, PlayerAnswer1, PlayerAnswer2, PlayerAnswer3, PlayerAnswer4, Score, size, a);

    DisplayPlayerData(Intro, PlayerName, PlayerQuestion1, PlayerQuestion2, PlayerQuestion3, PlayerQuestion4, PlayerAnswer1, PlayerAnswer2, PlayerAnswer3, PlayerAnswer4, Score, size);

    double average = CalculateTotalScore(PlayerName, Score, size);

    cin.ignore();
    cin.get();
    return 0;
}

void InputData(string Intro[], string PlayerName[], string PlayerQuestion1[], string PlayerQuestion2[], string PlayerQuestion3[],string PlayerQuestion4[], int PlayerAnswer1[], int PlayerAnswer2[], int PlayerAnswer3[], int PlayerAnswer4[], int Score[], int &size, const int &a)
{
    //A while loop to check for the input to stop the program, and once the max number of players is met then the loop breaks
    while (size < a)
    {

        cout << "Have you ever wondered if you could be apart of America's elite Navy Seals?\nType your name below to start and you will answer 4 questions to find out.\nBased on each number you type for your answer, you must keep up with them as\nyou will type in your total score at the end.\n\n";

        cout << "Enter Player Name (Q to quit): ";
        cin >> PlayerName[size];

        cout << "\nOn a scale of 1-10, how scared are you of heights?\n";
        cin >> PlayerAnswer1[size];

        if (PlayerAnswer1[size] >= 1 && PlayerAnswer1[size] <= 3)
        {
            cout << "Now that's a start! Navy Seals do a lot of jumping out of helicopters, especially during discreet missions.\n";
        }
        else if (PlayerAnswer1[size] >= 4 && PlayerAnswer1[size] <= 6)
        {
            cout << "There's nothing wrong with that. Look most people have never jumped out of a helicopter and probably will\nnever do so in their life. Just be ready when the time calls for it.\n";
        }
        else if (PlayerAnswer1[size] >= 7 && PlayerAnswer1[size] <= 10)
        {
            cout << "Most special forces units jump out of planes and helicopters. The only way you can shake off your fear of\nheights is to go skydiving. Good luck with that!\n";
        }
        //end of answer1

        cout << "\nOn a scale of 1-10, how afraid are you of the water?\n";
        cin >> PlayerAnswer2[size];

        if (PlayerAnswer2[size] >= 1 && PlayerAnswer2[size] <= 3)
        {
            cout << "Really good! Since you chose this low my guess is that maybe you were or are on the swim team at your high\nschool or college. This is definitely a plus.\n";
        }
        else if (PlayerAnswer2[size] >= 4 && PlayerAnswer2[size] <= 6)
        {
            cout << "The one thing about swimming is that it's a skill rather than a trait. So, you can always improve by taking\nswim lessons or constantly getting acquainted with the water by yourself day by day. It's all about what you will do with your time.\n";
        }
        else if (PlayerAnswer2[size] >= 7 && PlayerAnswer2[size] <= 10)
        {
            cout << "You may want to join another branch of special forces as the Navy Seals are known to be fish in the water.\nTry another special force unit that focuses their missions primarily on land or join any military branches' infantry.\n";
        }
        //end of answer2

        cout << "\nOn a scale of 1-10, how bad are you at adapting to rapidly changing situations\n";
        cin >> PlayerAnswer3[size];

        if (PlayerAnswer3[size] >= 1 && PlayerAnswer3[size] <= 3)
        {
            cout << "That's very good. On any type of special forces mission, you never know when and where a bullet can come from\nat any time. Also, IED or planted explosives are very common in enemy territories and have a high death toll amongst American soldiers.\nYou will have to shake things off and stay focused.\n";
        }
        else if (PlayerAnswer3[size] >= 4 && PlayerAnswer3[size] <= 6)
        {
            cout << "You should start doing work that pushes your body to have to adapt. Or if your day job isn't exciting enough,\nfind a job that makes you have to multitask.\n";
        }
        else if (PlayerAnswer3[size] >= 7 && PlayerAnswer3[size] <= 10)
        {
            cout << "If you are that bad at adapting to different situations, you might not like change at all. If that's the case,\nspecial forces is not for you.\n";
        }
        //end of answer3

        cout << "\nOn a scale of 1-10, with 10 meaning your way out of shape, how weak is your physical fitness?\n";
        cin >> PlayerAnswer4[size];

        if (PlayerAnswer4[size] >= 1 && PlayerAnswer4[size] <= 3)
        {
            cout << "You sound like a trooper. Being in decent shape is a solid start to things as a Navy Seal. Now ofcourse there is\nno such thing as being too fit, so there is always work to do. Don't forget that.\n";
        }
        else if (PlayerAnswer4[size] >= 4 && PlayerAnswer4[size] <= 6)
        {
            cout << "This isn't too bad as it sounds like you can't put down that simple burger that you love. Stick to clean foods\nand tune your workouts up a notch.\n";
        }
        else if (PlayerAnswer4[size] >= 7 && PlayerAnswer4[size] <= 10)
        {
            cout << "Now it sounds lke you can't put down a simple burger or two.  You need to be doing pullups, situps, burpees, pushups,\nand the whole nine yards. Now get off your ass and get to work!\n";
        }
        //end of answer 4.

        //if statements for the input q or Q to exit the program
        if (PlayerName[size] == "q" || PlayerName[size] == "Q")
        {
        }

        //if statement for when the max amout of the array is met to quit the program
        if (size == a)
        {
            break;
        }

        //if both the IF statements are not met then the program asks for the score of the player
        cout << "Enter total score for " << PlayerName[size] << ": ";
        cin >> Score[size];
        if (Score[size] >= 4 && Score[size] <= 12)
        {
            NavSeal n;
            n.printdesc();
        }
        else if (Score[size] >= 16 && Score[size] <= 24)
        {
            Infantry i;
            i.printdesc();
        }
        else if (Score[size] >= 28 && Score[size] <= 40)
        {
            OthOptions o;
            o.printdesc();
        }
        size = size + 1;
    }
    cout << endl;
}

void DisplayPlayerData(string Intro[], string PlayerName[], string PlayerQuestion1[], string PlayerQuestion2[], string PlayerQuestion3[],string PlayerQuestion4[], int PlayerAnswer1[], int PlayerAnswer2[], int PlayerAnswer3[], int PlayerAnswer4[], int Score[], int &size)
{

    cout << "  NAME"
         << "\t"
         << "SCORE" << endl;

    //for loop to execute and display all the players and their scores for the variable size
    for (int y = 0; y < size; y++)
    {
        cout << PlayerName[y] << "\t    " << Score[y] << endl;
    }
    cout << endl;
}

//CalculateTotalScore function
double CalculateTotalScore(string PlayerName[], int Score[], int &size)
{
    double sum = 0;

    //for loop to execute the equation for all values that are saved in Score then divided by the size variable
    for (int w = 0; w < size; w++)
    {

        sum = (sum + Score[size]);
    }
    return (sum);
}