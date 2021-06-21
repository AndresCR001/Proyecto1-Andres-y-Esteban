#pragma once

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


	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ b_2;

	private: System::Windows::Forms::Button^ b_1;
	private: System::Windows::Forms::Button^ b_5;
	private: System::Windows::Forms::Button^ b_11;


	private: System::Windows::Forms::Button^ b_7;

	private: System::Windows::Forms::Button^ b_3;
	private: System::Windows::Forms::Button^ b_9;
	private: System::Windows::Forms::Button^ b_10;
	private: System::Windows::Forms::Button^ b_13;




	private: System::Windows::Forms::Button^ b_12;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ b_6;
	private: System::Windows::Forms::Button^ b_15;
	private: System::Windows::Forms::Button^ b_18;



	private: System::Windows::Forms::Button^ b_16;
	private: System::Windows::Forms::Button^ b_19;


	private: System::Windows::Forms::Button^ b_4;
	private: System::Windows::Forms::Button^ b_14;
	private: System::Windows::Forms::Button^ b_17;




	private: System::Windows::Forms::Button^ b_8;

	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::GroupBox^ gb_condicion;
	private: System::Windows::Forms::Label^ enun_ubicacion;
	private: System::Windows::Forms::Button^ b_confirmar;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;


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
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->b_2 = (gcnew System::Windows::Forms::Button());
			this->b_1 = (gcnew System::Windows::Forms::Button());
			this->b_5 = (gcnew System::Windows::Forms::Button());
			this->b_11 = (gcnew System::Windows::Forms::Button());
			this->b_7 = (gcnew System::Windows::Forms::Button());
			this->b_3 = (gcnew System::Windows::Forms::Button());
			this->b_9 = (gcnew System::Windows::Forms::Button());
			this->b_10 = (gcnew System::Windows::Forms::Button());
			this->b_13 = (gcnew System::Windows::Forms::Button());
			this->b_12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->b_6 = (gcnew System::Windows::Forms::Button());
			this->b_15 = (gcnew System::Windows::Forms::Button());
			this->b_18 = (gcnew System::Windows::Forms::Button());
			this->b_16 = (gcnew System::Windows::Forms::Button());
			this->b_19 = (gcnew System::Windows::Forms::Button());
			this->b_4 = (gcnew System::Windows::Forms::Button());
			this->b_14 = (gcnew System::Windows::Forms::Button());
			this->b_17 = (gcnew System::Windows::Forms::Button());
			this->b_8 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->gb_condicion = (gcnew System::Windows::Forms::GroupBox());
			this->enun_ubicacion = (gcnew System::Windows::Forms::Label());
			this->b_confirmar = (gcnew System::Windows::Forms::Button());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
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
			// button17
			// 
			this->button17->Location = System::Drawing::Point(128, 519);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 24;
			this->button17->Text = L"Aceptar";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Mapa::button17_Click);
			// 
			// b_2
			// 
			this->b_2->Location = System::Drawing::Point(354, 200);
			this->b_2->Name = L"b_2";
			this->b_2->Size = System::Drawing::Size(23, 23);
			this->b_2->TabIndex = 25;
			this->b_2->Text = L"2";
			this->b_2->UseVisualStyleBackColor = true;
			this->b_2->Click += gcnew System::EventHandler(this, &Mapa::b_2_Click);
			// 
			// b_1
			// 
			this->b_1->Location = System::Drawing::Point(380, 125);
			this->b_1->Name = L"b_1";
			this->b_1->Size = System::Drawing::Size(23, 23);
			this->b_1->TabIndex = 26;
			this->b_1->Text = L"1";
			this->b_1->UseVisualStyleBackColor = true;
			this->b_1->Click += gcnew System::EventHandler(this, &Mapa::b_1_Click);
			// 
			// b_5
			// 
			this->b_5->Location = System::Drawing::Point(528, 125);
			this->b_5->Name = L"b_5";
			this->b_5->Size = System::Drawing::Size(23, 23);
			this->b_5->TabIndex = 27;
			this->b_5->Text = L"5";
			this->b_5->UseVisualStyleBackColor = true;
			this->b_5->Click += gcnew System::EventHandler(this, &Mapa::b_5_Click);
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
			// b_3
			// 
			this->b_3->Location = System::Drawing::Point(459, 273);
			this->b_3->Name = L"b_3";
			this->b_3->Size = System::Drawing::Size(23, 23);
			this->b_3->TabIndex = 30;
			this->b_3->Text = L"3";
			this->b_3->UseVisualStyleBackColor = true;
			this->b_3->Click += gcnew System::EventHandler(this, &Mapa::b_3_Click);
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
			// b_10
			// 
			this->b_10->Location = System::Drawing::Point(628, 235);
			this->b_10->Name = L"b_10";
			this->b_10->Size = System::Drawing::Size(33, 23);
			this->b_10->TabIndex = 32;
			this->b_10->Text = L"10";
			this->b_10->UseVisualStyleBackColor = true;
			this->b_10->Click += gcnew System::EventHandler(this, &Mapa::b_10_Click);
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
			// b_12
			// 
			this->b_12->Location = System::Drawing::Point(731, 200);
			this->b_12->Name = L"b_12";
			this->b_12->Size = System::Drawing::Size(34, 23);
			this->b_12->TabIndex = 34;
			this->b_12->Text = L"12";
			this->b_12->UseVisualStyleBackColor = true;
			this->b_12->Click += gcnew System::EventHandler(this, &Mapa::b_12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(922, 457);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(23, 23);
			this->button11->TabIndex = 35;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
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
			// b_15
			// 
			this->b_15->Location = System::Drawing::Point(731, 401);
			this->b_15->Name = L"b_15";
			this->b_15->Size = System::Drawing::Size(34, 23);
			this->b_15->TabIndex = 37;
			this->b_15->Text = L"15";
			this->b_15->UseVisualStyleBackColor = true;
			this->b_15->Click += gcnew System::EventHandler(this, &Mapa::b_15_Click);
			// 
			// b_18
			// 
			this->b_18->Location = System::Drawing::Point(807, 420);
			this->b_18->Name = L"b_18";
			this->b_18->Size = System::Drawing::Size(32, 23);
			this->b_18->TabIndex = 38;
			this->b_18->Text = L"18";
			this->b_18->UseVisualStyleBackColor = true;
			this->b_18->Click += gcnew System::EventHandler(this, &Mapa::b_18_Click);
			// 
			// b_16
			// 
			this->b_16->Location = System::Drawing::Point(722, 457);
			this->b_16->Name = L"b_16";
			this->b_16->Size = System::Drawing::Size(32, 23);
			this->b_16->TabIndex = 39;
			this->b_16->Text = L"16";
			this->b_16->UseVisualStyleBackColor = true;
			this->b_16->Click += gcnew System::EventHandler(this, &Mapa::b_16_Click);
			// 
			// b_19
			// 
			this->b_19->Location = System::Drawing::Point(816, 486);
			this->b_19->Name = L"b_19";
			this->b_19->Size = System::Drawing::Size(38, 23);
			this->b_19->TabIndex = 40;
			this->b_19->Text = L"19";
			this->b_19->UseVisualStyleBackColor = true;
			this->b_19->Click += gcnew System::EventHandler(this, &Mapa::b_19_Click);
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
			// b_14
			// 
			this->b_14->Location = System::Drawing::Point(696, 342);
			this->b_14->Name = L"b_14";
			this->b_14->Size = System::Drawing::Size(36, 23);
			this->b_14->TabIndex = 42;
			this->b_14->Text = L"14";
			this->b_14->UseVisualStyleBackColor = true;
			this->b_14->Click += gcnew System::EventHandler(this, &Mapa::b_14_Click);
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
			// b_8
			// 
			this->b_8->Location = System::Drawing::Point(550, 293);
			this->b_8->Name = L"b_8";
			this->b_8->Size = System::Drawing::Size(23, 23);
			this->b_8->TabIndex = 44;
			this->b_8->Text = L"8";
			this->b_8->UseVisualStyleBackColor = true;
			this->b_8->Click += gcnew System::EventHandler(this, &Mapa::b_8_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(592, 37);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(23, 23);
			this->button23->TabIndex = 45;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// gb_condicion
			// 
			this->gb_condicion->Controls->Add(this->enun_ubicacion);
			this->gb_condicion->Controls->Add(this->b_confirmar);
			this->gb_condicion->Controls->Add(this->checkBox5);
			this->gb_condicion->Controls->Add(this->checkBox4);
			this->gb_condicion->Controls->Add(this->checkBox3);
			this->gb_condicion->Controls->Add(this->checkBox2);
			this->gb_condicion->Controls->Add(this->checkBox1);
			this->gb_condicion->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gb_condicion->Location = System::Drawing::Point(15, 235);
			this->gb_condicion->Name = L"gb_condicion";
			this->gb_condicion->Size = System::Drawing::Size(200, 232);
			this->gb_condicion->TabIndex = 46;
			this->gb_condicion->TabStop = false;
			this->gb_condicion->Text = L"Condicion de la ruta";
			this->gb_condicion->Visible = false;
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
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox5->Location = System::Drawing::Point(58, 149);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(80, 17);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"checkBox5";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox4->Location = System::Drawing::Point(58, 126);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(80, 17);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"checkBox4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox3->Location = System::Drawing::Point(58, 101);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(80, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox2->Location = System::Drawing::Point(58, 78);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(80, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox1->Location = System::Drawing::Point(58, 55);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// Mapa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1326, 609);
			this->Controls->Add(this->gb_condicion);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->b_8);
			this->Controls->Add(this->b_17);
			this->Controls->Add(this->b_14);
			this->Controls->Add(this->b_4);
			this->Controls->Add(this->b_19);
			this->Controls->Add(this->b_16);
			this->Controls->Add(this->b_18);
			this->Controls->Add(this->b_15);
			this->Controls->Add(this->b_6);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->b_12);
			this->Controls->Add(this->b_13);
			this->Controls->Add(this->b_10);
			this->Controls->Add(this->b_9);
			this->Controls->Add(this->b_3);
			this->Controls->Add(this->b_7);
			this->Controls->Add(this->b_11);
			this->Controls->Add(this->b_5);
			this->Controls->Add(this->b_1);
			this->Controls->Add(this->b_2);
			this->Controls->Add(this->button17);
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
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

	if (comboBox_Origen->SelectedIndex != comboBox_Origen->SelectedIndex) {
		// si on diferentes llama al algoritmo 
	}
	else {
		//de locontrario no hace nada... 
	}

}

	
private: System::Void comboBox_Origen_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	
	String^ opcion = comboBox_Origen->Text;

	if (opcion == "Heredia") {
		b_11->BackColor = System::Drawing::Color::Yellow;
	}

	else if (opcion == "San Jose") {
		b_9->BackColor = System::Drawing::Color::Yellow;
	}

	else if (opcion == "Alajuela") {
		b_6->BackColor = System::Drawing::Color::Yellow;
	}

	else if (opcion == "Cartago") {
		b_13->BackColor = System::Drawing::Color::Yellow;
	}

	else if (opcion == "Puntarenas") {
		b_7->BackColor = System::Drawing::Color::Yellow;
	}

	else if (opcion == "Limon") {
		b_17->BackColor = System::Drawing::Color::Yellow;
	}
	
	else if (opcion == "Guanacaste") {
		b_4->BackColor = System::Drawing::Color::Yellow;
	}
}
private: System::Void comboBox_Destino_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {



	String^ opcion = comboBox_Destino->Text;

	if (opcion == "Heredia") {
		b_11->BackColor = System::Drawing::Color::Red;
	}

	else if (opcion == "San Jose") {
		b_9->BackColor = System::Drawing::Color::Red;
	}

	else if (opcion == "Alajuela") {
		b_6->BackColor = System::Drawing::Color::Red;
	}

	else if (opcion == "Cartago") {
		b_13->BackColor = System::Drawing::Color::Red;
	}

	else if (opcion == "Puntarenas") {
		b_7->BackColor = System::Drawing::Color::Red;
	}

	else if (opcion == "Limon") {
		b_17->BackColor = System::Drawing::Color::Red;
	}

	else if (opcion == "Guanacaste") {
		b_4->BackColor = System::Drawing::Color::Red;
	}

}
private: System::Void b_1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	b_1->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;
	
}
private: System::Void b_2_Click(System::Object^ sender, System::EventArgs^ e) {

	b_2->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;


}
private: System::Void b_3_Click(System::Object^ sender, System::EventArgs^ e) {

	b_3->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_4_Click(System::Object^ sender, System::EventArgs^ e) {

	b_4->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_5_Click(System::Object^ sender, System::EventArgs^ e) {

	b_5->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_6_Click(System::Object^ sender, System::EventArgs^ e) {

	b_6->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_7_Click(System::Object^ sender, System::EventArgs^ e) {

	b_7->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_8_Click(System::Object^ sender, System::EventArgs^ e) {

	b_8->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_9_Click(System::Object^ sender, System::EventArgs^ e) {

	b_9->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_10_Click(System::Object^ sender, System::EventArgs^ e) {

	b_10->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_11_Click(System::Object^ sender, System::EventArgs^ e) {

	b_11->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_12_Click(System::Object^ sender, System::EventArgs^ e) {

	b_12->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_13_Click(System::Object^ sender, System::EventArgs^ e) {

	b_13->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_14_Click(System::Object^ sender, System::EventArgs^ e) {

	b_14->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_15_Click(System::Object^ sender, System::EventArgs^ e) {

	b_15->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_16_Click(System::Object^ sender, System::EventArgs^ e) {

	b_16->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_17_Click(System::Object^ sender, System::EventArgs^ e) {

	b_17->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_18_Click(System::Object^ sender, System::EventArgs^ e) {

	b_18->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}
private: System::Void b_19_Click(System::Object^ sender, System::EventArgs^ e) {

	b_19->BackColor = System::Drawing::Color::Green;
	gb_condicion->Visible = true;

}

private: System::Void b_confirmar_Click(System::Object^ sender, System::EventArgs^ e) {

	//antes de borrar los valores de los check box guardarlos de alguna forma (puede ser con valores booleanos en un vector)
	//esto con el proposito de calcular adecuadamente el peso de la ruta.


	gb_condicion->Visible = false;

	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;

}
};
}
