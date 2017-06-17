/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jose
 *
 * Created on June 13, 2017, 3:40 AM
 */
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#define TEXT "Hello World\r\n"
/*
 * 
 */
int main(int argc, char** argv)
{
    int ret = -1;
    
    printf(TEXT);
    cout << TEXT << endl;
    cout << argc << endl;
    cout << argv[0] << endl;
    ret = 0;
    return ret;
}

