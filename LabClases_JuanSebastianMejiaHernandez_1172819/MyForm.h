#pragma once
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Pentagono.h"
#include "Hexagono.h"
#include "Heptagono.h"
#include "Octagono.h"
#include "Eneagono.h"
#include "Decagono.h"

namespace LabClasesJuanSebastianMejiaHernandez1172819 {

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
	private: System::Windows::Forms::ComboBox^ comboBoxLados;
	private: System::Windows::Forms::TextBox^ textBoxMedida;
	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelRespuesta;
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
			this->comboBoxLados = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxMedida = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelRespuesta = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBoxLados
			// 
			this->comboBoxLados->FormattingEnabled = true;
			this->comboBoxLados->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"10" });
			this->comboBoxLados->Location = System::Drawing::Point(70, 24);
			this->comboBoxLados->Name = L"comboBoxLados";
			this->comboBoxLados->Size = System::Drawing::Size(121, 21);
			this->comboBoxLados->TabIndex = 0;
			// 
			// textBoxMedida
			// 
			this->textBoxMedida->Location = System::Drawing::Point(70, 85);
			this->textBoxMedida->Name = L"textBoxMedida";
			this->textBoxMedida->Size = System::Drawing::Size(121, 20);
			this->textBoxMedida->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Perimetro";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(70, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Area";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Lados de la figura:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(67, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Cuanto mide el lado:";
			// 
			// labelRespuesta
			// 
			this->labelRespuesta->AutoSize = true;
			this->labelRespuesta->Location = System::Drawing::Point(67, 205);
			this->labelRespuesta->Name = L"labelRespuesta";
			this->labelRespuesta->Size = System::Drawing::Size(0, 13);
			this->labelRespuesta->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->labelRespuesta);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxMedida);
			this->Controls->Add(this->comboBoxLados);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Triangulo* triangulo = new Triangulo();
		Cuadrado* cuadrado = new Cuadrado();
		Pentagono* pentagono = new Pentagono();
		Hexagono* hexagono = new Hexagono();
		Heptagono* heptagono = new Heptagono();
		Octagono* octagono = new Octagono();
		Eneagono* eneagono = new Eneagono();
		Decagono* decagono = new Decagono();


	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int opcion = Convert::ToDouble(comboBoxLados->Text);

		switch (opcion)
		{
		case 3:
			labelRespuesta->Text = triangulo->ObtenerPerimetro(Convert::ToDouble(textBoxMedida->Text)).ToString();
			break;
		case 4:
			labelRespuesta->Text = cuadrado->ObtenerPerimetro(Convert::ToDouble(textBoxMedida->Text)).ToString();
			break;
		case 5:
			labelRespuesta->Text = pentagono->ObtenerPerimetro(Convert::ToDouble(textBoxMedida->Text)).ToString();
			break;
		case 6:
			labelRespuesta->Text = hexagono->ObtenerPerimetro(Convert::ToDouble(textBoxMedida->Text)).ToString();
			break;
		case 7:
			labelRespuesta->Text = heptagono->ObtenerPerimetro(Convert::ToDouble(textBoxMedida->Text)).ToString();
			break;
		case 8:
			labelRespuesta->Text = octagono->ObtenerPerimetro(Convert::ToDouble(textBoxMedida->Text)).ToString();
			break;
		case 9:
			labelRespuesta->Text = eneagono->ObtenerPerimetro(Convert::ToDouble(textBoxMedida->Text)).ToString();
			break;
		case 10:
			labelRespuesta->Text = decagono->ObtenerPerimetro(Convert::ToDouble(textBoxMedida->Text)).ToString();
			break;
		default:
			break;
		}
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int opcion = Convert::ToDouble(comboBoxLados->Text);

	switch (opcion)
	{
	case 3:
		labelRespuesta->Text = triangulo->ObtenerArea(Convert::ToDouble(textBoxMedida->Text)).ToString();
		break;
	case 4:
		labelRespuesta->Text = cuadrado->ObtenerArea(Convert::ToDouble(textBoxMedida->Text)).ToString();
		break;
	case 5:
		labelRespuesta->Text = pentagono->ObtenerArea(Convert::ToDouble(textBoxMedida->Text)).ToString();
		break;
	case 6:
		labelRespuesta->Text = hexagono->ObtenerArea(Convert::ToDouble(textBoxMedida->Text)).ToString();
		break;
	case 7:
		labelRespuesta->Text = heptagono->ObtenerArea(Convert::ToDouble(textBoxMedida->Text)).ToString();
		break;
	case 8:
		labelRespuesta->Text = octagono->ObtenerArea(Convert::ToDouble(textBoxMedida->Text)).ToString();
		break;
	case 9:
		labelRespuesta->Text = eneagono->ObtenerArea(Convert::ToDouble(textBoxMedida->Text)).ToString();
		break;
	case 10:
		labelRespuesta->Text = decagono->ObtenerArea(Convert::ToDouble(textBoxMedida->Text)).ToString();
		break;
	default:
		break;
	}

}
};
}
