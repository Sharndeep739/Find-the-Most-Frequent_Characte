#include <iostream>
#include <string>
using namespace std;

class test {
public:
    void number(string name) {
        int maxFreq = 0;
        char maxChar = '\0';

        for (int i = 0; i < name.length(); i++) {
            int sum = 0;
            for (int j = 0; j < name.length(); j++) {
                if (name[i] == name[j]) {
                    sum++;
                }
            }

            // agar current char ki frequency max se zyada hai
            if (sum > maxFreq) {
                maxFreq = sum;
                maxChar = name[i];
            }
        }

        cout << "Most frequent character: " << maxChar << endl;
        cout << "Frequency: " << maxFreq << endl;
    }
};

int main() {
    test obj;
    string name = "sharndeepsinghhh";
    obj.number(name);
    return 0;
}
