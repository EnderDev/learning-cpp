#include <iostream>
#include <string>

using namespace std;

int main() {
    string greeting = "what the fuck";
    getline(cin, greeting);
    greeting.pop_back();
    greeting.replace(0, 4, "heaven");
    cout << greeting;
}