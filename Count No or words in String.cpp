#include <iostream>
#include <string>
using namespace std;

class New {
    string s;
    int count = 1;  

public:
    void input() {
        cout << "\nEnter a string: ";
        getline(cin, s);  
    }

    void calculate() {
        for (size_t i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {  
                count++;
            }
        }
    }

    void display() {
        cout << "\nNumber of words: " << count << endl;
    }
};

int main() {
    New n;
    n.input();
    n.calculate();
    n.display();
    return 0;
}

