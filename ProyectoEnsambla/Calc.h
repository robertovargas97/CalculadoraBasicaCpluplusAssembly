#pragma once
#include "Funciones.h"


namespace ProyectoEnsambla {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Calc
	/// </summary>
	public ref class Calc : public System::Windows::Forms::Form
	{

		CFunciones ^objFuncion = gcnew CFunciones();
	private: System::Windows::Forms::Button^  btnPunto;
	private: System::Windows::Forms::Button^  btnDel;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  cajaR;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::Button^  button2;

	public:
		Calc(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Calc()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^  expresion;
	private: System::Windows::Forms::Button^  btn9;


	private: System::Windows::Forms::Button^  btn6;

	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnMas;
	private: System::Windows::Forms::Button^  btnExp;



	private: System::Windows::Forms::Button^  btn8;

	private: System::Windows::Forms::Button^  btn5;

	private: System::Windows::Forms::Button^  btn2;

	private: System::Windows::Forms::Button^  btnCero;
	private: System::Windows::Forms::Button^  btnFac;


	private: System::Windows::Forms::Button^  btn7;

	private: System::Windows::Forms::Button^  btn4;

	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btnMenos;
	private: System::Windows::Forms::Button^  btnRaiz;



	private: System::Windows::Forms::Button^  btnIgual;

	private: System::Windows::Forms::Button^  btnDiv;

	private: System::Windows::Forms::Button^  btnMult;
	private: System::Windows::Forms::Button^  btnAbs;


	private: System::Windows::Forms::Button^  btnAC;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Calc::typeid));
			this->expresion = (gcnew System::Windows::Forms::TextBox());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMas = (gcnew System::Windows::Forms::Button());
			this->btnExp = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnCero = (gcnew System::Windows::Forms::Button());
			this->btnFac = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnMenos = (gcnew System::Windows::Forms::Button());
			this->btnRaiz = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnAbs = (gcnew System::Windows::Forms::Button());
			this->btnAC = (gcnew System::Windows::Forms::Button());
			this->btnPunto = (gcnew System::Windows::Forms::Button());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->cajaR = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// expresion
			// 
			this->expresion->BackColor = System::Drawing::Color::Silver;
			this->expresion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expresion->ForeColor = System::Drawing::SystemColors::WindowText;
			this->expresion->Location = System::Drawing::Point(21, 18);
			this->expresion->Name = L"expresion";
			this->expresion->Size = System::Drawing::Size(226, 22);
			this->expresion->TabIndex = 1;
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::Info;
			this->btn9->Location = System::Drawing::Point(111, 77);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(47, 43);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Calc::btn9_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::Info;
			this->btn6->Location = System::Drawing::Point(111, 119);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(47, 43);
			this->btn6->TabIndex = 3;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Calc::btn6_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::Info;
			this->btn3->Location = System::Drawing::Point(111, 161);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(47, 43);
			this->btn3->TabIndex = 4;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Calc::btn3_Click);
			// 
			// btnMas
			// 
			this->btnMas->BackColor = System::Drawing::Color::OrangeRed;
			this->btnMas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMas->ForeColor = System::Drawing::SystemColors::Info;
			this->btnMas->Location = System::Drawing::Point(155, 203);
			this->btnMas->Name = L"btnMas";
			this->btnMas->Size = System::Drawing::Size(47, 43);
			this->btnMas->TabIndex = 5;
			this->btnMas->Text = L"+";
			this->btnMas->UseVisualStyleBackColor = false;
			this->btnMas->Click += gcnew System::EventHandler(this, &Calc::btnMas_Click);
			// 
			// btnExp
			// 
			this->btnExp->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExp->ForeColor = System::Drawing::Color::White;
			this->btnExp->Location = System::Drawing::Point(66, 245);
			this->btnExp->Name = L"btnExp";
			this->btnExp->Size = System::Drawing::Size(47, 43);
			this->btnExp->TabIndex = 6;
			this->btnExp->Text = L"Exp";
			this->btnExp->UseVisualStyleBackColor = false;
			this->btnExp->Click += gcnew System::EventHandler(this, &Calc::button6_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::Info;
			this->btn8->Location = System::Drawing::Point(66, 77);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(47, 43);
			this->btn8->TabIndex = 7;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Calc::btn8_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::Info;
			this->btn5->Location = System::Drawing::Point(66, 119);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(47, 43);
			this->btn5->TabIndex = 8;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Calc::btn5_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::Info;
			this->btn2->Location = System::Drawing::Point(66, 161);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(47, 43);
			this->btn2->TabIndex = 9;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Calc::button9_Click);
			// 
			// btnCero
			// 
			this->btnCero->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnCero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCero->ForeColor = System::Drawing::SystemColors::Info;
			this->btnCero->Location = System::Drawing::Point(21, 203);
			this->btnCero->Name = L"btnCero";
			this->btnCero->Size = System::Drawing::Size(47, 43);
			this->btnCero->TabIndex = 10;
			this->btnCero->Text = L"0";
			this->btnCero->UseVisualStyleBackColor = false;
			this->btnCero->Click += gcnew System::EventHandler(this, &Calc::button10_Click);
			// 
			// btnFac
			// 
			this->btnFac->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnFac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFac->ForeColor = System::Drawing::Color::White;
			this->btnFac->Location = System::Drawing::Point(199, 119);
			this->btnFac->Name = L"btnFac";
			this->btnFac->Size = System::Drawing::Size(48, 43);
			this->btnFac->TabIndex = 11;
			this->btnFac->Text = L"Fact";
			this->btnFac->UseVisualStyleBackColor = false;
			this->btnFac->Click += gcnew System::EventHandler(this, &Calc::btnFac_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::Info;
			this->btn7->Location = System::Drawing::Point(21, 77);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(47, 43);
			this->btn7->TabIndex = 12;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Calc::btn7_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::Info;
			this->btn4->Location = System::Drawing::Point(21, 119);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(47, 43);
			this->btn4->TabIndex = 13;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Calc::btn4_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::Info;
			this->btn1->Location = System::Drawing::Point(21, 161);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(47, 43);
			this->btn1->TabIndex = 14;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Calc::button14_Click);
			// 
			// btnMenos
			// 
			this->btnMenos->BackColor = System::Drawing::Color::OrangeRed;
			this->btnMenos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMenos->ForeColor = System::Drawing::SystemColors::Info;
			this->btnMenos->Location = System::Drawing::Point(201, 203);
			this->btnMenos->Name = L"btnMenos";
			this->btnMenos->Size = System::Drawing::Size(46, 43);
			this->btnMenos->TabIndex = 15;
			this->btnMenos->Text = L"-";
			this->btnMenos->UseVisualStyleBackColor = false;
			this->btnMenos->Click += gcnew System::EventHandler(this, &Calc::btnMenos_Click);
			// 
			// btnRaiz
			// 
			this->btnRaiz->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnRaiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRaiz->ForeColor = System::Drawing::Color::White;
			this->btnRaiz->Location = System::Drawing::Point(111, 203);
			this->btnRaiz->Name = L"btnRaiz";
			this->btnRaiz->Size = System::Drawing::Size(45, 43);
			this->btnRaiz->TabIndex = 16;
			this->btnRaiz->Text = L"sqrt";
			this->btnRaiz->UseVisualStyleBackColor = false;
			this->btnRaiz->Click += gcnew System::EventHandler(this, &Calc::button16_Click);
			// 
			// btnIgual
			// 
			this->btnIgual->BackColor = System::Drawing::Color::OrangeRed;
			this->btnIgual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIgual->ForeColor = System::Drawing::SystemColors::Info;
			this->btnIgual->Location = System::Drawing::Point(155, 245);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(47, 43);
			this->btnIgual->TabIndex = 17;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = false;
			this->btnIgual->Click += gcnew System::EventHandler(this, &Calc::btnIgual_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->BackColor = System::Drawing::Color::OrangeRed;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->ForeColor = System::Drawing::SystemColors::Info;
			this->btnDiv->Location = System::Drawing::Point(200, 161);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(47, 43);
			this->btnDiv->TabIndex = 18;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Calc::btnDiv_Click);
			// 
			// btnMult
			// 
			this->btnMult->BackColor = System::Drawing::Color::OrangeRed;
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->ForeColor = System::Drawing::SystemColors::Info;
			this->btnMult->Location = System::Drawing::Point(155, 161);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(47, 43);
			this->btnMult->TabIndex = 19;
			this->btnMult->Text = L"x";
			this->btnMult->UseVisualStyleBackColor = false;
			this->btnMult->Click += gcnew System::EventHandler(this, &Calc::btnMult_Click);
			// 
			// btnAbs
			// 
			this->btnAbs->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnAbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbs->ForeColor = System::Drawing::Color::White;
			this->btnAbs->Location = System::Drawing::Point(155, 119);
			this->btnAbs->Name = L"btnAbs";
			this->btnAbs->Size = System::Drawing::Size(47, 43);
			this->btnAbs->TabIndex = 20;
			this->btnAbs->Text = L"Abs";
			this->btnAbs->UseVisualStyleBackColor = false;
			this->btnAbs->Click += gcnew System::EventHandler(this, &Calc::button20_Click);
			// 
			// btnAC
			// 
			this->btnAC->BackColor = System::Drawing::Color::DarkRed;
			this->btnAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAC->ForeColor = System::Drawing::Color::Snow;
			this->btnAC->Location = System::Drawing::Point(199, 77);
			this->btnAC->Name = L"btnAC";
			this->btnAC->Size = System::Drawing::Size(48, 43);
			this->btnAC->TabIndex = 21;
			this->btnAC->Text = L"AC";
			this->btnAC->UseVisualStyleBackColor = false;
			this->btnAC->Click += gcnew System::EventHandler(this, &Calc::btnAC_Click);
			// 
			// btnPunto
			// 
			this->btnPunto->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnPunto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPunto->ForeColor = System::Drawing::SystemColors::Info;
			this->btnPunto->Location = System::Drawing::Point(66, 203);
			this->btnPunto->Name = L"btnPunto";
			this->btnPunto->Size = System::Drawing::Size(47, 43);
			this->btnPunto->TabIndex = 22;
			this->btnPunto->Text = L".";
			this->btnPunto->UseVisualStyleBackColor = false;
			this->btnPunto->Click += gcnew System::EventHandler(this, &Calc::btnPunto_Click);
			// 
			// btnDel
			// 
			this->btnDel->BackColor = System::Drawing::Color::DarkRed;
			this->btnDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDel->ForeColor = System::Drawing::Color::Snow;
			this->btnDel->Location = System::Drawing::Point(155, 77);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(47, 43);
			this->btnDel->TabIndex = 23;
			this->btnDel->Text = L"DEL";
			this->btnDel->UseVisualStyleBackColor = false;
			this->btnDel->Click += gcnew System::EventHandler(this, &Calc::button2_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(21, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 43);
			this->button1->TabIndex = 24;
			this->button1->Text = L"e";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calc::button1_Click_2);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(111, 245);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 43);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Pi";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calc::button2_Click);
			// 
			// cajaR
			// 
			this->cajaR->BackColor = System::Drawing::Color::Silver;
			this->cajaR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cajaR->Location = System::Drawing::Point(21, 40);
			this->cajaR->Name = L"cajaR";
			this->cajaR->Size = System::Drawing::Size(226, 23);
			this->cajaR->TabIndex = 26;
			this->cajaR->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::OrangeRed;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(201, 245);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(46, 43);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Ans";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calc::button3_Click);
			// 
			// Calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(268, 312);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->cajaR);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->btnPunto);
			this->Controls->Add(this->btnAC);
			this->Controls->Add(this->btnAbs);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->btnRaiz);
			this->Controls->Add(this->btnMenos);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnFac);
			this->Controls->Add(this->btnCero);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btnExp);
			this->Controls->Add(this->btnMas);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->expresion);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calc";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Calc::Calc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		System::String^ h = expresion->Text;
		h = h + "1";
		expresion->Text = h;
	}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "2";
	expresion->Text = h;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "^";
	expresion->Text = h;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "0";
	expresion->Text = h;
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "3";
	expresion->Text = h;
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "4";
	expresion->Text = h;
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "5";
	expresion->Text = h;
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "6";
	expresion->Text = h;
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "7";
	expresion->Text = h;
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "8";
	expresion->Text = h;
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "9";
	expresion->Text = h;
}
private: System::Void btnAC_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ cadena = "";
	expresion->Text = cadena;
	cajaR->Text = cadena;
}
private: System::Void btnMas_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "+";
	expresion->Text = h;
}
private: System::Void btnMenos_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "-";
	expresion->Text = h;
}
private: System::Void btnMult_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "*";
	expresion->Text = h;
}
private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "/";
	expresion->Text = h;
}
private: System::Void btnPunto_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + ".";
	expresion->Text = h;
}
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string hileraConvertida = msclr::interop::marshal_as<std::string>(expresion->Text);
	double res = objFuncion->evaluar(objFuncion->convertir(hileraConvertida));
	cajaR->Text =  System::Convert::ToString(res);		
}
private: System::Void btnFac_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	if (h->Length > 0) {
		int exp = System::Convert::ToInt32(expresion->Text);
		int res = objFuncion->factorial(exp);
		cajaR->Text = System::Convert::ToString(res);
	}
}

private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	if (h->Length > 0) {
		int res = objFuncion->valorAbsoluto(System::Convert::ToInt32(h));
		cajaR->Text = System::Convert::ToString(res);
	}
}


private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	if (h->Length > 0) {
		h = h->Substring(0, h->Length - 1);
		expresion->Text = h;
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	if (h->Length > 0) {
		double res = objFuncion->raizCuadrada(System::Convert::ToDouble(h));
		cajaR->Text = System::Convert::ToString(res);
	}
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "3.141592654";
	expresion->Text = h;
}
private: System::Void Calc_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = expresion->Text;
	h = h + "2.718281828";
	expresion->Text = h;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ h = cajaR->Text;
	if (h->Length > 0) {
		double res = System::Convert::ToDouble(h);
		expresion->Text = System::Convert::ToString(res);
	}
}
};
}
