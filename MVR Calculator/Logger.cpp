#include "Logger.h"

Logger::Logger()
{
}

Logger^ Logger::getInstance()
{
    if (_instance == nullptr)
    {
        _instance = gcnew Logger();
    }
    return _instance;
}

void Logger::setOutput(System::Windows::Forms::RichTextBox^ rtb)
{
    _rtb = rtb;
}

void Logger::log(System::String^ message)
{
    if (_rtb != nullptr)
    {
        _rtb->Text = message;
    }
}


