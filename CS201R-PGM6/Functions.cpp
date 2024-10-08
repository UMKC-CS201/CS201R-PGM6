#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Functions.h"
#include "Media.h"

using namespace std;

bool isDigits(string str1) {
    return (str1.find_first_not_of("1234567890") == string::npos);
}
 
int readMediaList(istream& inFile, ostream& outFile, vector<Media*>& mediaLib) {
    return 0;
}