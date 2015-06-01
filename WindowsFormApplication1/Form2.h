#pragma once


namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	protected: System::Windows::Forms::Label^  label1;
	protected:
	public: System::Windows::Forms::Label^  label2;
	protected: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;






	private: System::Windows::Forms::Button^  button1;
	public:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;




	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;



	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;


	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button60;



	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button73;
	private: System::Windows::Forms::Button^  button74;
	private: System::Windows::Forms::Button^  button75;



	private: System::Windows::Forms::Button^  button86;
	private: System::Windows::Forms::Button^  button87;
	private: System::Windows::Forms::Button^  button88;
	private: System::Windows::Forms::Button^  button89;
	private: System::Windows::Forms::Button^  button90;


	private: System::Windows::Forms::Button^  button101;
	private: System::Windows::Forms::Button^  button102;
	private: System::Windows::Forms::Button^  button103;
	private: System::Windows::Forms::Button^  button104;
	private: System::Windows::Forms::Button^  button105;



	private: System::Windows::Forms::Button^  button116;
	private: System::Windows::Forms::Button^  button117;
	private: System::Windows::Forms::Button^  button118;
	private: System::Windows::Forms::Button^  button119;
	private: System::Windows::Forms::Button^  button120;


	private: System::Windows::Forms::Button^  button131;
	private: System::Windows::Forms::Button^  button132;
	private: System::Windows::Forms::Button^  button133;
	private: System::Windows::Forms::Button^  button134;
	private: System::Windows::Forms::Button^  button135;



	private: System::Windows::Forms::Button^  button146;
	private: System::Windows::Forms::Button^  button147;
	private: System::Windows::Forms::Button^  button148;
	private: System::Windows::Forms::Button^  button149;
	private: System::Windows::Forms::Button^  button150;



	public:




	protected:
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button116 = (gcnew System::Windows::Forms::Button());
			this->button117 = (gcnew System::Windows::Forms::Button());
			this->button118 = (gcnew System::Windows::Forms::Button());
			this->button119 = (gcnew System::Windows::Forms::Button());
			this->button120 = (gcnew System::Windows::Forms::Button());
			this->button131 = (gcnew System::Windows::Forms::Button());
			this->button132 = (gcnew System::Windows::Forms::Button());
			this->button133 = (gcnew System::Windows::Forms::Button());
			this->button134 = (gcnew System::Windows::Forms::Button());
			this->button135 = (gcnew System::Windows::Forms::Button());
			this->button146 = (gcnew System::Windows::Forms::Button());
			this->button147 = (gcnew System::Windows::Forms::Button());
			this->button148 = (gcnew System::Windows::Forms::Button());
			this->button149 = (gcnew System::Windows::Forms::Button());
			this->button150 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(12, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"asd";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(12, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"asd";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(12, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"asd";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(12, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"asd";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(12, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"asd";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(12, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"asd";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(12, 226);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"asd";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(12, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"asd";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(12, 276);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 25);
			this->label10->TabIndex = 9;
			this->label10->Text = L"asd";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lavender;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Location = System::Drawing::Point(216, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(21, 23);
			this->button1->TabIndex = 35;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(243, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(21, 23);
			this->button2->TabIndex = 36;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(270, 51);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(21, 23);
			this->button3->TabIndex = 37;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(297, 51);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(21, 23);
			this->button4->TabIndex = 38;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(324, 51);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(21, 23);
			this->button5->TabIndex = 39;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(324, 76);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(21, 23);
			this->button26->TabIndex = 54;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form2::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(297, 76);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(21, 23);
			this->button27->TabIndex = 53;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form2::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(270, 76);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(21, 23);
			this->button28->TabIndex = 52;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form2::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(243, 76);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(21, 23);
			this->button29->TabIndex = 51;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form2::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(216, 76);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(21, 23);
			this->button30->TabIndex = 50;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form2::button30_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(324, 101);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(21, 23);
			this->button41->TabIndex = 69;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &Form2::button41_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(297, 101);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(21, 23);
			this->button42->TabIndex = 68;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &Form2::button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(270, 101);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(21, 23);
			this->button43->TabIndex = 67;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Form2::button43_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(243, 101);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(21, 23);
			this->button44->TabIndex = 66;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Form2::button44_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(216, 101);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(21, 23);
			this->button45->TabIndex = 65;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Form2::button45_Click);
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(324, 126);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(21, 23);
			this->button56->TabIndex = 84;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &Form2::button56_Click);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(297, 126);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(21, 23);
			this->button57->TabIndex = 83;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &Form2::button57_Click);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(270, 126);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(21, 23);
			this->button58->TabIndex = 82;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &Form2::button58_Click);
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(243, 126);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(21, 23);
			this->button59->TabIndex = 81;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &Form2::button59_Click);
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(216, 126);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(21, 23);
			this->button60->TabIndex = 80;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &Form2::button60_Click);
			// 
			// button71
			// 
			this->button71->Location = System::Drawing::Point(324, 151);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(21, 23);
			this->button71->TabIndex = 99;
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &Form2::button71_Click);
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(297, 151);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(21, 23);
			this->button72->TabIndex = 98;
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &Form2::button72_Click);
			// 
			// button73
			// 
			this->button73->Location = System::Drawing::Point(270, 151);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(21, 23);
			this->button73->TabIndex = 97;
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &Form2::button73_Click);
			// 
			// button74
			// 
			this->button74->Location = System::Drawing::Point(243, 151);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(21, 23);
			this->button74->TabIndex = 96;
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &Form2::button74_Click);
			// 
			// button75
			// 
			this->button75->Location = System::Drawing::Point(216, 151);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(21, 23);
			this->button75->TabIndex = 95;
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &Form2::button75_Click);
			// 
			// button86
			// 
			this->button86->Location = System::Drawing::Point(324, 176);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(21, 23);
			this->button86->TabIndex = 114;
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &Form2::button86_Click);
			// 
			// button87
			// 
			this->button87->Location = System::Drawing::Point(297, 176);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(21, 23);
			this->button87->TabIndex = 113;
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &Form2::button87_Click);
			// 
			// button88
			// 
			this->button88->Location = System::Drawing::Point(270, 176);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(21, 23);
			this->button88->TabIndex = 112;
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &Form2::button88_Click);
			// 
			// button89
			// 
			this->button89->Location = System::Drawing::Point(243, 176);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(21, 23);
			this->button89->TabIndex = 111;
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &Form2::button89_Click);
			// 
			// button90
			// 
			this->button90->Location = System::Drawing::Point(216, 176);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(21, 23);
			this->button90->TabIndex = 110;
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &Form2::button90_Click);
			// 
			// button101
			// 
			this->button101->Location = System::Drawing::Point(324, 201);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(21, 23);
			this->button101->TabIndex = 129;
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &Form2::button101_Click);
			// 
			// button102
			// 
			this->button102->Location = System::Drawing::Point(297, 201);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(21, 23);
			this->button102->TabIndex = 128;
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &Form2::button102_Click);
			// 
			// button103
			// 
			this->button103->Location = System::Drawing::Point(270, 201);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(21, 23);
			this->button103->TabIndex = 127;
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &Form2::button103_Click);
			// 
			// button104
			// 
			this->button104->Location = System::Drawing::Point(243, 201);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(21, 23);
			this->button104->TabIndex = 126;
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &Form2::button104_Click);
			// 
			// button105
			// 
			this->button105->Location = System::Drawing::Point(216, 201);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(21, 23);
			this->button105->TabIndex = 125;
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &Form2::button105_Click);
			// 
			// button116
			// 
			this->button116->Location = System::Drawing::Point(324, 226);
			this->button116->Name = L"button116";
			this->button116->Size = System::Drawing::Size(21, 23);
			this->button116->TabIndex = 144;
			this->button116->UseVisualStyleBackColor = true;
			this->button116->Click += gcnew System::EventHandler(this, &Form2::button116_Click);
			// 
			// button117
			// 
			this->button117->Location = System::Drawing::Point(297, 226);
			this->button117->Name = L"button117";
			this->button117->Size = System::Drawing::Size(21, 23);
			this->button117->TabIndex = 143;
			this->button117->UseVisualStyleBackColor = true;
			this->button117->Click += gcnew System::EventHandler(this, &Form2::button117_Click);
			// 
			// button118
			// 
			this->button118->Location = System::Drawing::Point(270, 226);
			this->button118->Name = L"button118";
			this->button118->Size = System::Drawing::Size(21, 23);
			this->button118->TabIndex = 142;
			this->button118->UseVisualStyleBackColor = true;
			this->button118->Click += gcnew System::EventHandler(this, &Form2::button118_Click);
			// 
			// button119
			// 
			this->button119->Location = System::Drawing::Point(243, 226);
			this->button119->Name = L"button119";
			this->button119->Size = System::Drawing::Size(21, 23);
			this->button119->TabIndex = 141;
			this->button119->UseVisualStyleBackColor = true;
			this->button119->Click += gcnew System::EventHandler(this, &Form2::button119_Click);
			// 
			// button120
			// 
			this->button120->Location = System::Drawing::Point(216, 226);
			this->button120->Name = L"button120";
			this->button120->Size = System::Drawing::Size(21, 23);
			this->button120->TabIndex = 140;
			this->button120->UseVisualStyleBackColor = true;
			this->button120->Click += gcnew System::EventHandler(this, &Form2::button120_Click);
			// 
			// button131
			// 
			this->button131->Location = System::Drawing::Point(324, 251);
			this->button131->Name = L"button131";
			this->button131->Size = System::Drawing::Size(21, 23);
			this->button131->TabIndex = 159;
			this->button131->UseVisualStyleBackColor = true;
			this->button131->Click += gcnew System::EventHandler(this, &Form2::button131_Click);
			// 
			// button132
			// 
			this->button132->Location = System::Drawing::Point(297, 251);
			this->button132->Name = L"button132";
			this->button132->Size = System::Drawing::Size(21, 23);
			this->button132->TabIndex = 158;
			this->button132->UseVisualStyleBackColor = true;
			this->button132->Click += gcnew System::EventHandler(this, &Form2::button132_Click);
			// 
			// button133
			// 
			this->button133->Location = System::Drawing::Point(270, 251);
			this->button133->Name = L"button133";
			this->button133->Size = System::Drawing::Size(21, 23);
			this->button133->TabIndex = 157;
			this->button133->UseVisualStyleBackColor = true;
			this->button133->Click += gcnew System::EventHandler(this, &Form2::button133_Click);
			// 
			// button134
			// 
			this->button134->Location = System::Drawing::Point(243, 251);
			this->button134->Name = L"button134";
			this->button134->Size = System::Drawing::Size(21, 23);
			this->button134->TabIndex = 156;
			this->button134->UseVisualStyleBackColor = true;
			this->button134->Click += gcnew System::EventHandler(this, &Form2::button134_Click);
			// 
			// button135
			// 
			this->button135->Location = System::Drawing::Point(216, 251);
			this->button135->Name = L"button135";
			this->button135->Size = System::Drawing::Size(21, 23);
			this->button135->TabIndex = 155;
			this->button135->UseVisualStyleBackColor = true;
			this->button135->Click += gcnew System::EventHandler(this, &Form2::button135_Click);
			// 
			// button146
			// 
			this->button146->Location = System::Drawing::Point(324, 276);
			this->button146->Name = L"button146";
			this->button146->Size = System::Drawing::Size(21, 23);
			this->button146->TabIndex = 174;
			this->button146->UseVisualStyleBackColor = true;
			this->button146->Click += gcnew System::EventHandler(this, &Form2::button146_Click_1);
			// 
			// button147
			// 
			this->button147->Location = System::Drawing::Point(297, 276);
			this->button147->Name = L"button147";
			this->button147->Size = System::Drawing::Size(21, 23);
			this->button147->TabIndex = 173;
			this->button147->UseVisualStyleBackColor = true;
			this->button147->Click += gcnew System::EventHandler(this, &Form2::button147_Click_1);
			// 
			// button148
			// 
			this->button148->Location = System::Drawing::Point(270, 276);
			this->button148->Name = L"button148";
			this->button148->Size = System::Drawing::Size(21, 23);
			this->button148->TabIndex = 172;
			this->button148->UseVisualStyleBackColor = true;
			this->button148->Click += gcnew System::EventHandler(this, &Form2::button148_Click_1);
			// 
			// button149
			// 
			this->button149->Location = System::Drawing::Point(243, 276);
			this->button149->Name = L"button149";
			this->button149->Size = System::Drawing::Size(21, 23);
			this->button149->TabIndex = 171;
			this->button149->UseVisualStyleBackColor = true;
			this->button149->Click += gcnew System::EventHandler(this, &Form2::button149_Click_1);
			// 
			// button150
			// 
			this->button150->Location = System::Drawing::Point(216, 276);
			this->button150->Name = L"button150";
			this->button150->Size = System::Drawing::Size(21, 23);
			this->button150->TabIndex = 170;
			this->button150->UseVisualStyleBackColor = true;
			this->button150->Click += gcnew System::EventHandler(this, &Form2::button150_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 420);
			this->Controls->Add(this->button146);
			this->Controls->Add(this->button147);
			this->Controls->Add(this->button148);
			this->Controls->Add(this->button149);
			this->Controls->Add(this->button150);
			this->Controls->Add(this->button131);
			this->Controls->Add(this->button132);
			this->Controls->Add(this->button133);
			this->Controls->Add(this->button134);
			this->Controls->Add(this->button135);
			this->Controls->Add(this->button116);
			this->Controls->Add(this->button117);
			this->Controls->Add(this->button118);
			this->Controls->Add(this->button119);
			this->Controls->Add(this->button120);
			this->Controls->Add(this->button101);
			this->Controls->Add(this->button102);
			this->Controls->Add(this->button103);
			this->Controls->Add(this->button104);
			this->Controls->Add(this->button105);
			this->Controls->Add(this->button86);
			this->Controls->Add(this->button87);
			this->Controls->Add(this->button88);
			this->Controls->Add(this->button89);
			this->Controls->Add(this->button90);
			this->Controls->Add(this->button71);
			this->Controls->Add(this->button72);
			this->Controls->Add(this->button73);
			this->Controls->Add(this->button74);
			this->Controls->Add(this->button75);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->Text = L"Lista Obecności ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		int a=0, a1, a2, a3, a4;


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 a = a + 1;
			 if (a == 1)
			 {
				 button1->BackColor = System::Drawing::Color::Green;
			 }
			 else if (a == 2)
			 {
				 button1->BackColor = System::Drawing::Color::Red;
			 }
			 else if (a == 3)
			 {
				 button1->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (a == 4)
			 {
				 a = 0;
			 }
			 
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 a1 = a1 + 1;
			 if (a == 1)
			 {
				 button2->BackColor = System::Drawing::Color::Green;
			 }
			 else if (a1 == 2)
			 {
				 button2->BackColor = System::Drawing::Color::Red;
			 }
			 else if (a1 == 3)
			 {
				 button2->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (a1 == 4)
			 {
				 a1 = 0;
			 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 a2 = a2 + 1;
			 if (a2 == 1)
			 {
				 button3->BackColor = System::Drawing::Color::Green;
			 }
			 else if (a2 == 2)
			 {
				 button3->BackColor = System::Drawing::Color::Red;
			 }
			 else if (a2 == 3)
			 {
				 button3->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (a2 == 4)
			 {
				 a2 = 0;
			 }
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 a3 = a3 + 1;
			 if (a3 == 1)
			 {
				 button4->BackColor = System::Drawing::Color::Green;
			 }
			 else if (a3 == 2)
			 {
				 button4->BackColor = System::Drawing::Color::Red;
			 }
			 else if (a3 == 3)
			 {
				 button4->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (a3 == 4)
			 {
				 a3 = 0;
			 }
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 a4 = a4 + 1;
			 if (a4 == 1)
			 {
				 button5->BackColor = System::Drawing::Color::Green;
			 }
			 else if (a4 == 2)
			 {
				 button5->BackColor = System::Drawing::Color::Red;
			 }
			 else if (a4 == 3)
			 {
				 button5->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (a4 == 4)
			 {
				 a4 = 0;
			 }
}
		 int b, b1, b2, b3, b4;
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			 b = b + 1;
			 if (b == 1)
			 {
				 button30->BackColor = System::Drawing::Color::Green;
			 }
			 else if (b == 2)
			 {
				 button30->BackColor = System::Drawing::Color::Red;
			 }
			 else if (b == 3)
			 {
				 button30->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (b == 4)
			 {
				 b = 0;
			 }
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 b1 = b1 + 1;
			 if (b1 == 1)
			 {
				 button29->BackColor = System::Drawing::Color::Green;
			 }
			 else if (b1 == 2)
			 {
				 button29->BackColor = System::Drawing::Color::Red;
			 }
			 else if (b1 == 3)
			 {
				 button29->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (b1 == 4)
			 {
				 b1 = 0;
			 }
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 b2 = b2 + 1;
			 if (b2 == 1)
			 {
				 button28->BackColor = System::Drawing::Color::Green;
			 }
			 else if (b2 == 2)
			 {
				 button28->BackColor = System::Drawing::Color::Red;
			 }
			 else if (b2 == 3)
			 {
				 button28->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (b2 == 4)
			 {
				 b2 = 0;
			 }
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			 b3 = b3 + 1;
			 if (b3 == 1)
			 {
				 button27->BackColor = System::Drawing::Color::Green;
			 }
			 else if (b3 == 2)
			 {
				 button29->BackColor = System::Drawing::Color::Red;
			 }
			 else if (b3 == 3)
			 {
				 button27->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (b3 == 4)
			 {
				 b3 = 0;
			 }
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 b4 = b4 + 1;
			 if (b4 == 1)
			 {
				 button26->BackColor = System::Drawing::Color::Green;
			 }
			 else if (b4 == 2)
			 {
				 button26->BackColor = System::Drawing::Color::Red;
			 }
			 else if (b4 == 3)
			 {
				 button26->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (b4 == 4)
			 {
				 b4 = 0;
			 }
}
		 int c, c1, c2, c3, c4;
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
			 c = c + 1;
			 if (c == 1)
			 {
				 button45->BackColor = System::Drawing::Color::Green;
			 }
			 else if (c == 2)
			 {
				 button45->BackColor = System::Drawing::Color::Red;
			 }
			 else if (c == 3)
			 {
				 button45->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (c == 4)
			 {
				 c = 0;
			 }
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
			 c1 = c1 + 1;
			 if (c1 == 1)
			 {
				 button44->BackColor = System::Drawing::Color::Green;
			 }
			 else if (c1 == 2)
			 {
				 button44->BackColor = System::Drawing::Color::Red;
			 }
			 else if (c1 == 3)
			 {
				 button44->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (c1 == 4)
			 {
				 c1 = 0;
			 }
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
			 c2 = c2 + 1;
			 if (c == 1)
			 {
				 button43->BackColor = System::Drawing::Color::Green;
			 }
			 else if (c2 == 2)
			 {
				 button43->BackColor = System::Drawing::Color::Red;
			 }
			 else if (c2 == 3)
			 {
				 button43->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (c2 == 4)
			 {
				 c2 = 0;
			 }
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
			 c3 = c3 + 1;
			 if (c3 == 1)
			 {
				 button42->BackColor = System::Drawing::Color::Green;
			 }
			 else if (c3 == 2)
			 {
				 button42->BackColor = System::Drawing::Color::Red;
			 }
			 else if (c3 == 3)
			 {
				 button42->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (c3 == 4)
			 {
				 c3 = 0;
			 }
}
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
			 c4 = c4 + 1;
			 if (c4 == 1)
			 {
				 button41->BackColor = System::Drawing::Color::Green;
			 }
			 else if (c4 == 2)
			 {
				 button41->BackColor = System::Drawing::Color::Red;
			 }
			 else if (c4 == 3)
			 {
				 button41->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (c4 == 4)
			 {
				 c4 = 0;
			 }
}
		 int d, d1, d2, d3, d4;
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
			 d = d + 1;
			 if (d == 1)
			 {
				 button60->BackColor = System::Drawing::Color::Green;
			 }
			 else if (d == 2)
			 {
				 button60->BackColor = System::Drawing::Color::Red;
			 }
			 else if (d == 3)
			 {
				 button60->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (d == 4)
			 {
				 d = 0;
			 }
}
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
			 d1 = d1 + 1;
			 if (d1 == 1)
			 {
				 button59->BackColor = System::Drawing::Color::Green;
			 }
			 else if (d1 == 2)
			 {
				 button59->BackColor = System::Drawing::Color::Red;
			 }
			 else if (d1 == 3)
			 {
				 button59->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (d1 == 4)
			 {
				 d1 = 0;
			 }
}
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
			 d2 = d2 + 1;
			 if (d2 == 1)
			 {
				 button58->BackColor = System::Drawing::Color::Green;
			 }
			 else if (d2 == 2)
			 {
				 button58->BackColor = System::Drawing::Color::Red;
			 }
			 else if (d2 == 3)
			 {
				 button58->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (d2 == 4)
			 {
				 d2 = 0;
			 }
}
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
			 d3 = d3 + 1;
			 if (d3 == 1)
			 {
				 button57->BackColor = System::Drawing::Color::Green;
			 }
			 else if (d3 == 2)
			 {
				 button57->BackColor = System::Drawing::Color::Red;
			 }
			 else if (d3 == 3)
			 {
				 button57->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (d3 == 4)
			 {
				 d3 = 0;
			 }
}
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
			 d4 = d4 + 1;
			 if (d4 == 1)
			 {
				 button56->BackColor = System::Drawing::Color::Green;
			 }
			 else if (d4 == 2)
			 {
				 button56->BackColor = System::Drawing::Color::Red;
			 }
			 else if (d4 == 3)
			 {
				 button56->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (d4 == 4)
			 {
				 d4 = 0;
			 }
			
}
		 int e5, e1, e2, e3, e4;
private: System::Void button75_Click(System::Object^  sender, System::EventArgs^  e) {
			 e1 = e1 + 1;
			 if (e1 == 1)
			 {
				 button75->BackColor = System::Drawing::Color::Green;
			 }
			 else if (e1 == 2)
			 {
				 button75->BackColor = System::Drawing::Color::Red;
			 }
			 else if (e1 == 3)
			 {
				 button75->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (e1 == 4)
			 {
				 e1 = 0;
			 }
}
private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
			 e2 = e2 + 1;
			 if (e2 == 1)
			 {
				 button74->BackColor = System::Drawing::Color::Green;
			 }
			 else if (e2 == 2)
			 {
				 button74->BackColor = System::Drawing::Color::Red;
			 }
			 else if (e2 == 3)
			 {
				 button74->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (e2 == 4)
			 {
				 e2 = 0;
			 }
}
private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
			 e3 = e3 + 1;
			 if (e3 == 1)
			 {
				 button73->BackColor = System::Drawing::Color::Green;
			 }
			 else if (e3 == 2)
			 {
				 button73->BackColor = System::Drawing::Color::Red;
			 }
			 else if (e3 == 3)
			 {
				 button73->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (e3 == 4)
			 {
				 e3 = 0;
			 }
}
private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
			 e4 = e4 + 1;
			 if (e4 == 1)
			 {
				 button72->BackColor = System::Drawing::Color::Green;
			 }
			 else if (e4 == 2)
			 {
				 button72->BackColor = System::Drawing::Color::Red;
			 }
			 else if (e4 == 3)
			 {
				 button72->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (e4 == 4)
			 {
				 e4 = 0;
			 }
}
private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
			 e5 = e5 + 1;
			 if (e5 == 1)
			 {
				 button71->BackColor = System::Drawing::Color::Green;
			 }
			 else if (e5 == 2)
			 {
				 button71->BackColor = System::Drawing::Color::Red;
			 }
			 else if (e5 == 3)
			 {
				 button71->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (e5 == 4)
			 {
				 e5 = 0;
			 }
}
		 int f, f1, f2, f3, f4;
private: System::Void button90_Click(System::Object^  sender, System::EventArgs^  e) {
			 f = f + 1;
			 if (f == 1)
			 {
				 button90->BackColor = System::Drawing::Color::Green;
			 }
			 else if (f == 2)
			 {
				 button90->BackColor = System::Drawing::Color::Red;
			 }
			 else if (f == 3)
			 {
				 button90->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (f == 4)
			 {
				 f = 0;
			 }
}
private: System::Void button89_Click(System::Object^  sender, System::EventArgs^  e) {
			 f1 = f1 + 1;
			 if (f1 == 1)
			 {
				 button89->BackColor = System::Drawing::Color::Green;
			 }
			 else if (f1 == 2)
			 {
				 button89->BackColor = System::Drawing::Color::Red;
			 }
			 else if (f1 == 3)
			 {
				 button89->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (f1 == 4)
			 {
				 f1 = 0;
			 }
}
private: System::Void button88_Click(System::Object^  sender, System::EventArgs^  e) {
			 f2 = f2 + 1;
			 if (f2 == 1)
			 {
				 button88->BackColor = System::Drawing::Color::Green;
			 }
			 else if (f2 == 2)
			 {
				 button88->BackColor = System::Drawing::Color::Red;
			 }
			 else if (f2 == 3)
			 {
				 button88->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (f2 == 4)
			 {
				 f2 = 0;
			 }
}
private: System::Void button87_Click(System::Object^  sender, System::EventArgs^  e) {
			 f3 = f3 + 1;
			 if (f3 == 1)
			 {
				 button87->BackColor = System::Drawing::Color::Green;
			 }
			 else if (f3 == 2)
			 {
				 button87->BackColor = System::Drawing::Color::Red;
			 }
			 else if (f3 == 3)
			 {
				 button87->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (f3 == 4)
			 {
				 f3 = 0;
			 }
}
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
			 f4 = f4 + 1;
			 if (f4 == 1)
			 {
				 button86->BackColor = System::Drawing::Color::Green;
			 }
			 else if (f4 == 2)
			 {
				 button86->BackColor = System::Drawing::Color::Red;
			 }
			 else if (f4 == 3)
			 {
				 button86->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (f4 == 4)
			 {
				 f4 = 0;
			 }
}
		 int g, g1, g2, g3, g4;
private: System::Void button105_Click(System::Object^  sender, System::EventArgs^  e) {
			 g = g + 1;
			 if (g == 1)
			 {
				 button105->BackColor = System::Drawing::Color::Green;
			 }
			 else if (g == 2)
			 {
				 button105->BackColor = System::Drawing::Color::Red;
			 }
			 else if (g == 3)
			 {
				 button105->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (g == 4)
			 {
				 g = 0;
			 }
}
private: System::Void button104_Click(System::Object^  sender, System::EventArgs^  e) {
			 g1 = g1 + 1;
			 if (g1 == 1)
			 {
				 button104->BackColor = System::Drawing::Color::Green;
			 }
			 else if (g1 == 2)
			 {
				 button104->BackColor = System::Drawing::Color::Red;
			 }
			 else if (g1 == 3)
			 {
				 button104->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (g1 == 4)
			 {
				 g1 = 0;
			 }
}
private: System::Void button103_Click(System::Object^  sender, System::EventArgs^  e) {
			 g2 = g2 + 1;
			 if (g2 == 1)
			 {
				 button103->BackColor = System::Drawing::Color::Green;
			 }
			 else if (g2 == 2)
			 {
				 button103->BackColor = System::Drawing::Color::Red;
			 }
			 else if (g2 == 3)
			 {
				 button103->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (g2 == 4)
			 {
				 g2 = 0;
			 }
}
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
			 g3 = g3 + 1;
			 if (g == 1)
			 {
				 button102->BackColor = System::Drawing::Color::Green;
			 }
			 else if (g3 == 2)
			 {
				 button102->BackColor = System::Drawing::Color::Red;
			 }
			 else if (g3 == 3)
			 {
				 button102->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (g3 == 4)
			 {
				 g3 = 0;
			 }
}
private: System::Void button101_Click(System::Object^  sender, System::EventArgs^  e) {
			 g4 = g4 + 1;
			 if (g4 == 1)
			 {
				 button101->BackColor = System::Drawing::Color::Green;
			 }
			 else if (g4 == 2)
			 {
				 button101->BackColor = System::Drawing::Color::Red;
			 }
			 else if (g4 == 3)
			 {
				 button101->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (g4 == 4)
			 {
				 g4 = 0;
			 }
}
		 int h, h1, h2, h3, h4;
private: System::Void button120_Click(System::Object^  sender, System::EventArgs^  e) {
			 h = h + 1;
			 if (h == 1)
			 {
				 button120->BackColor = System::Drawing::Color::Green;
			 }
			 else if (h == 2)
			 {
				 button120->BackColor = System::Drawing::Color::Red;
			 }
			 else if (h == 3)
			 {
				 button120->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (h == 4)
			 {
				 h = 0;
			 }
}
private: System::Void button119_Click(System::Object^  sender, System::EventArgs^  e) {
			 h1 = h1 + 1;
			 if (h1 == 1)
			 {
				 button119->BackColor = System::Drawing::Color::Green;
			 }
			 else if (h1 == 2)
			 {
				 button119->BackColor = System::Drawing::Color::Red;
			 }
			 else if (h1 == 3)
			 {
				 button119->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (h1 == 4)
			 {
				 h1 = 0;
			 }
}
private: System::Void button118_Click(System::Object^  sender, System::EventArgs^  e) {
			 h2 = h2 + 1;
			 if (h2 == 1)
			 {
				 button118->BackColor = System::Drawing::Color::Green;
			 }
			 else if (h2 == 2)
			 {
				 button118->BackColor = System::Drawing::Color::Red;
			 }
			 else if (h2 == 3)
			 {
				 button118->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (h2 == 4)
			 {
				 h2 = 0;
			 }
}
private: System::Void button117_Click(System::Object^  sender, System::EventArgs^  e) {
			 h3 = h3 + 1;
			 if (h3 == 1)
			 {
				 button117->BackColor = System::Drawing::Color::Green;
			 }
			 else if (h3 == 2)
			 {
				 button117->BackColor = System::Drawing::Color::Red;
			 }
			 else if (h3 == 3)
			 {
				 button117->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (h3 == 4)
			 {
				 h3 = 0;
			 }
}
private: System::Void button116_Click(System::Object^  sender, System::EventArgs^  e) {
			 h4 = h4 + 1;
			 if (h4 == 1)
			 {
				 button116->BackColor = System::Drawing::Color::Green;
			 }
			 else if (h4 == 2)
			 {
				 button116->BackColor = System::Drawing::Color::Red;
			 }
			 else if (h4 == 3)
			 {
				 button116->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (h4 == 4)
			 {
				 h4 = 0;
			 }
}
		 int i, i1, i2, i3, i4;
private: System::Void button135_Click(System::Object^  sender, System::EventArgs^  e) {
			 i = i + 1;
			 if (i == 1)
			 {
				 button135->BackColor = System::Drawing::Color::Green;
			 }
			 else if (i == 2)
			 {
				 button135->BackColor = System::Drawing::Color::Red;
			 }
			 else if (i == 3)
			 {
				 button135->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (i == 4)
			 {
				 i = 0;
			 }
}
private: System::Void button134_Click(System::Object^  sender, System::EventArgs^  e) {
			 i1 = i1 + 1;
			 if (i1 == 1)
			 {
				 button134->BackColor = System::Drawing::Color::Green;
			 }
			 else if (i1 == 2)
			 {
				 button134->BackColor = System::Drawing::Color::Red;
			 }
			 else if (i1 == 3)
			 {
				 button134->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (i1 == 4)
			 {
				 i1 = 0;
			 }
}
private: System::Void button133_Click(System::Object^  sender, System::EventArgs^  e) {
			 i2 = i2 + 1;
			 if (i2 == 1)
			 {
				 button133->BackColor = System::Drawing::Color::Green;
			 }
			 else if (i2 == 2)
			 {
				 button133->BackColor = System::Drawing::Color::Red;
			 }
			 else if (i2 == 3)
			 {
				 button133->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (i2 == 4)
			 {
				 i2 = 0;
			 }
}
private: System::Void button132_Click(System::Object^  sender, System::EventArgs^  e) {
			 i3 = i3 + 1;
			 if (i3 == 1)
			 {
				 button132->BackColor = System::Drawing::Color::Green;
			 }
			 else if (i3 == 2)
			 {
				 button132->BackColor = System::Drawing::Color::Red;
			 }
			 else if (i3 == 3)
			 {
				 button132->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (i3 == 4)
			 {
				 i3 = 0;
			 }
}
private: System::Void button131_Click(System::Object^  sender, System::EventArgs^  e) {
			 i4 = i4 + 1;
			 if (i4 == 1)
			 {
				 button131->BackColor = System::Drawing::Color::Green;
			 }
			 else if (i4 == 2)
			 {
				 button131->BackColor = System::Drawing::Color::Red;
			 }
			 else if (i4 == 3)
			 {
				 button131->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (i4 == 4)
			 {
				 i4 = 0;
			 }
}
		 

int j=0, j1=0, j2=0, j3=0, j4=0; 

private: System::Void button150_Click(System::Object^  sender, System::EventArgs^  e) {
			 j4 = j4 + 1;
			 if (j4 == 1)
			 {
				 button150->BackColor = System::Drawing::Color::Green;
			 }
			 else if (j4 == 2)
			 {
				 button150->BackColor = System::Drawing::Color::Red;
			 }
			 else if (j4 == 3)
			 {
				 button150->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (j4 == 4)
			 {
				 j4 = 0;
			 }
}





private: System::Void button146_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 j3 = j3 + 1;
			 if (j3 == 1)
			 {
				 button146->BackColor = System::Drawing::Color::Green;
			 }
			 else if (j3 == 2)
			 {
				 button146->BackColor = System::Drawing::Color::Red;
			 }
			 else if (j3 == 3)
			 {
				 button146->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (j3 == 4)
			 {
				 j3 = 0;
			 }
}
private: System::Void button147_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 j2 = j2 + 1;
			 if (j2 == 1)
			 {
				 button147->BackColor = System::Drawing::Color::Green;
			 }
			 else if (j2 == 2)
			 {
				 button147->BackColor = System::Drawing::Color::Red;
			 }
			 else if (j2 == 3)
			 {
				 button147->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (j2 == 4)
			 {
				 j2 = 0;
			 }
}
private: System::Void button148_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 j1 = j1 + 1;
			 if (j1 == 1)
			 {
				 button148->BackColor = System::Drawing::Color::Green;
			 }
			 else if (j1 == 2)
			 {
				 button148->BackColor = System::Drawing::Color::Red;
			 }
			 else if (j1 == 3)
			 {
				 button148->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (j1 == 4)
			 {
				 j1 = 0;
			 }
}
private: System::Void button149_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 j = j + 1;
			 if (j == 1)
			 {
				 button149->BackColor = System::Drawing::Color::Green;
			 }
			 else if (j == 2)
			 {
				 button149->BackColor = System::Drawing::Color::Red;
			 }
			 else if (j == 3)
			 {
				 button149->BackColor = System::Drawing::Color::Yellow;
			 }
			 else if (j == 4)
			 {
				 j = 0;
			 }
}
};
 }
