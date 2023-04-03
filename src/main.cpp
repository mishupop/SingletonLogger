#include <iostream>
#include "Logger.h"
Logger* Logger::instance=nullptr;

int main(int argc, char const *argv[])
{
    Logger* logger = Logger::getInstance(); // get the singleton instance
    logger->setText("Am scris un text!!!"); // set the text
    logger->writeToFile("text.txt"); // write the text to a file
    return 0;
}
