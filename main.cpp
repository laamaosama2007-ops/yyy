
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ofstream outFile("students.txt");
    outFile << "Hadeer Mahmoud" << endl;
    outFile << "Youssef Ali" << endl;
    outFile << "Ahmed Mostafa" << endl;
    outFile << "Esraa Ebrahim" << endl;
    outFile.close();

    ifstream inFile("students.txt");
    vector<string> names;
    string line;

    while (getline(inFile, line)) {
        if (!line.empty()) {
            names.push_back(line);
        }
    }
    inFile.close();

    sort(names.begin(), names.end());

    ofstream sortedFile("sorted_students.txt");
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << endl;
        sortedFile << names[i] << endl;
    }
    sortedFile.close();

    return 0;
}
