#pragma once


ref class Logger
{
private:
	System::Windows::Forms::RichTextBox^ _rtb;
	Logger^ _instance;
	Logger();
public:
	Logger^ getInstance();
	void Log()
};

