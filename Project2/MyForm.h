#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::Drawing;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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

	private: Color GetSelectedColor() {
		switch (comboBox1->SelectedIndex) {
		case 0: return Color::Red;
		case 1: return Color::Blue;
		case 2: return Color::Green;
		case 3: return Color::Black;
		default: return Color::Black;
		}
	}

	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(13, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(995, 586);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(987, 553);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завд2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->button2->Location = System::Drawing::Point(691, 425);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 49);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->button1->Location = System::Drawing::Point(691, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(128, 39);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(331, 448);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(128, 39);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(331, 448);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(128, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(331, 448);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(987, 553);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завд1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(598, 376);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Оберіть колір";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Червоний", L"Синій", L"Зелений", L"Чорний" });
			this->comboBox1->Location = System::Drawing::Point(602, 413);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(325, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Лінія", L"Прямокутник", L"Зафарбований прямокутник",
					L"Еліпс", L"Зафарбований еліпс", L"Сектор", L"Зірка", L"Паралелограм", L"Трикутник", L"Будиночок"
			});
			this->listBox1->Location = System::Drawing::Point(602, 35);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(325, 304);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->pictureBox12);
			this->tabPage3->Controls->Add(this->pictureBox11);
			this->tabPage3->Controls->Add(this->pictureBox10);
			this->tabPage3->Controls->Add(this->pictureBox9);
			this->tabPage3->Controls->Add(this->pictureBox8);
			this->tabPage3->Controls->Add(this->pictureBox7);
			this->tabPage3->Controls->Add(this->pictureBox6);
			this->tabPage3->Controls->Add(this->pictureBox5);
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(987, 553);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завд3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(463, 367);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(157, 178);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 13;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(230, 386);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(215, 137);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 12;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(41, 367);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(165, 178);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 11;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(463, 222);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(157, 126);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 10;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(254, 236);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(173, 126);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 9;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(41, 222);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(165, 126);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(463, 42);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(157, 162);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(254, 42);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(173, 174);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(41, 42);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(165, 162);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button3->Location = System::Drawing::Point(731, 453);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(198, 60);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Вимовити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(752, 398);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Натисни кнопку";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(752, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Обери тварину";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 25;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Кіт", L"Собака", L"Хом\'як", L"Жаба", L"Миша",
					L"Змія", L"Слон", L"Кажан", L"Ведмідь"
			});
			this->listBox2->Location = System::Drawing::Point(750, 76);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(159, 254);
			this->listBox2->TabIndex = 1;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(333, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(219, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Тварини - Animals";
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 587);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ graf = tabPage1->CreateGraphics();

		// Очищаємо полотно перед новим малюванням
		graf->Clear(Color::White);

		// Отримуємо вибраний користувачем колір з ComboBox
		Color userColor = GetSelectedColor();
		Pen^ userPen = gcnew Pen(userColor, 3);
		SolidBrush^ userBrush = gcnew SolidBrush(userColor);

		switch (listBox1->SelectedIndex)
		{
		case 0: // Лінія
			graf->DrawLine(userPen, 50, 40, 250, 160);
			break;

		case 1: // Прямокутник
			graf->DrawRectangle(userPen, 40, 40, 150, 80);
			break;

		case 2: // Зафарбований прямокутник
			graf->FillRectangle(userBrush, 40, 40, 150, 80);
			break;

		case 3: // Еліпс
			graf->DrawEllipse(userPen, 40, 40, 200, 140);
			break;

		case 4: // Зафарбований еліпс
			graf->FillEllipse(userBrush, 40, 40, 200, 140);
			break;

		case 5: // Сектор
			graf->FillPie(userBrush, 40, 40, 200, 200, 180, 90);
			break;

		case 6: // Зірка
		{
			cli::array<Point>^ starPoints = gcnew cli::array<Point>{
				Point(120, 30), Point(145, 100), Point(215, 100),
					Point(155, 150), Point(180, 230), Point(120, 180),
					Point(60, 230), Point(85, 150), Point(25, 100), Point(95, 100)
			};
			graf->FillPolygon(userBrush, starPoints);
			graf->DrawPolygon(userPen, starPoints);
			break;
		}

		case 7: // Паралелограм
		{
			cli::array<Point>^ parallelogramPoints = gcnew cli::array<Point>{
				Point(80, 50), Point(220, 50), Point(180, 130), Point(40, 130)
			};
			graf->FillPolygon(userBrush, parallelogramPoints);
			graf->DrawPolygon(userPen, parallelogramPoints);
			break;
		}

		case 8: // 4. Трикутник (DrawPolygon)
		{
			cli::array<Point>^ trianglePoints = gcnew cli::array<Point>{
				Point(130, 40),  // Верхня вершина
					Point(50, 160),  // Нижня ліва
					Point(210, 160)  // Нижня права
			};
			graf->DrawPolygon(userPen, trianglePoints);
			break;
		}

		case 9: // 6. Будиночок
		{
			// 1. Стіни (прямокутник)
			graf->DrawRectangle(userPen, 80, 110, 120, 100);

			// 2. Дах (трикутник)
			cli::array<Point>^ roofPoints = gcnew cli::array<Point>{
				Point(140, 50),  // Вершина даху
					Point(70, 110),  // Лівий край
					Point(210, 110)  // Правий край
			};
			graf->DrawPolygon(userPen, roofPoints);

			// 3. Двері (малий прямокутник)
			graf->DrawRectangle(userPen, 125, 150, 30, 60);
			break;
		}
		}
	}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Items->Count > 0) {
		comboBox1->SelectedIndex = 0;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Interval = 500;
	timer2->Interval = 500;
	timer3->Interval = 500;

	timer1->Enabled = true;
	timer2->Enabled = false;
	timer3->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	timer2->Enabled = false;
	timer3->Enabled = false;

	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = true;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;

	timer2->Enabled = true;
	timer2->Interval = 500;
	timer1->Enabled = false;
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = false;
	pictureBox2->Visible = true;
	pictureBox3->Visible = false;

	timer3->Enabled = true;
	timer3->Interval = 500;
	timer2->Enabled = false;
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = true;

	timer1->Enabled = true;
	timer1->Interval = 500;
	timer3->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox2->SelectedIndex == -1) {
		MessageBox::Show("Виберіть слово зі списку!");
		return;
	}

	String^ path = "";

	switch (listBox2->SelectedIndex) {
	case 0: path = "pronunciation_en_cat.wav"; break;
	case 1: path = "pronunciation_en_dog.wav"; break;
	case 2: path = "pronunciation_en_hamster.wav"; break;
	case 3: path = "pronunciation_en_frog.wav"; break;
	case 4: path = "pronunciation_en_mouse.wav"; break;
	case 5: path = "pronunciation_en_snake.wav"; break;
	case 6: path = "pronunciation_en_elephant.wav"; break;
	case 7: path = "pronunciation_en_bat.wav"; break;
	case 8: path = "pronunciation_en_bear.wav"; break;
	default:
		MessageBox::Show("Немає відповідного файлу!");
		return;
	}

	try {
		System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer(path);
		player->Load();
		player->Play();
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Помилка завантаження аудіофайлу: " + path);
	}


}

};
}
