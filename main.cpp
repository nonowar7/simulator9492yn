
#include <iostream>

#include "Expression.h"
#include "Num.h"
#include "Plus.h"
#include "Minus.h"
#include "Divide.h"
#include "Multiply.h"
#include "Neg.h"
#include "Var.h"
#include "ShuntingYard.h"

#include <map>
#include <list>
#include <string>

using namespace std;

// just a general main to see this works...

int main() {

    try {

        string passed = " passed";
        string failed = " failed";
        string result;
        int count=0;

        map<string,Expression*> map1;
        map1["x"] = new Num(7);
        map1["y"] = new Num(3);
        map1["abc"] = new Num(-1);
        map1["rt#"] = new Num(4);

        string str1 = "50000+200-10";  // 50190     works
        string str2 = "5*3*2/6";   // 5       works
        string str3 = "5*(4+3)";   // 35      works
        string str4 = "(x+y-abc)";    // 11       works
        string str5 = "((x-y)/2)";      // 2         works
        string str6 = "14+32/16+1.75+4.25";   // 22        works
        string str7 = "(1)+(-2)+(-10)";    // -11     works
        string str8 = "1.5+3/6";    // 2                works
        string str9 = "5*5/5*3";      // 15           works
        string str10 = "5*-2";    // -10           works
        string str11 = "5/-(3-2)";      // -5              works
        string str12 = "5+3*1-2+3+10+11-10-11-3+2-3-4+(3*3)-9";  // 1    works
        string str13 = "-1 +2-4 + 5-6";       //-4        works
        string str14 = "-1--9";       //    8              works
        string str15 = "-1..9";       //    error         works
        string str16 = "-1**3";       //    error         w
        string str17 = "4/ab.c";       // error     works
        string str18 = "4/(abc-abc)";    // error      works
        string str19 = "x/0";          // error        works
        string str20 = "2+rt#";    // error          works
        string str21 = "*2";    // error          works

        ShuntingYard* sy = ShuntingYard::getInstance();

        sy->calculateSYard(str1,map1)->calculate() == 50190 ? (result = passed) : (result = failed);
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str2,map1)->calculate() == 5 ? (result = passed) : (result = failed);
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str3,map1)->calculate() == 35 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str4,map1)->calculate() == 11 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str5,map1)->calculate() == 2 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str6,map1)->calculate() == 22 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str7,map1)->calculate() == -11 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str8,map1)->calculate() == 2 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str9,map1)->calculate() == 15 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str10,map1)->calculate() == -10 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str11,map1)->calculate() == -5 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str12,map1)->calculate() == 1 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str13,map1)->calculate() == -4 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        sy->calculateSYard(str14,map1)->calculate() == 8 ? result = passed : result = failed;
        count++;
        cout << count << result << endl;

        try {
            sy->calculateSYard(str15,map1)->calculate();
            count++;
            result = failed;
            cout << count << result << endl;
        } catch (...) {
            count++;
            result = passed;
            cout << count << result << endl;
            sy->cleanStackAndQueue();
        }



        try {
            sy->calculateSYard(str16,map1)->calculate();
            count++;
            result = failed;
            cout << count << result << endl;
        } catch (...) {
            count++;
            result = passed;
            cout << count << result << endl;
            sy->cleanStackAndQueue();
        }

        try {
            sy->calculateSYard(str17,map1)->calculate();
            count++;
            result = failed;
            cout << count << result << endl;
        } catch (...) {
            count++;
            result = passed;
            cout << count << result << endl;
            sy->cleanStackAndQueue();
        }

        try {
            sy->calculateSYard(str18,map1)->calculate();
            count++;
            result = failed;
            cout << count << result << endl;
        } catch (...) {
            count++;
            result = passed;
            cout << count << result << endl;
            sy->cleanStackAndQueue();
        }

        try {
            sy->calculateSYard(str19,map1)->calculate();
            count++;
            result = failed;
            cout << count << result << endl;
        } catch (...) {
            count++;
            result = passed;
            cout << count << result << endl;
            sy->cleanStackAndQueue();
        }

        try {
            sy->calculateSYard(str20,map1)->calculate();
            count++;
            result = failed;
            cout << count << result << endl;
        } catch (...) {
            count++;
            result = passed;
            cout << count << result << endl;
            sy->cleanStackAndQueue();
        }

        try {
            sy->calculateSYard(str21,map1)->calculate();
            count++;
            result = failed;
            cout << count << result << endl;
        } catch (...) {
            count++;
            result = passed;
            cout << count << result << endl;
            sy->cleanStackAndQueue();
        }

    } catch (...) {
        cout << "illegal mathematical expression" << endl;
    }

    return 0;
}