#include "Logger.h"

Logger::Logger()
{
m_text={""};
}

Logger::~Logger()
{

}
Logger* Logger::getInstance()
{
    if (instance!=nullptr)
    {
        return instance;
    }
    else
    {
        instance= new Logger();
        return instance;
    }
}

std::string Logger::getText()
{
    return m_text;
}

void Logger::setText(std::string text)
{
    m_text=text;
}

void Logger::writeToFile(const std::string & filename)const
{
  std::ofstream outfile(filename);
    if (outfile.is_open()) {
        outfile << m_text;
        outfile.close();
        std::cout << "wrote text to file " << filename << std::endl;
    } else {
        std::cout << "Error opening file " << filename << std::endl;
    }
}