#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "sbel_utils.h"

using namespace std;

char transform(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    return 100;
}

bytearr stoba(string &str) {
    bytearr res;
    stringstream ss(str);
    for (int i = 0; i + 2 <= str.size(); i += 2) {
        unsigned char v, h, l;
        ss >>  h >> l;
        h = transform(h);
        l = transform(l);
        v = (h<<4) + l;
        res.push_back(v);
    }
    return res;
}
