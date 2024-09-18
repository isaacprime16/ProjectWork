#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

// Defines structure for team
struct FootballTeam {
    string teamName;
    string localTown;
    string homeStadium;
};

// Function to read teams from csv
vector<FootballTeam> getTeamsFromCSV(const string& filename) {
    vector<FootballTeam> teams;
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Oops! Could not open the file: " << filename << endl;
        return teams;
    }

    string line;
    // Skip the header line
    getline(file, line);

    // Read the CSV line by line
    while (getline(file, line)) {
        stringstream ss(line);
        string teamName, localTown, homeStadium;

        // Assuming the CSV format is: teamName,localTown,homeStadium
        getline(ss, teamName, ',');
        getline(ss, localTown, ',');
        getline(ss, homeStadium, ',');

        // Add the team to the list
        teams.push_back({teamName, localTown, homeStadium});
    }

    file.close();
    return teams;
}

int main() {
    // Set the file path to your CSV file
    string filename = R"(C:\CSV Match fixtures\teams_csvFile.csv)";
    // Get the teams from the CSV file
    vector<FootballTeam> teams = getTeamsFromCSV(filename);

    // Output the list of teams
    cout << "Here are some exciting football teams and where you can catch them in action!" << endl << endl;
    for (const auto& team : teams) {
        cout << "Introducing " << team.teamName << " from " << team.localTown << "!" << endl;
        cout << "You can watch their thrilling matches at " << team.homeStadium << "." << endl;
        cout << "----------------------------------------------------------" << endl;
    }

    cout << endl << "That's the list of teams! Stay tuned for more football action!" << endl;

    return 0;
}