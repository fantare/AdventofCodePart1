#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;

ifstream inFile;
string line;

int main()
{


    int firstNum = -1, sum = 0;
    string num1, num2;
  
    inFile.open("aocIn.txt");
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            for (int i = 0; i < line.length(); i++) {
                if (isdigit(line[i]) && firstNum == -1) {
                    num1 = line[i];
                    num2 = num1;
                    firstNum = i;
                }
                else if (isdigit(line[i])) {
                    num2 = line[i];

                }
            }
            firstNum = -1;

            if (!num1.empty() && num2.empty()) {
                sum += stoi(num2 + num2);
            }
            else if (!num1.empty() && !num2.empty()) {
                sum += stoi(num1 + num2);
            }

        }
    }

    std::cout << sum << endl;

    inFile.close();
    return 0;
}