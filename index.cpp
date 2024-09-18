#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct FootballTeam {
    string name;        // Team's name
    string city;        // Home city of the team
    string stadium;     // Home stadium of the team
};

// Function to initialize and return a list of football teams
vector<FootballTeam> createTeams() {
    vector<FootballTeam> teams;

    // Manually adding each football team
    teams.push_back({"CKlein Stars", "Nairobi", "CKlein Arena"});
    teams.push_back({"Wolves FC", "Nairobi", "Wolves Stadium"});
    teams.push_back({"Dolphins FC", "Mombasa", "Dolphins Stadium"});
    teams.push_back({"Sea Horses FC", "Mombasa", "Sea Horses Arena"});
    teams.push_back({"Sharks United", "Kisumu", "Sharks Field"});
    teams.push_back({"Lake Basin FC", "Kisumu", "Lake Basin Stadium"});
    teams.push_back({"Thika United", "Thika", "Thika Field"});
    teams.push_back({"Mavuno Comrades FC", "Thika", "Mavuno Grounds"});
    teams.push_back({"Nakuru FC", "Nakuru", "Nakuru Field"});
    teams.push_back({"Ostrich Associates", "Nakuru", "Ostrich Field"});

    return teams;
}

int main() {
    // Get the list of football teams
    vector<FootballTeam> teams = createTeams();
    
    // Typically, further logic would go here, such as displaying teams or generating fixtures.
   
    
    return 0;
}