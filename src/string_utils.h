//
// Created by zichao.zhang on 2019/9/11.
//

#ifndef RENDER_TEST_STRING_UTILS_H
#define RENDER_TEST_STRING_UTILS_H

#include <string>
#include <vector>

std::vector<std::string> split(const std::string str, const char *split) {
    std::vector<std::string> list;
    int off = 0;
    int next = 0;
    while ((next = str.find(split,off)) != -1) {
        std::string s = str.substr(off, next-off);
        list.push_back(s);
        off = next + 1;
    }
    // If no match was found, return this
    if (off == 0){
        list.push_back(str);
        return list;
    }
    // Construct result
    list.push_back(str.substr(off,str.length()));
    return list;
}

#endif //RENDER_TEST_STRING_UTILS_H
