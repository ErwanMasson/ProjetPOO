#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(System::String^ mode)
		{
			InitializeComponent();
			this->lblTitle->Text = "Gestion " + mode;
		}
	private: System::Windows::Forms::TextBox^ supprTextbox;
	private: System::Windows::Forms::Label^ lblSuppr;
	private: System::Windows::Forms::TextBox^ modifTextbox;

		   int IDCounter = 0;

	protected:
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::Button^ btnSuppr;
	private: System::Windows::Forms::Button^ btnCreer;
	private: System::Windows::Forms::TextBox^ newName;
	private: System::Windows::Forms::TextBox^ newSurname;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ surnameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameColumn;

	private: System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			   this->idColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->surnameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->nameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->lblTitle = (gcnew System::Windows::Forms::Label());
			   this->btnModifier = (gcnew System::Windows::Forms::Button());
			   this->btnSuppr = (gcnew System::Windows::Forms::Button());
			   this->btnCreer = (gcnew System::Windows::Forms::Button());
			   this->newName = (gcnew System::Windows::Forms::TextBox());
			   this->newSurname = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->supprTextbox = (gcnew System::Windows::Forms::TextBox());
			   this->lblSuppr = (gcnew System::Windows::Forms::Label());
			   this->modifTextbox = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView
			   // 
			   this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->idColumn,
					   this->surnameColumn, this->nameColumn
			   });
			   this->dataGridView->Location = System::Drawing::Point(12, 37);
			   this->dataGridView->MultiSelect = false;
			   this->dataGridView->Name = L"dataGridView";
			   this->dataGridView->ReadOnly = true;
			   this->dataGridView->Size = System::Drawing::Size(417, 197);
			   this->dataGridView->TabIndex = 0;
			   // 
			   // idColumn
			   // 
			   this->idColumn->HeaderText = L"ID";
			   this->idColumn->MaxInputLength = 10;
			   this->idColumn->Name = L"idColumn";
			   this->idColumn->ReadOnly = true;
			   // 
			   // surnameColumn
			   // 
			   this->surnameColumn->HeaderText = L"Nom";
			   this->surnameColumn->Name = L"surnameColumn";
			   this->surnameColumn->ReadOnly = true;
			   // 
			   // nameColumn
			   // 
			   this->nameColumn->HeaderText = L"Prénom";
			   this->nameColumn->Name = L"nameColumn";
			   this->nameColumn->ReadOnly = true;
			   // 
			   // lblTitle
			   // 
			   this->lblTitle->AutoSize = true;
			   this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblTitle->Location = System::Drawing::Point(125, 9);
			   this->lblTitle->Name = L"lblTitle";
			   this->lblTitle->Size = System::Drawing::Size(187, 25);
			   this->lblTitle->TabIndex = 1;
			   this->lblTitle->Text = L"Gestion personnel";
			   // 
			   // btnModifier
			   // 
			   this->btnModifier->Location = System::Drawing::Point(558, 126);
			   this->btnModifier->Name = L"btnModifier";
			   this->btnModifier->Size = System::Drawing::Size(75, 38);
			   this->btnModifier->TabIndex = 3;
			   this->btnModifier->Text = L"Modifier selection";
			   this->btnModifier->UseVisualStyleBackColor = true;
			   this->btnModifier->Click += gcnew System::EventHandler(this, &Form2::btnModifier_Click);
			   // 
			   // btnSuppr
			   // 
			   this->btnSuppr->Location = System::Drawing::Point(558, 81);
			   this->btnSuppr->Name = L"btnSuppr";
			   this->btnSuppr->Size = System::Drawing::Size(75, 23);
			   this->btnSuppr->TabIndex = 4;
			   this->btnSuppr->Text = L"Supprimer";
			   this->btnSuppr->UseVisualStyleBackColor = true;
			   this->btnSuppr->Click += gcnew System::EventHandler(this, &Form2::btnSuppr_Click);
			   // 
			   // btnCreer
			   // 
			   this->btnCreer->Location = System::Drawing::Point(283, 264);
			   this->btnCreer->Name = L"btnCreer";
			   this->btnCreer->Size = System::Drawing::Size(75, 23);
			   this->btnCreer->TabIndex = 5;
			   this->btnCreer->Text = L"Nouveau";
			   this->btnCreer->UseVisualStyleBackColor = true;
			   this->btnCreer->Click += gcnew System::EventHandler(this, &Form2::btnCreer_Click);
			   // 
			   // newName
			   // 
			   this->newName->Location = System::Drawing::Point(71, 266);
			   this->newName->Name = L"newName";
			   this->newName->Size = System::Drawing::Size(100, 20);
			   this->newName->TabIndex = 6;
			   // 
			   // newSurname
			   // 
			   this->newSurname->Location = System::Drawing::Point(177, 266);
			   this->newSurname->Name = L"newSurname";
			   this->newSurname->Size = System::Drawing::Size(100, 20);
			   this->newSurname->TabIndex = 7;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(97, 250);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(43, 13);
			   this->label1->TabIndex = 8;
			   this->label1->Text = L"Prénom";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(213, 250);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(29, 13);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"Nom";
			   // 
			   // supprTextbox
			   // 
			   this->supprTextbox->Location = System::Drawing::Point(516, 83);
			   this->supprTextbox->Name = L"supprTextbox";
			   this->supprTextbox->Size = System::Drawing::Size(36, 20);
			   this->supprTextbox->TabIndex = 10;
			   // 
			   // lblSuppr
			   // 
			   this->lblSuppr->AutoSize = true;
			   this->lblSuppr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblSuppr->Location = System::Drawing::Point(453, 84);
			   this->lblSuppr->Name = L"lblSuppr";
			   this->lblSuppr->Size = System::Drawing::Size(57, 16);
			   this->lblSuppr->TabIndex = 11;
			   this->lblSuppr->Text = L"Index N°";
			   // 
			   // modifTextbox
			   // 
			   this->modifTextbox->Location = System::Drawing::Point(456, 136);
			   this->modifTextbox->Name = L"modifTextbox";
			   this->modifTextbox->Size = System::Drawing::Size(96, 20);
			   this->modifTextbox->TabIndex = 12;
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(645, 310);
			   this->Controls->Add(this->modifTextbox);
			   this->Controls->Add(this->lblSuppr);
			   this->Controls->Add(this->supprTextbox);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->newSurname);
			   this->Controls->Add(this->newName);
			   this->Controls->Add(this->btnCreer);
			   this->Controls->Add(this->btnSuppr);
			   this->Controls->Add(this->btnModifier);
			   this->Controls->Add(this->lblTitle);
			   this->Controls->Add(this->dataGridView);
			   this->Name = L"Form1";
			   this->Text = L"Gestion";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void btnCreer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView->Rows->Add(IDCounter, this->newName->Text, this->newSurname->Text);
		IDCounter++;
		this->newName->Text = ""; this->newSurname->Text = "";
	}

	private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//this->dataGridView->CurrentCell = this->modifTextbox->Text;         //MARCHE PAS A MODIF
	}

	private: System::Void btnSuppr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int index = int::Parse(this->supprTextbox->Text);
		this->dataGridView->Rows->RemoveAt(index);
	}
	};
}
