#include <iostream>
#include <string>

// Global variable to store the user's name
std::string playerName;

// 5 Function declarations follow
void introduction();
void gameEngine();
void spearfishEarly();
void spearfishLate();
void endStory();
std::string getResultMessage(int choice); // Function that returns a string based on the choice

int main() 
{
    introduction();// Introduction function to open 1st since it pairs well with gameEngine function
    gameEngine(); // gameEngine function used to guide the story 
    return 0;    // Exit function
}

// 5 Function definitions follow

void introduction()
{
    std::cout << "Let's take the day off and go spearfishing!\n";
    std::cout << "Welcome aboard, what's your name? ";
    std::getline(std::cin, playerName);
    std::cout << "Nice to meet you, " << playerName << "!\n";
}

void gameEngine()
{
    int choice;
    std::cout << "You have two options today:\n";
    std::cout << "1. Go on a boat to go spearfish at 3am\n";
    std::cout << "2. Go on a boat to go spearfish at 10am\n";
    std::cout << "Enter 1 or 2 to choose: ";
    std::cin >> choice;

    std::string resultMessage = getResultMessage(choice); // Here's our result message based on the user's choice
    std::cout << resultMessage << std::endl;

    if (choice == 1) // Our choice conditionals follow
    {   
        spearfishEarly(); // Function
    }
    else if (choice == 2)
    {
        spearfishLate();  // Function
    }
    else 
    {
        std::cout << "As a result you're not diving today lol.  Restart the game and choose either 1 or 2.\n";
    }
}

void spearfishEarly()
{
    std::cout << "You wake up before dawn, feeling rough and uncertain about going this early yet, you go.\n";
    std::cout << "The boat launches and you head out to sea and there's no turning back. The seas are calm and you find peace.\n";
    std::cout << "You finish suiting up during the dark hours because there are bluefin tuna boiling next to the boat. You jump in and shoot 2 triple-digit BFT at 5:30am and return home victorious!\n";
    endStory();
}

void spearfishLate()
{
    std::cout << "You sleep in a bit and decide to go spearfishing later in the morning.\n";
    std::cout << "The light is comforting, yet the wind has picked up, and seas are choppy and the fish are less active by the time you make it out there.\n";
    std::cout << "After some time, you manage to catch a 30lb yellowtail and enjoy the rest of your day at sea.\n";
    endStory();
}

void endStory()
{
    std::cout << "Come back for another dive sometime, " << playerName << "! Ejoy the fresh otoro sashimi that awaits you.\n";
    std::cout << "We accept tips and yelp reviews!\n";
}


std::string getResultMessage(int choice) // Our return function from the users choice 
{ 
    if (choice == 1) // Conditionals follow 
    {
        return "You chose to go spearfishing at 3am. It's going to be an early start!";
    }
    else if (choice == 2) 
    {
        return "You chose to go spearfishing at 10am. Enjoy your sleep-in!";
    }
    else 
    {
        return "Invalid choice. Please restart the game and choose either 1 or 2.";
    }
}
