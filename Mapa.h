#pragma once
#include "Sistema.h"
#include "CaminoMinimo.h"
#include <iostream>

namespace Proyecto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Mapa
	/// </summary>
	public ref class Mapa : public System::Windows::Forms::Form
	{
	public:
		Mapa(void)
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
		~Mapa()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::ComboBox^ comboBox_Origen;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox_Destino;
	private: System::Windows::Forms::Button^ b_aceptar;







	private: System::Windows::Forms::Button^ b_11;


	private: System::Windows::Forms::Button^ b_7;


	private: System::Windows::Forms::Button^ b_9;

	private: System::Windows::Forms::Button^ b_13;







	private: System::Windows::Forms::Button^ b_6;









	private: System::Windows::Forms::Button^ b_4;

	private: System::Windows::Forms::Button^ b_17;







	private: System::Windows::Forms::GroupBox^ gb_condicion;
	private: System::Windows::Forms::Label^ enun_ubicacion;
	private: System::Windows::Forms::Button^ b_confirmar;
	private: System::Windows::Forms::CheckBox^ checkBox_libre;

	private: System::Windows::Forms::CheckBox^ checkBox_congestion;

	private: System::Windows::Forms::CheckBox^ checkBox_ferri;

	private: System::Windows::Forms::CheckBox^ checkBox_lastre;

	private: System::Windows::Forms::CheckBox^ checkBox_peaje;


	public: Sistema* sistema = new Sistema();
	private: System::Windows::Forms::Button^ button_listo;
	private: System::Windows::Forms::TextBox^ textBox_arcos;

	public:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Mapa::typeid));
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->comboBox_Origen = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox_Destino = (gcnew System::Windows::Forms::ComboBox());
			this->b_aceptar = (gcnew System::Windows::Forms::Button());
			this->b_11 = (gcnew System::Windows::Forms::Button());
			this->b_7 = (gcnew System::Windows::Forms::Button());
			this->b_9 = (gcnew System::Windows::Forms::Button());
			this->b_13 = (gcnew System::Windows::Forms::Button());
			this->b_6 = (gcnew System::Windows::Forms::Button());
			this->b_4 = (gcnew System::Windows::Forms::Button());
			this->b_17 = (gcnew System::Windows::Forms::Button());
			this->gb_condicion = (gcnew System::Windows::Forms::GroupBox());
			this->button_listo = (gcnew System::Windows::Forms::Button());
			this->enun_ubicacion = (gcnew System::Windows::Forms::Label());
			this->b_confirmar = (gcnew System::Windows::Forms::Button());
			this->checkBox_libre = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_congestion = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_ferri = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_lastre = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_peaje = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_arcos = (gcnew System::Windows::Forms::TextBox());
			this->gb_condicion->SuspendLayout();
			this->SuspendLayout();
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(24, 519);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 16;
			this->button16->Text = L"Cancelar";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Mapa::button16_Click);
			// 
			// comboBox_Origen
			// 
			this->comboBox_Origen->FormattingEnabled = true;
			this->comboBox_Origen->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Alajuela", L"Guanacaste", L"Heredia", L"San Jose",
					L"Puntarenas", L"Limon", L"Cartago"
			});
			this->comboBox_Origen->Location = System::Drawing::Point(12, 60);
			this->comboBox_Origen->Name = L"comboBox_Origen";
			this->comboBox_Origen->Size = System::Drawing::Size(121, 21);
			this->comboBox_Origen->TabIndex = 18;
			this->comboBox_Origen->Text = L"--Ubicacion--";
			this->comboBox_Origen->SelectedIndexChanged += gcnew System::EventHandler(this, &Mapa::comboBox_Origen_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 18);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Ubicacion Origen";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(9, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 18);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Ubicacion Destino";
			// 
			// comboBox_Destino
			// 
			this->comboBox_Destino->FormattingEnabled = true;
			this->comboBox_Destino->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Alajuela", L"Guanacaste", L"Heredia",
					L"San Jose", L"Puntarenas", L"Limon", L"Cartago"
			});
			this->comboBox_Destino->Location = System::Drawing::Point(15, 178);
			this->comboBox_Destino->Name = L"comboBox_Destino";
			this->comboBox_Destino->Size = System::Drawing::Size(121, 21);
			this->comboBox_Destino->TabIndex = 21;
			this->comboBox_Destino->Text = L"--Ubicacion--";
			this->comboBox_Destino->SelectedIndexChanged += gcnew System::EventHandler(this, &Mapa::comboBox_Destino_SelectedIndexChanged);
			// 
			// b_aceptar
			// 
			this->b_aceptar->Location = System::Drawing::Point(128, 519);
			this->b_aceptar->Name = L"b_aceptar";
			this->b_aceptar->Size = System::Drawing::Size(75, 23);
			this->b_aceptar->TabIndex = 24;
			this->b_aceptar->Text = L"Aceptar";
			this->b_aceptar->UseVisualStyleBackColor = true;
			this->b_aceptar->Click += gcnew System::EventHandler(this, &Mapa::b_aceptar_Click);
			// 
			// b_11
			// 
			this->b_11->Location = System::Drawing::Point(628, 176);
			this->b_11->Name = L"b_11";
			this->b_11->Size = System::Drawing::Size(33, 23);
			this->b_11->TabIndex = 28;
			this->b_11->Text = L"11";
			this->b_11->UseVisualStyleBackColor = true;
			this->b_11->Click += gcnew System::EventHandler(this, &Mapa::b_11_Click);
			// 
			// b_7
			// 
			this->b_7->Location = System::Drawing::Point(528, 214);
			this->b_7->Name = L"b_7";
			this->b_7->Size = System::Drawing::Size(23, 23);
			this->b_7->TabIndex = 29;
			this->b_7->Text = L"7";
			this->b_7->UseVisualStyleBackColor = true;
			this->b_7->Click += gcnew System::EventHandler(this, &Mapa::b_7_Click);
			// 
			// b_9
			// 
			this->b_9->Location = System::Drawing::Point(618, 293);
			this->b_9->Name = L"b_9";
			this->b_9->Size = System::Drawing::Size(23, 23);
			this->b_9->TabIndex = 31;
			this->b_9->Text = L"9";
			this->b_9->UseVisualStyleBackColor = true;
			this->b_9->Click += gcnew System::EventHandler(this, &Mapa::b_9_Click);
			// 
			// b_13
			// 
			this->b_13->Location = System::Drawing::Point(722, 273);
			this->b_13->Name = L"b_13";
			this->b_13->Size = System::Drawing::Size(32, 23);
			this->b_13->TabIndex = 33;
			this->b_13->Text = L"13";
			this->b_13->UseVisualStyleBackColor = true;
			this->b_13->Click += gcnew System::EventHandler(this, &Mapa::b_13_Click);
			// 
			// b_6
			// 
			this->b_6->Location = System::Drawing::Point(559, 166);
			this->b_6->Name = L"b_6";
			this->b_6->Size = System::Drawing::Size(23, 23);
			this->b_6->TabIndex = 36;
			this->b_6->Text = L"6";
			this->b_6->UseVisualStyleBackColor = true;
			this->b_6->Click += gcnew System::EventHandler(this, &Mapa::b_6_Click);
			// 
			// b_4
			// 
			this->b_4->Location = System::Drawing::Point(448, 178);
			this->b_4->Name = L"b_4";
			this->b_4->Size = System::Drawing::Size(23, 23);
			this->b_4->TabIndex = 41;
			this->b_4->Text = L"4";
			this->b_4->UseVisualStyleBackColor = true;
			this->b_4->Click += gcnew System::EventHandler(this, &Mapa::b_4_Click);
			// 
			// b_17
			// 
			this->b_17->Location = System::Drawing::Point(807, 293);
			this->b_17->Name = L"b_17";
			this->b_17->Size = System::Drawing::Size(32, 23);
			this->b_17->TabIndex = 43;
			this->b_17->Text = L"17";
			this->b_17->UseVisualStyleBackColor = true;
			this->b_17->Click += gcnew System::EventHandler(this, &Mapa::b_17_Click);
			// 
			// gb_condicion
			// 
			this->gb_condicion->Controls->Add(this->button_listo);
			this->gb_condicion->Controls->Add(this->enun_ubicacion);
			this->gb_condicion->Controls->Add(this->b_confirmar);
			this->gb_condicion->Controls->Add(this->checkBox_libre);
			this->gb_condicion->Controls->Add(this->checkBox_congestion);
			this->gb_condicion->Controls->Add(this->checkBox_ferri);
			this->gb_condicion->Controls->Add(this->checkBox_lastre);
			this->gb_condicion->Controls->Add(this->checkBox_peaje);
			this->gb_condicion->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gb_condicion->Location = System::Drawing::Point(15, 235);
			this->gb_condicion->Name = L"gb_condicion";
			this->gb_condicion->Size = System::Drawing::Size(200, 232);
			this->gb_condicion->TabIndex = 46;
			this->gb_condicion->TabStop = false;
			this->gb_condicion->Text = L"Condicion de la ruta";
			this->gb_condicion->Visible = false;
			// 
			// button_listo
			// 
			this->button_listo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_listo->Location = System::Drawing::Point(58, 185);
			this->button_listo->Name = L"button_listo";
			this->button_listo->Size = System::Drawing::Size(75, 23);
			this->button_listo->TabIndex = 7;
			this->button_listo->Text = L"Listo";
			this->button_listo->UseVisualStyleBackColor = true;
			this->button_listo->Visible = false;
			this->button_listo->Click += gcnew System::EventHandler(this, &Mapa::button_listo_Click);
			// 
			// enun_ubicacion
			// 
			this->enun_ubicacion->AutoSize = true;
			this->enun_ubicacion->Location = System::Drawing::Point(66, 27);
			this->enun_ubicacion->Name = L"enun_ubicacion";
			this->enun_ubicacion->Size = System::Drawing::Size(67, 13);
			this->enun_ubicacion->TabIndex = 6;
			this->enun_ubicacion->Text = L"--Ubicacion--";
			// 
			// b_confirmar
			// 
			this->b_confirmar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->b_confirmar->Location = System::Drawing::Point(58, 185);
			this->b_confirmar->Name = L"b_confirmar";
			this->b_confirmar->Size = System::Drawing::Size(75, 23);
			this->b_confirmar->TabIndex = 5;
			this->b_confirmar->Text = L"confirmar";
			this->b_confirmar->UseVisualStyleBackColor = true;
			this->b_confirmar->Click += gcnew System::EventHandler(this, &Mapa::b_confirmar_Click);
			// 
			// checkBox_libre
			// 
			this->checkBox_libre->AutoSize = true;
			this->checkBox_libre->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox_libre->Location = System::Drawing::Point(58, 149);
			this->checkBox_libre->Name = L"checkBox_libre";
			this->checkBox_libre->Size = System::Drawing::Size(67, 17);
			this->checkBox_libre->TabIndex = 4;
			this->checkBox_libre->Text = L"Via Libre";
			this->checkBox_libre->UseVisualStyleBackColor = true;
			// 
			// checkBox_congestion
			// 
			this->checkBox_congestion->AutoSize = true;
			this->checkBox_congestion->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox_congestion->Location = System::Drawing::Point(58, 126);
			this->checkBox_congestion->Name = L"checkBox_congestion";
			this->checkBox_congestion->Size = System::Drawing::Size(115, 17);
			this->checkBox_congestion->TabIndex = 3;
			this->checkBox_congestion->Text = L"Via Congestionada";
			this->checkBox_congestion->UseVisualStyleBackColor = true;
			// 
			// checkBox_ferri
			// 
			this->checkBox_ferri->AutoSize = true;
			this->checkBox_ferri->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox_ferri->Location = System::Drawing::Point(58, 101);
			this->checkBox_ferri->Name = L"checkBox_ferri";
			this->checkBox_ferri->Size = System::Drawing::Size(46, 17);
			this->checkBox_ferri->TabIndex = 2;
			this->checkBox_ferri->Text = L"Ferri";
			this->checkBox_ferri->UseVisualStyleBackColor = true;
			// 
			// checkBox_lastre
			// 
			this->checkBox_lastre->AutoSize = true;
			this->checkBox_lastre->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox_lastre->Location = System::Drawing::Point(58, 78);
			this->checkBox_lastre->Name = L"checkBox_lastre";
			this->checkBox_lastre->Size = System::Drawing::Size(55, 17);
			this->checkBox_lastre->TabIndex = 1;
			this->checkBox_lastre->Text = L"Lastre";
			this->checkBox_lastre->UseVisualStyleBackColor = true;
			// 
			// checkBox_peaje
			// 
			this->checkBox_peaje->AutoSize = true;
			this->checkBox_peaje->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox_peaje->Location = System::Drawing::Point(58, 55);
			this->checkBox_peaje->Name = L"checkBox_peaje";
			this->checkBox_peaje->Size = System::Drawing::Size(53, 17);
			this->checkBox_peaje->TabIndex = 0;
			this->checkBox_peaje->Text = L"Peaje";
			this->checkBox_peaje->UseVisualStyleBackColor = true;
			// 
			// textBox_arcos
			// 
			this->textBox_arcos->Location = System::Drawing::Point(1125, 12);
			this->textBox_arcos->Multiline = true;
			this->textBox_arcos->Name = L"textBox_arcos";
			this->textBox_arcos->Size = System::Drawing::Size(158, 231);
			this->textBox_arcos->TabIndex = 47;
			// 
			// Mapa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1326, 609);
			this->Controls->Add(this->textBox_arcos);
			this->Controls->Add(this->gb_condicion);
			this->Controls->Add(this->b_17);
			this->Controls->Add(this->b_4);
			this->Controls->Add(this->b_6);
			this->Controls->Add(this->b_13);
			this->Controls->Add(this->b_9);
			this->Controls->Add(this->b_7);
			this->Controls->Add(this->b_11);
			this->Controls->Add(this->b_aceptar);
			this->Controls->Add(this->comboBox_Destino);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox_Origen);
			this->Controls->Add(this->button16);
			this->Name = L"Mapa";
			this->Text = L"Mapa";
			this->gb_condicion->ResumeLayout(false);
			this->gb_condicion->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

	comboBox_Origen->Text= "--Ubicacion--";
	comboBox_Destino->Text = "--Ubicacion--";


}
	  
	public: int cantUbi;
	public: GrafoMatriz* grafo = new GrafoMatriz(19); //se usa 19 por que es la mayor cantidad posible

	
private: System::Void comboBox_Origen_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	
	String^ opcion = comboBox_Origen->Text;

	if (opcion == "Heredia") {
		b_11->BackColor = System::Drawing::Color::Yellow;
		sistema->agregarUbicacion("Heredia");
		grafo->nuevoVertice("Heredia");
	}

	else if (opcion == "San Jose") {
		b_9->BackColor = System::Drawing::Color::Yellow;
		sistema->agregarUbicacion("San Jose");
		grafo->nuevoVertice("San Jose");
	}

	else if (opcion == "Alajuela") {
		b_6->BackColor = System::Drawing::Color::Yellow;
		sistema->agregarUbicacion("Alajuela");
		grafo->nuevoVertice("Alajuela");
	}

	else if (opcion == "Cartago") {
		b_13->BackColor = System::Drawing::Color::Yellow;
		sistema->agregarUbicacion("Cartago");
		grafo->nuevoVertice("Cartago");
	}

	else if (opcion == "Puntarenas") {
		b_7->BackColor = System::Drawing::Color::Yellow;
		sistema->agregarUbicacion("Puntarenas");
		grafo->nuevoVertice("Puntarenas");
	}

	else if (opcion == "Limon") {
		b_17->BackColor = System::Drawing::Color::Yellow;
		sistema->agregarUbicacion("Limon");
		grafo->nuevoVertice("Limon");
	}
	
	else if (opcion == "Guanacaste") {
		b_4->BackColor = System::Drawing::Color::Yellow;
		sistema->agregarUbicacion("Guanacaste");
		grafo->nuevoVertice("Guanacaste");
	}
}
private: System::Void comboBox_Destino_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {



	String^ opcion = comboBox_Destino->Text;

	if (opcion == "Heredia") {
		b_11->BackColor = System::Drawing::Color::Red;	
		sistema->agregarUbicacion("Heredia");
		grafo->nuevoVertice("Heredia");
	}

	else if (opcion == "San Jose") {
		b_9->BackColor = System::Drawing::Color::Red;
		sistema->agregarUbicacion("San Jose");
		grafo->nuevoVertice("San Jose");
	}

	else if (opcion == "Alajuela") {
		b_6->BackColor = System::Drawing::Color::Red;
		sistema->agregarUbicacion("Alajuela");
		grafo->nuevoVertice("Alajuela");
	}

	else if (opcion == "Cartago") {
		b_13->BackColor = System::Drawing::Color::Red;
		sistema->agregarUbicacion("Cartago");
		grafo->nuevoVertice("Cartago");
	}

	else if (opcion == "Puntarenas") {
		b_7->BackColor = System::Drawing::Color::Red;
		sistema->agregarUbicacion("Puntarenas");
		grafo->nuevoVertice("Puntarenas");
	}

	else if (opcion == "Limon") {
		b_17->BackColor = System::Drawing::Color::Red;
		sistema->agregarUbicacion("Limon");
		grafo->nuevoVertice("Limon");
	}

	else if (opcion == "Guanacaste") {
		b_4->BackColor = System::Drawing::Color::Red;
		sistema->agregarUbicacion("Guanacaste");
		grafo->nuevoVertice("Guanacaste");
	}

}
	


private: System::Void b_4_Click(System::Object^ sender, System::EventArgs^ e) {

	cantUbi += 1;//agregamos uno a la cantidad de Ubicaciones para saber cuantos vertices vamos a utilizar.

	Vertice actual = grafo->Overtice("Guanacaste");

	if (b_4->BackColor != System::Drawing::Color::Green) {


		if (actual.OnumVertice() == -1)
			sistema->agregarUbicacion("Guanacaste"); // como el vertice que se encontro no existe se crea uno y se agrega la Ubicacion al vector
			grafo->nuevoVertice("Guanacaste");

		b_4->BackColor = System::Drawing::Color::Green;
		//gb_condicion->Visible = true;

	}
	else if (b_4->BackColor == System::Drawing::Color::Green) {
		b_4->BackColor = System::Drawing::Color::Gray;
	}

}

private: System::Void b_6_Click(System::Object^ sender, System::EventArgs^ e) {

	cantUbi += 1;//agregamos uno a la cantidad de Ubicaciones para saber cuantos vertices vamos a utilizar.

	Vertice actual = grafo->Overtice("Alajueja");

	if (b_6->BackColor != System::Drawing::Color::Green) {


		if (actual.OnumVertice() == -1)
			sistema->agregarUbicacion("Alajuela"); // como el vertice que se encontro no existe se crea uno y se agrega la Ubicacion al vector
			grafo->nuevoVertice("Alajuela");

		b_6->BackColor = System::Drawing::Color::Green;
		//gb_condicion->Visible = true;

	}
	else if (b_6->BackColor == System::Drawing::Color::Green) {
		b_6->BackColor = System::Drawing::Color::Gray;
	}

}
private: System::Void b_7_Click(System::Object^ sender, System::EventArgs^ e) {

	cantUbi += 1;//agregamos uno a la cantidad de Ubicaciones para saber cuantos vertices vamos a utilizar.

	Vertice actual = grafo->Overtice("Puntarenas");

	if (b_7->BackColor != System::Drawing::Color::Green) {


		if (actual.OnumVertice() == -1)
			sistema->agregarUbicacion("Puntarenas"); // como el vertice que se encontro no existe se crea uno y se agrega la Ubicacion al vector
			grafo->nuevoVertice("Puntarenas");

		b_7->BackColor = System::Drawing::Color::Green;
		//gb_condicion->Visible = true;

	}
	else if (b_7->BackColor == System::Drawing::Color::Green) {
		b_7->BackColor = System::Drawing::Color::Gray;
	}

}

private: System::Void b_9_Click(System::Object^ sender, System::EventArgs^ e) {

	cantUbi += 1;//agregamos uno a la cantidad de Ubicaciones para saber cuantos vertices vamos a utilizar.

	Vertice actual = grafo->Overtice("San Jose");

	if (b_9->BackColor != System::Drawing::Color::Green) {


		if (actual.OnumVertice() == -1)
			sistema->agregarUbicacion("San Jose"); // como el vertice que se encontro no existe se crea uno y se agrega la Ubicacion al vector
			grafo->nuevoVertice("San Jose");

		b_9->BackColor = System::Drawing::Color::Green;
		//gb_condicion->Visible = true;

	}
	else if (b_9->BackColor == System::Drawing::Color::Green) {
		b_9->BackColor = System::Drawing::Color::Gray;
	}

}

private: System::Void b_11_Click(System::Object^ sender, System::EventArgs^ e) {

	cantUbi += 1;//agregamos uno a la cantidad de Ubicaciones para saber cuantos vertices vamos a utilizar.

	Vertice actual = grafo->Overtice("Heredia");

	if (b_11->BackColor != System::Drawing::Color::Green) {


		if (actual.OnumVertice() == -1)
			sistema->agregarUbicacion("Heredia"); // como el vertice que se encontro no existe se crea uno y se agrega la Ubicacion al vector
			grafo->nuevoVertice("Heredia");

		b_11->BackColor = System::Drawing::Color::Green;
		//gb_condicion->Visible = true;

	}
	else if (b_11->BackColor == System::Drawing::Color::Green) {
		b_11->BackColor = System::Drawing::Color::Gray;
	}

}

private: System::Void b_13_Click(System::Object^ sender, System::EventArgs^ e) {

	cantUbi += 1;//agregamos uno a la cantidad de Ubicaciones para saber cuantos vertices vamos a utilizar.

	Vertice actual = grafo->Overtice("Cartago");

	if (b_13->BackColor != System::Drawing::Color::Green) {


		if (actual.OnumVertice() == -1)
			sistema->agregarUbicacion("Cartago"); // como el vertice que se encontro no existe se crea uno y se agrega la Ubicacion al vector
			grafo->nuevoVertice("Cartago");

		b_13->BackColor = System::Drawing::Color::Green;
		//gb_condicion->Visible = true;

	}
	else if (b_13->BackColor == System::Drawing::Color::Green) {
		b_13->BackColor = System::Drawing::Color::Gray;
	}

}


private: System::Void b_17_Click(System::Object^ sender, System::EventArgs^ e) {

	cantUbi += 1;//agregamos uno a la cantidad de Ubicaciones para saber cuantos vertices vamos a utilizar.

	Vertice actual = grafo->Overtice("Limon");

	if (b_17->BackColor != System::Drawing::Color::Green) {


		if (actual.OnumVertice() == -1)
			sistema->agregarUbicacion("Limon"); // como el vertice que se encontro no existe se crea uno y se agrega la Ubicacion al vector
			grafo->nuevoVertice("Limon");

		b_17->BackColor = System::Drawing::Color::Green;
		//gb_condicion->Visible = true;

	}
	else if (b_17->BackColor == System::Drawing::Color::Green) {
		b_17->BackColor = System::Drawing::Color::Gray;
	}

}

private: System::Void b_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {


	if (comboBox_Origen->SelectedItem != comboBox_Destino->SelectedItem) {// si son diferentes llama al algoritmo 

		std::vector<std::string>Rutas = sistema->acomodarRutas();
		sistema->setRutas(Rutas);
		String^ enun = gcnew String(Rutas[0].c_str());

		gb_condicion->Visible = true;
		enun_ubicacion->Text = enun;

		//inicializamos los valores de la matriz de adyacencia con infinito
		/*
		int verts = grafo->getNumVerts();
		int y = 0;
		for (int x; x < verts; x++) {
			y = 0;
			for (y; y < verts; y++) {
				grafo->Pvalor(x, y, 999999); //agegamos el valores segun el indice

			}
		}
		*/
		//inicializamos una matriz vacia para las distancias 

		int** mat;
		mat = new int* [7];
		for (int i = 0; i < 7; i++)
		{
			mat[i] = new int[7];
		}

		sistema->setMatriz(mat);


		//------------------------------
		int** matrizDistancias = sistema->getMatriz();
		std::ifstream file("MapaDistancias.txt");
		std::string str; // recibe la linea del archivo de texto
		std::string delimitador = ",";
		int fila = 0;
		int columna = 0;
		int npeso;

		while (std::getline(file, str)) {


			size_t pos = 0;
			std::string peso;
			//leemos el archivo que contiene lo valores con las distancias (pesos) entre ubicaciones 
			//leemos la linea del archivo, esta debe ser recorrida cada coma y si el valor el distinto a "-"
			//este valor leido será considerado para la cracion de la matriz.
			while ((pos = str.find(delimitador)) != std::string::npos) {
				peso = str.substr(0, pos);

				if (peso == "-") {
					matrizDistancias[fila][columna] = 0;
				}
				else {
					matrizDistancias[fila][columna] = std::stoi(peso);
				}

				columna++;
				str.erase(0, pos + delimitador.length());
			}
			if (str == "-") {
				matrizDistancias[fila][columna] = 0;
			}
			else {
				matrizDistancias[fila][columna] = std::stoi(str);
			}
			columna = 0;
			fila++;
		}

		sistema->setMatriz(matrizDistancias);




	}
	else {
		//de locontrario no hace nada...
	}

}


	public: int ind=1; // se usa para medir la cantidad de rutas (empieza en la posision 1 porque en el boton aceptar se coloco el primer enunciado)
	public: bool F = 1;
		 
private: System::Void b_confirmar_Click(System::Object^ sender, System::EventArgs^ e) {


	std::vector<std::string> Rutas = sistema->getRutas();
	// obetenemos las rutas y el puntero 
	int** matrizDistancias = sistema->getMatriz();
	std::string str; // recibe la linea del archivo de texto
	std::string delimitador = ",";
	int fila = 0;
	int columna = 0;
	int npeso;

	if (F) {

		F = 0;

		MarshalString(enun_ubicacion->Text, str); //usamos una funcion la cual nos convierte de system sting a std string
	
		delimitador = "-";
		size_t pos = 0;
		std::string V1, V2;

		//creamos el arco del primer enunciado
		while ((pos = str.find(delimitador)) != std::string::npos) {
			V1 = str.substr(0, pos);

			str.erase(0, pos + delimitador.length());
		}

		V2 = str;

		npeso = sistema->getValor(V1, V2, matrizDistancias);

		// aqui cambiamos el valor del peso dependiendo de la condicion de la ruta, basandose en los valores de los checkedlists

		if (checkBox_ferri->Checked) {
			npeso -= 50;
		}
		else if (checkBox_congestion->Checked) {
			npeso += 50;
		}
		else if (checkBox_peaje->Checked) {
			npeso += 50;
		}
		else if (checkBox_lastre->Checked) {
			npeso*=1;
		}
		else if (checkBox_libre->Checked) {
			npeso += 0;
		}


		grafo->nuevoArco(V1.c_str(), V2.c_str(), npeso); //agregamos el primer peso
		grafo->nuevoArco(V2.c_str(), V1.c_str(), npeso);

		sistema->modificar(sistema->getFila(V1.c_str()), sistema->getColumna(V2.c_str()), npeso); //modificamos el valor en la matriz de matrizDistancias

		grafo->Pvalor(grafo->numVertice(V1.c_str()), grafo->numVertice(V2.c_str()), npeso); // modificamos su valor en la matriz de adyacencia 



		String^ enun = gcnew String(Rutas[ind].c_str());
		enun_ubicacion->Text = enun;
	}
	else {

		delimitador = "-";
		size_t pos = 0;
		std::string V1, V2;


		//agrgamos los arcos restantes

		MarshalString(enun_ubicacion->Text, str); //usamos una funcion la cual nos convierte de system sting a std string}

		//creamos el arco del primer enunciado
		while ((pos = str.find(delimitador)) != std::string::npos) {
			V1 = str.substr(0, pos);

			str.erase(0, pos + delimitador.length());
		}

		V2 = str;
		npeso = sistema->getValor(V1, V2, matrizDistancias);

		if (checkBox_ferri->Checked) {
			npeso -= 50;
		}
		else if (checkBox_congestion->Checked) {
			npeso += 50;
		}
		else if (checkBox_peaje->Checked) {
			npeso += 50;
		}
		else if (checkBox_lastre->Checked) {
			npeso *=- 1;
		}
		else if (checkBox_libre->Checked) {
			npeso += 0;
		}



		grafo->nuevoArco(V1.c_str(), V2.c_str(), npeso);
		grafo->nuevoArco(V2.c_str(), V1.c_str(), npeso);

		sistema->modificar(sistema->getFila(V1.c_str()), sistema->getColumna(V2.c_str()), npeso);

		grafo->Pvalor(grafo->numVertice(V1.c_str()), grafo->numVertice(V2.c_str()), npeso); // modificamos su valor en la matriz de adyacencia 



		if (ind != Rutas.size()-1) {
			ind++;
			String^ enun = gcnew String(Rutas[ind].c_str());
			enun_ubicacion->Text = enun;
		}
		else {

			enun_ubicacion->Text = "Ya se acabaron las rutas" ;

			checkBox_peaje->Enabled = false;
			checkBox_lastre->Enabled = false;
			checkBox_ferri->Enabled = false;
			checkBox_congestion->Enabled = false;
			checkBox_libre->Enabled = false;

			button_listo->Visible = true;

		}

	}

	//antes de borrar los valores de los check box guardarlos de alguna forma (puede ser con valores booleanos en un vector)
	//esto con el proposito de calcular adecuadamente el peso de la ruta.

	checkBox_peaje->Checked = false;
	checkBox_lastre->Checked = false;
	checkBox_ferri->Checked = false;
	checkBox_congestion->Checked = false;
	checkBox_libre->Checked = false;

	

}
void MarshalString(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void MarshalString(String^ s, std::wstring& os) {
	using namespace Runtime::InteropServices;
	const wchar_t* chars =
		(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}
private: System::Void button_listo_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string Origen;
	std::string Destino;

	//--------------------------------------------------
	for (int x = 0; x < 7; x++) {
		for (int i = 0; i < 7; i++)
		{
			std::cout << sistema->getMatriz()[x][i];
			std::cout << ",";
		}
		std::cout << "\n";
	}
	//--------------------------------------------------
	
	
	CaminoMinimo* camino = new CaminoMinimo(*grafo, 0); //ingresamos el grafo a la clase del camino minimo
	
	//camino->Floyd(); // coremos el algoritmo de Floyd 

	camino->Dijkstra(*grafo, 0);



	camino->recuperaCamino(1);

	std::vector<int> arcos = camino->getArcos();

	for (size_t i = 0; i < arcos.size() - 1; i++)
	{
		std::string V1 = grafo->nomVertice(arcos[i]);
		std::string V2 = grafo->nomVertice(arcos[i + 1]);

		std::string arc = V1 + "->" + V2;

		textBox_arcos->AppendText(gcnew String(arc.c_str()));
		textBox_arcos->Text = textBox_arcos->Text + "\r\n";
		
	}


	gb_condicion->Visible = false;
}
};
}
