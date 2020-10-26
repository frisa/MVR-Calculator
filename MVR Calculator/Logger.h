#pragma once

ref class Logger
{
private:
	static Logger^ _instance;
	System::Windows::Forms::RichTextBox^ _rtb;
	int mojecislo;
	Logger();

public:
	static Logger^ getInstance();
	void setOutput(System::Windows::Forms::RichTextBox^ rtb);
	void log(System::String^ message);
};

