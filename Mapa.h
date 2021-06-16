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

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button17;

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
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(25, 367);
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
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Bloqueda", L"Lastre", L"Autopista", L"Congestionada",
					L"Peaje"
			});
			this->comboBox3->Location = System::Drawing::Point(80, 267);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 23;
			this->comboBox3->Text = L"--Condicion--";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(126, 367);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 24;
			this->button17->Text = L"Aceptar";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Mapa::button17_Click);
			// 
			// Mapa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1326, 609);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox_Destino);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox_Origen);
			this->Controls->Add(this->button16);
			this->Name = L"Mapa";
			this->Text = L"Mapa";
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
};
}
