//#pragma once
//#include "sampleClass.h"
#include "recommendationEngine.h"
#include <string>

namespace GatorGamePickerGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		recommendationEngine* engine = new recommendationEngine();
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ OutputBox;
	protected:

	private: System::Windows::Forms::Button^ Clear;

	private: System::Windows::Forms::Button^ Generate;
	private: System::Windows::Forms::Label^ FreshGameL;
	private: System::Windows::Forms::Label^ UpdatesL;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TrackBar^ FGS;
	private: System::Windows::Forms::TrackBar^ UpdateS;
	private: System::Windows::Forms::TrackBar^ RatingS;
	private: System::Windows::Forms::TrackBar^ SuggestionS;
	private: System::Windows::Forms::TrackBar^ PlatformS;
	private: System::Windows::Forms::TrackBar^ GenreS;
	private: System::Windows::Forms::TrackBar^ PublisherS;

	private: System::Windows::Forms::TextBox^ FGR;
	private: System::Windows::Forms::TextBox^ UpdateR;
	private: System::Windows::Forms::TextBox^ RatingR;
	private: System::Windows::Forms::TextBox^ SuggestionsR;
	private: System::Windows::Forms::TextBox^ PlatformR;
	private: System::Windows::Forms::TextBox^ GenreR;
	private: System::Windows::Forms::TextBox^ PublisherR;

















	private: System::Windows::Forms::Label^ Label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ PubButton;
	private: System::Windows::Forms::Button^ GenButton;
	private: System::Windows::Forms::Button^ PlatButton;



	private: System::Windows::Forms::TextBox^ Publisher;
	private: System::Windows::Forms::TextBox^ Genre;
	private: System::Windows::Forms::TextBox^ Platform;



	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ ClearInput;









	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->OutputBox = (gcnew System::Windows::Forms::ListBox());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->Generate = (gcnew System::Windows::Forms::Button());
			this->FreshGameL = (gcnew System::Windows::Forms::Label());
			this->UpdatesL = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->FGS = (gcnew System::Windows::Forms::TrackBar());
			this->UpdateS = (gcnew System::Windows::Forms::TrackBar());
			this->RatingS = (gcnew System::Windows::Forms::TrackBar());
			this->SuggestionS = (gcnew System::Windows::Forms::TrackBar());
			this->PlatformS = (gcnew System::Windows::Forms::TrackBar());
			this->GenreS = (gcnew System::Windows::Forms::TrackBar());
			this->PublisherS = (gcnew System::Windows::Forms::TrackBar());
			this->FGR = (gcnew System::Windows::Forms::TextBox());
			this->UpdateR = (gcnew System::Windows::Forms::TextBox());
			this->RatingR = (gcnew System::Windows::Forms::TextBox());
			this->SuggestionsR = (gcnew System::Windows::Forms::TextBox());
			this->PlatformR = (gcnew System::Windows::Forms::TextBox());
			this->GenreR = (gcnew System::Windows::Forms::TextBox());
			this->PublisherR = (gcnew System::Windows::Forms::TextBox());
			this->Label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->PubButton = (gcnew System::Windows::Forms::Button());
			this->GenButton = (gcnew System::Windows::Forms::Button());
			this->PlatButton = (gcnew System::Windows::Forms::Button());
			this->Publisher = (gcnew System::Windows::Forms::TextBox());
			this->Genre = (gcnew System::Windows::Forms::TextBox());
			this->Platform = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->ClearInput = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FGS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpdateS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RatingS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SuggestionS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlatformS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GenreS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PublisherS))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(182, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(483, 77);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Gator Game Picker";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// OutputBox
			// 
			this->OutputBox->FormattingEnabled = true;
			this->OutputBox->Location = System::Drawing::Point(419, 106);
			this->OutputBox->Name = L"OutputBox";
			this->OutputBox->Size = System::Drawing::Size(392, 316);
			this->OutputBox->TabIndex = 4;
			this->OutputBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::OutputBox_SelectedIndexChanged);
			// 
			// Clear
			// 
			this->Clear->Location = System::Drawing::Point(664, 437);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(75, 23);
			this->Clear->TabIndex = 5;
			this->Clear->Text = L"Clear Box";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// Generate
			// 
			this->Generate->Location = System::Drawing::Point(495, 437);
			this->Generate->Name = L"Generate";
			this->Generate->Size = System::Drawing::Size(75, 23);
			this->Generate->TabIndex = 6;
			this->Generate->Text = L"Generate";
			this->Generate->UseVisualStyleBackColor = true;
			this->Generate->Click += gcnew System::EventHandler(this, &MyForm::Generate_Click);
			// 
			// FreshGameL
			// 
			this->FreshGameL->AutoSize = true;
			this->FreshGameL->BackColor = System::Drawing::Color::Transparent;
			this->FreshGameL->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FreshGameL->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FreshGameL->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FreshGameL->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FreshGameL->Location = System::Drawing::Point(12, 119);
			this->FreshGameL->Name = L"FreshGameL";
			this->FreshGameL->Size = System::Drawing::Size(95, 18);
			this->FreshGameL->TabIndex = 7;
			this->FreshGameL->Text = L"Fresh Game";
			// 
			// UpdatesL
			// 
			this->UpdatesL->AutoSize = true;
			this->UpdatesL->BackColor = System::Drawing::Color::Transparent;
			this->UpdatesL->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->UpdatesL->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UpdatesL->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdatesL->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->UpdatesL->Location = System::Drawing::Point(12, 147);
			this->UpdatesL->Name = L"UpdatesL";
			this->UpdatesL->Size = System::Drawing::Size(67, 18);
			this->UpdatesL->TabIndex = 8;
			this->UpdatesL->Text = L"Updates";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(12, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Rating";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(12, 206);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Suggestions";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(13, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 18);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Platform";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(12, 264);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Genre";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(12, 293);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 18);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Publisher";
			// 
			// FGS
			// 
			this->FGS->BackColor = System::Drawing::Color::DimGray;
			this->FGS->Location = System::Drawing::Point(166, 120);
			this->FGS->Name = L"FGS";
			this->FGS->Size = System::Drawing::Size(153, 45);
			this->FGS->TabIndex = 15;
			// 
			// UpdateS
			// 
			this->UpdateS->BackColor = System::Drawing::Color::DimGray;
			this->UpdateS->Location = System::Drawing::Point(166, 149);
			this->UpdateS->Name = L"UpdateS";
			this->UpdateS->Size = System::Drawing::Size(153, 45);
			this->UpdateS->TabIndex = 16;
			// 
			// RatingS
			// 
			this->RatingS->BackColor = System::Drawing::Color::DimGray;
			this->RatingS->Location = System::Drawing::Point(166, 177);
			this->RatingS->Name = L"RatingS";
			this->RatingS->Size = System::Drawing::Size(153, 45);
			this->RatingS->TabIndex = 17;
			// 
			// SuggestionS
			// 
			this->SuggestionS->BackColor = System::Drawing::Color::DimGray;
			this->SuggestionS->Location = System::Drawing::Point(166, 205);
			this->SuggestionS->Name = L"SuggestionS";
			this->SuggestionS->Size = System::Drawing::Size(153, 45);
			this->SuggestionS->TabIndex = 18;
			// 
			// PlatformS
			// 
			this->PlatformS->BackColor = System::Drawing::Color::DimGray;
			this->PlatformS->Location = System::Drawing::Point(166, 235);
			this->PlatformS->Name = L"PlatformS";
			this->PlatformS->Size = System::Drawing::Size(153, 45);
			this->PlatformS->TabIndex = 19;
			// 
			// GenreS
			// 
			this->GenreS->BackColor = System::Drawing::Color::DimGray;
			this->GenreS->Location = System::Drawing::Point(166, 264);
			this->GenreS->Name = L"GenreS";
			this->GenreS->Size = System::Drawing::Size(153, 45);
			this->GenreS->TabIndex = 20;
			// 
			// PublisherS
			// 
			this->PublisherS->BackColor = System::Drawing::Color::DimGray;
			this->PublisherS->Location = System::Drawing::Point(166, 294);
			this->PublisherS->Name = L"PublisherS";
			this->PublisherS->Size = System::Drawing::Size(153, 45);
			this->PublisherS->TabIndex = 21;
			// 
			// FGR
			// 
			this->FGR->Location = System::Drawing::Point(351, 120);
			this->FGR->Name = L"FGR";
			this->FGR->Size = System::Drawing::Size(30, 20);
			this->FGR->TabIndex = 23;
			this->FGR->Text = L"1";
			this->FGR->TextChanged += gcnew System::EventHandler(this, &MyForm::FGR_TextChanged);
			// 
			// UpdateR
			// 
			this->UpdateR->Location = System::Drawing::Point(351, 149);
			this->UpdateR->Name = L"UpdateR";
			this->UpdateR->Size = System::Drawing::Size(30, 20);
			this->UpdateR->TabIndex = 24;
			this->UpdateR->Text = L"1";
			// 
			// RatingR
			// 
			this->RatingR->Location = System::Drawing::Point(351, 179);
			this->RatingR->Name = L"RatingR";
			this->RatingR->Size = System::Drawing::Size(30, 20);
			this->RatingR->TabIndex = 25;
			this->RatingR->Text = L"1";
			// 
			// SuggestionsR
			// 
			this->SuggestionsR->Location = System::Drawing::Point(351, 208);
			this->SuggestionsR->Name = L"SuggestionsR";
			this->SuggestionsR->Size = System::Drawing::Size(30, 20);
			this->SuggestionsR->TabIndex = 26;
			this->SuggestionsR->Text = L"1";
			// 
			// PlatformR
			// 
			this->PlatformR->Location = System::Drawing::Point(351, 236);
			this->PlatformR->Name = L"PlatformR";
			this->PlatformR->Size = System::Drawing::Size(30, 20);
			this->PlatformR->TabIndex = 27;
			this->PlatformR->Text = L"1";
			// 
			// GenreR
			// 
			this->GenreR->Location = System::Drawing::Point(351, 265);
			this->GenreR->Name = L"GenreR";
			this->GenreR->Size = System::Drawing::Size(30, 20);
			this->GenreR->TabIndex = 28;
			this->GenreR->Text = L"1";
			// 
			// PublisherR
			// 
			this->PublisherR->Location = System::Drawing::Point(351, 294);
			this->PublisherR->Name = L"PublisherR";
			this->PublisherR->Size = System::Drawing::Size(30, 20);
			this->PublisherR->TabIndex = 29;
			this->PublisherR->Text = L"1";
			// 
			// Label10
			// 
			this->Label10->AutoSize = true;
			this->Label10->BackColor = System::Drawing::Color::Transparent;
			this->Label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Label10->Location = System::Drawing::Point(161, 92);
			this->Label10->Name = L"Label10";
			this->Label10->Size = System::Drawing::Size(167, 24);
			this->Label10->TabIndex = 31;
			this->Label10->Text = L"Importance (0 - 10)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(348, 91);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 32);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Rate \r\n(1 - 7)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(11, 95);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 24);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Categories";
			// 
			// PubButton
			// 
			this->PubButton->Location = System::Drawing::Point(36, 437);
			this->PubButton->Name = L"PubButton";
			this->PubButton->Size = System::Drawing::Size(75, 23);
			this->PubButton->TabIndex = 34;
			this->PubButton->Text = L"Pub List";
			this->PubButton->UseVisualStyleBackColor = true;
			this->PubButton->Click += gcnew System::EventHandler(this, &MyForm::PubButton_Click);
			// 
			// GenButton
			// 
			this->GenButton->Location = System::Drawing::Point(165, 437);
			this->GenButton->Name = L"GenButton";
			this->GenButton->Size = System::Drawing::Size(75, 23);
			this->GenButton->TabIndex = 35;
			this->GenButton->Text = L"Genre List";
			this->GenButton->UseVisualStyleBackColor = true;
			this->GenButton->Click += gcnew System::EventHandler(this, &MyForm::GenButton_Click);
			// 
			// PlatButton
			// 
			this->PlatButton->Location = System::Drawing::Point(289, 437);
			this->PlatButton->Name = L"PlatButton";
			this->PlatButton->Size = System::Drawing::Size(75, 23);
			this->PlatButton->TabIndex = 36;
			this->PlatButton->Text = L"Platform List";
			this->PlatButton->UseVisualStyleBackColor = true;
			this->PlatButton->Click += gcnew System::EventHandler(this, &MyForm::PlatButton_Click);
			// 
			// Publisher
			// 
			this->Publisher->Location = System::Drawing::Point(27, 403);
			this->Publisher->Name = L"Publisher";
			this->Publisher->Size = System::Drawing::Size(100, 20);
			this->Publisher->TabIndex = 37;
			this->Publisher->TextChanged += gcnew System::EventHandler(this, &MyForm::Publisher_TextChanged);
			// 
			// Genre
			// 
			this->Genre->Location = System::Drawing::Point(152, 403);
			this->Genre->Name = L"Genre";
			this->Genre->Size = System::Drawing::Size(100, 20);
			this->Genre->TabIndex = 38;
			// 
			// Platform
			// 
			this->Platform->Location = System::Drawing::Point(281, 403);
			this->Platform->Name = L"Platform";
			this->Platform->Size = System::Drawing::Size(100, 20);
			this->Platform->TabIndex = 39;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label13->Location = System::Drawing::Point(40, 382);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 18);
			this->label13->TabIndex = 40;
			this->label13->Text = L"Publisher";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->Location = System::Drawing::Point(178, 382);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 18);
			this->label14->TabIndex = 41;
			this->label14->Text = L"Genre";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->Location = System::Drawing::Point(298, 382);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(66, 18);
			this->label15->TabIndex = 42;
			this->label15->Text = L"Platform";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label16->Location = System::Drawing::Point(-1, 361);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 16);
			this->label16->TabIndex = 43;
			this->label16->Text = L"Entries:";
			// 
			// ClearInput
			// 
			this->ClearInput->Location = System::Drawing::Point(330, 331);
			this->ClearInput->Name = L"ClearInput";
			this->ClearInput->Size = System::Drawing::Size(75, 23);
			this->ClearInput->TabIndex = 44;
			this->ClearInput->Text = L"Clear";
			this->ClearInput->UseVisualStyleBackColor = true;
			this->ClearInput->Click += gcnew System::EventHandler(this, &MyForm::ClearInput_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(829, 464);
			this->Controls->Add(this->ClearInput);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->Platform);
			this->Controls->Add(this->Genre);
			this->Controls->Add(this->Publisher);
			this->Controls->Add(this->PlatButton);
			this->Controls->Add(this->GenButton);
			this->Controls->Add(this->PubButton);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Label10);
			this->Controls->Add(this->PublisherR);
			this->Controls->Add(this->GenreR);
			this->Controls->Add(this->PlatformR);
			this->Controls->Add(this->SuggestionsR);
			this->Controls->Add(this->RatingR);
			this->Controls->Add(this->UpdateR);
			this->Controls->Add(this->FGR);
			this->Controls->Add(this->PublisherS);
			this->Controls->Add(this->GenreS);
			this->Controls->Add(this->PlatformS);
			this->Controls->Add(this->SuggestionS);
			this->Controls->Add(this->RatingS);
			this->Controls->Add(this->UpdateS);
			this->Controls->Add(this->FGS);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->UpdatesL);
			this->Controls->Add(this->FreshGameL);
			this->Controls->Add(this->Generate);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->OutputBox);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"Gator Game Picker";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FGS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpdateS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RatingS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SuggestionS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlatformS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GenreS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PublisherS))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// CODE CITATION: Official Microsoft Website
		public: System::Void MarshalString(String^ s, std::string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void PubButton_Click(System::Object^ sender, System::EventArgs^ e) {
		OutputBox->Items->Clear();
		OutputBox->Items->Add("Publisher");
		OutputBox->Items->Add("---------------------------------------------------------------------------------------------------------------");
		std::vector<std::string> vec = engine->list->getPublishers();
		for (int i = 0; i < vec.size(); i++) {
			std::string temp = vec.at(i);
			String^ temp2 = gcnew String(temp.c_str());
			OutputBox->Items->Add(temp2);
		}
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		OutputBox->Items->Clear(); // Clears the box
	}
	private: System::Void OutputBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Generate_Click(System::Object^ sender, System::EventArgs^ e) {
		//Testing 
		using System::Runtime::InteropServices::Marshal;

		OutputBox->Items->Clear();
		double arr[14];
		arr[0] = 1.0 + ((double)FGS->Value / 10);
		arr[1] = 1.0 + ((double)UpdateS->Value / 10);
		arr[2] = 1.0 + ((double)SuggestionS->Value / 10);
		arr[3] = 1.0 + ((double)PlatformS->Value / 10);
		arr[4] = 1.0 + ((double)GenreS->Value / 10);
		arr[5] = 1.0 + ((double)PublisherS->Value / 10);
		arr[6] = 1.0 + ((double)RatingS->Value / 10);
		if (FGR->Text == "") 
			arr[7] = 1.0;
		else 
			arr[7] = System::Convert::ToDouble(FGR->Text);
		if (UpdateR->Text == "")
			arr[8] = 1.0;
		else
			arr[8] = System::Convert::ToDouble(UpdateR->Text);
		if (SuggestionsR->Text == "")
			arr[9] = 1.0;
		else
			arr[9] = System::Convert::ToDouble(SuggestionsR->Text);
		if (PlatformR->Text == "")
			arr[10] = 1.0;
		else
			arr[10] = System::Convert::ToDouble(PlatformR->Text);
		if (GenreR->Text == "")
			arr[11] = 1.0;
		else
			arr[11] = System::Convert::ToDouble(GenreR->Text);
		if (PublisherR->Text == "")
			arr[12] = 1.0;
		else
			arr[12] = System::Convert::ToDouble(PublisherR->Text);
		if (RatingR->Text == "")
			arr[13] = 1.0;
		else
			arr[13] = System::Convert::ToDouble(RatingR->Text);
	

		std::string pub;
		std::string gen;
		std::string plat;
		MarshalString(Publisher->Text, pub);
		MarshalString(Genre->Text, gen);
		MarshalString(Platform->Text, plat);
		String^ w = gcnew String(pub.c_str());

		
		std::vector<std::string> vec = engine->getRecommendations(arr, pub, gen, plat);
		//Adding it to output box
		
		for (int i = 0; i < vec.size(); i++) {
			std::string temp = vec.at(i);
			String^ temp2 = gcnew String(temp.c_str());
			OutputBox->Items->Add(temp2);
		}
		
	}
	private: System::Void PlatButton_Click(System::Object^ sender, System::EventArgs^ e) {
		OutputBox->Items->Clear();
		OutputBox->Items->Add("Platform");
		OutputBox->Items->Add("---------------------------------------------------------------------------------------------------------------");
		std::vector<std::string> vec = engine->list->getPlatforms();
		for (int i = 0; i < vec.size(); i++) {
			std::string temp = vec.at(i);
			String^ temp2 = gcnew String(temp.c_str());
			OutputBox->Items->Add(temp2);
		}
	}
	private: System::Void GenButton_Click(System::Object^ sender, System::EventArgs^ e) {
		OutputBox->Items->Clear();
		OutputBox->Items->Add("Genre");
		OutputBox->Items->Add("---------------------------------------------------------------------------------------------------------------");
		std::vector<std::string> vec = engine->list->getGenres();
		for (int i = 0; i < vec.size(); i++) {
			std::string temp = vec.at(i);
			String^ temp2 = gcnew String(temp.c_str());
			OutputBox->Items->Add(temp2);
		}
	}
	private: System::Void ClearInput_Click(System::Object^ sender, System::EventArgs^ e) {
		//reseting input text boxes
		Publisher->Text = "";
		Genre->Text = "";
		Platform->Text = "";
		FGR->Text = "";
		UpdateR->Text = "";
		RatingR->Text = "";
		SuggestionsR->Text = "";
		PlatformR->Text = "";
		GenreR->Text = "";
		PublisherR->Text = "";
		//Resetting sliders
		FGS->Value = 0;
		UpdateS->Value = 0;
		RatingS->Value = 0;
		SuggestionS->Value = 0;
		PlatformS->Value = 0;
		GenreS->Value = 0;
		PublisherS->Value = 0;
	}
private: System::Void Publisher_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FGR_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
