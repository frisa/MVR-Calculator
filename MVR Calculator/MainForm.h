#pragma once
#include "Logger.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtFilePath;
	private: System::Windows::Forms::Button^ btnLoad;
	private: System::Windows::Forms::RichTextBox^ rtbLog;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtFilePath = (gcnew System::Windows::Forms::TextBox());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->rtbLog = (gcnew System::Windows::Forms::RichTextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				80)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				184)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				80)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				800)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->txtFilePath, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnLoad, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->rtbLog, 0, 2);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1144, 693);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"File";
			// 
			// txtFilePath
			// 
			this->txtFilePath->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtFilePath->Location = System::Drawing::Point(83, 3);
			this->txtFilePath->Name = L"txtFilePath";
			this->txtFilePath->Size = System::Drawing::Size(178, 26);
			this->txtFilePath->TabIndex = 1;
			// 
			// btnLoad
			// 
			this->btnLoad->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnLoad->Location = System::Drawing::Point(267, 3);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(74, 29);
			this->btnLoad->TabIndex = 2;
			this->btnLoad->Text = L"Load";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &MainForm::btnLoad_Click);
			// 
			// rtbLog
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->rtbLog, 4);
			this->rtbLog->Dock = System::Windows::Forms::DockStyle::Fill;
			this->rtbLog->Location = System::Drawing::Point(3, 596);
			this->rtbLog->Name = L"rtbLog";
			this->rtbLog->Size = System::Drawing::Size(1138, 94);
			this->rtbLog->TabIndex = 3;
			this->rtbLog->Text = L"";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 693);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MVR Calculator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnLoad_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Logger::getInstance()->nastavMojeCislo(56);
	Logger::getInstance()->nastavMojeCislo(65);
}
};
}
