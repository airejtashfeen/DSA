#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    vector<string> names;
    unordered_map<string, int> nameToAge;

    cout << "Enter names (type '-1' to finish):" << endl;
    
    string name;
    while (true) {
        getline(cin, name);
        
        if (name == "-1") break;
        
        names.push_back(name);
    }

    cout << "Enter age for each name:" << endl;
    for (const string& name : names) {
        int age;
        cout << "Enter age for " << name << ": ";
        cin >> age;
        cin.ignore(); 
        nameToAge[name] = age;
    }

    cout << "\nNames and their ages:" << endl;
    for (const auto& entry : nameToAge) {
        cout << "Name: " << entry.first << ", Age: " << entry.second << endl;
    }

    return 0;
}
