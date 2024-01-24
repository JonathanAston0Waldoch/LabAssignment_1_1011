#include <iostream>
#include <string>
using namespace std;



class Platform
{
public:
	Platform()
	{
		for (int i = 0; i < PlatformCount; i++)
		{
			cout << "\n" << platforms[i].name;
		}
	}
	void setPlatform(string name, string Manufacturer)
	{
		this->name = name;
		this->Manufacturer = Manufacturer;
		
	}
	
	
private:
	string name;
	string Manufacturer;
	// Array of games
	int PlatformCount;
	Platform* platforms;
	
	
};

class Game
{
public:
	Game()
	{
		for (int i = 0; i < gameCount; i++)
		{
			cout << "\n" << games[i].Gname;
		}
	}
	void setGame(string Gname, string Publisher, string Developer)
	{
		this->Gname = Gname;
		this->Publisher = Publisher;
		this->Developer = Developer;
	}
	Game* games;
private:
	string Gname;
	string Publisher;
	string Developer;
	int gameCount;
	
};

class Achievement
{
public:
	Achievement()
	{
		for (int i = 0; i < achievementCount; i++)
		{
			cout << "\n" << achievements[i].Title;
		}
	}
	void setAchievement(string Title, string Description, string scoreValue)
	{
		this->Title = Title;
		this->Description = Description;
		this->scoreValue = scoreValue;
	}
private:
	string Title;
	string Description;
	string scoreValue;
	int achievementCount;
	Achievement* achievements;
	
};

int main()
{
	int menuChoice = 0;
	int gameCount = 0;
	int platformCount = 0;
	int achievementCount = 0;
	int userChoice;
	string gameInfo;
	string game_arr{};
	string Gname;
	string Publisher;
	string Developer;
	string achievementInfo;
	string achievement_arr{};
	string Title;
	string Description;
	string scoreValue;
	string PlatformInfo;
	string platform_arr{};
	string name;
	string Manufacturer;
	
	cout << "Welcome to your personal achievement tracker!" << endl;

	while (menuChoice < 9)
	{
		
		cout << "Would you like to add a Game, Achievement or Platform?" << "\n" << "type 1 for Game, 2 for Achievement and 3 for Platform" << endl;
		cout << "To see the current information already submitted press: 5 for Game, 6 for Achievement, 7 for Platform and 8 for all information!" << endl;
		cin >> userChoice;

		if (userChoice == 1)
		{
			gameCount++;
			Game* games = new Game[gameCount];
			cout << "Please type the name of your game!" << endl;
			cin >> Gname;
			cout << "Please enter the Publisher of your game!" << endl;
			cin >> Publisher;
			cout << "Please enter the Developer of your game!" << endl;
			cin >> Developer;
			cout << " Name = " << Gname << " Publisher = " << Publisher << " Developer = " << Developer << endl;
			cout << "If this information is all correct press 4 ! " << endl;
			cin >> userChoice;
			if (userChoice == 4) {
				gameInfo = " Name: " + Gname + " Publisher: " + Publisher + " Developer: " + Developer;
				game_arr.append(gameInfo);
			}
			cout << "the game you added was:" << game_arr << endl;

		}
		else if (userChoice == 2)
		{
			achievementCount++;
			Achievement* achievements = new Achievement[achievementCount];
			cout << "Please type the Title of the achievement!" << endl;
			cin >> Title;
			cout << "Please enter the Description of the achievement!" << endl;
			cin >> Description;
			cout << "Please enter the scoreValue of the achievement!" << endl;
			cin >> scoreValue;
			cout << " Title = " << Title << " Description = " << Description << " ScoreValue = " << scoreValue << endl;
			cout << "If this information is all correct press 4 ! " << endl;
			cin >> userChoice;
			if (userChoice == 4) {
				achievementInfo = " Title: " + Title + " Description: " + Description + " ScoreValue: " + scoreValue;
				achievement_arr.append(achievementInfo);
			}

		}
		else if (userChoice == 3)
		{
			platformCount++;
			Platform* Platforms = new Platform[platformCount];
			cout << "Please type the name of the Platform!" << endl;
			cin >> name;
			cout << "Please enter the Manufacturer of the Platform!" << endl;
			cin >> Manufacturer;
			cout << " Name = " << name << " Manufacturer = " << Manufacturer  << endl;
			cout << "If this information is all correct press 4 ! " << endl;
			cin >> userChoice;
			if (userChoice == 4) {
				PlatformInfo = " Name: " + name + " Manufacturer: " + Manufacturer ;
				platform_arr.append(PlatformInfo);
			}
		}
		else if (userChoice == 5)
		{
			cout << game_arr << endl;
		}
		else if (userChoice == 6)
		{
			cout << achievement_arr << endl;
		}
		else if (userChoice == 7)
		{
			cout << platform_arr << endl;
		}
		else if (userChoice == 8)
		{
			cout << " Games: " << game_arr << "\n" << "Achievements: " << achievement_arr << "\n" << "Platforms:" << platform_arr << endl;
		}
		else
		{
			return 0;
		}
		cout << "If you would like to continue press any number less than 9!" << endl;
		cin >> userChoice;
	}
	
	return 0;
}