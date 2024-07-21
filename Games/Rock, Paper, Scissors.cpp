#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice is: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "COM choice is: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}
char getUserChoice()
{

    char player;
    cout << "********Rock-paper-Scissors game!*********\n";

    do
    {
        cout << "Choose one of the choices.\n";
        cout << "***************************\n";
        cout << "'r' for Rock\n";
        cout << "'p' for Paper\n";
        cout << "'s' for Scissors\n";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice()
{
    srand(time(0));
    int num = (rand() % 3) + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;
    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "*it's a fucking tie brothers!\n";
        }
        else if (computer == 'p')
        {
            cout << "*You lose homey!\n";
        }
        else
        {
            cout << "*You win brooo!\n";
        }
        break;

    case 'p':
        if (computer == 'r')
        {
            cout << "*You win brooo!\n";
        }
        else if (computer == 'p')
        {
            cout << "*it's a fucking tie  brothers!\n";
        }
        else
        {
            cout << "*You lose homey!\n";
        }
        break;

    case 's':
        if (computer == 'r')
        {
            cout << "*You lose homey!\n";
        }
        else if (computer == 'p')
        {
            cout << "*You win brooo!\n";
        }
        else
        {
            cout << "*it's a fucking tie  brothers!\n";
        }
        break;
    }
}