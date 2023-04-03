#ifndef LOGGER_H
#define LOGGER_H
#include <iostream>
#include <string>
#include <fstream>

#pragma once

class Logger
{
public:
    
    ~Logger();
    static Logger* getInstance();
   std::string getText();
    void setText(std::string text);
    void writeToFile(const std::string & filename)const;

private:
Logger();
static Logger* instance;
std::string m_text;

};



#endif