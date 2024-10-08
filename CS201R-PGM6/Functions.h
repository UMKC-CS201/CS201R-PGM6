#pragma once
#include <vector>
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

#include "Media.h"
using namespace std;

bool isDigits(string str1);
int  readMediaList(istream &i, ostream &o, vector<Media*> &m);