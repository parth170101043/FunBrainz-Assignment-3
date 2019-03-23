#pragma once
#include "Image_Quiz_Display.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
//#include "Form1.h"


using namespace std;


namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Image_Quiz
	/// </summary>
	public ref class Image_Quiz : public System::Windows::Forms::Form
	{
	public:
		Image_Quiz(void)
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
		~Image_Quiz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Animal;
	private: System::Windows::Forms::Button^  btn_Back_To_Main_From_Image_Quiz;
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
			this->btn_Animal = (gcnew System::Windows::Forms::Button());
			this->btn_Back_To_Main_From_Image_Quiz = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_Animal
			// 
			this->btn_Animal->Location = System::Drawing::Point(92, 146);
			this->btn_Animal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_Animal->Name = L"btn_Animal";
			this->btn_Animal->Size = System::Drawing::Size(140, 44);
			this->btn_Animal->TabIndex = 0;
			this->btn_Animal->Text = L"ANIMALS";
			this->btn_Animal->UseVisualStyleBackColor = true;
			this->btn_Animal->Click += gcnew System::EventHandler(this, &Image_Quiz::btn_Animal_Click);
			// 
			// btn_Back_To_Main_From_Image_Quiz
			// 
			this->btn_Back_To_Main_From_Image_Quiz->Location = System::Drawing::Point(467, 81);
			this->btn_Back_To_Main_From_Image_Quiz->Name = L"btn_Back_To_Main_From_Image_Quiz";
			this->btn_Back_To_Main_From_Image_Quiz->Size = System::Drawing::Size(75, 23);
			this->btn_Back_To_Main_From_Image_Quiz->TabIndex = 1;
			this->btn_Back_To_Main_From_Image_Quiz->Text = L"BACK";
			this->btn_Back_To_Main_From_Image_Quiz->UseVisualStyleBackColor = true;
			this->btn_Back_To_Main_From_Image_Quiz->Click += gcnew System::EventHandler(this, &Image_Quiz::btn_Back_To_Main_From_Image_Quiz_Click);
			// 
			// Image_Quiz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 597);
			this->Controls->Add(this->btn_Back_To_Main_From_Image_Quiz);
			this->Controls->Add(this->btn_Animal);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Image_Quiz";
			this->Text = L"Image_Quiz";
			this->Load += gcnew System::EventHandler(this, &Image_Quiz::Image_Quiz_Load_1);
			this->ResumeLayout(false);

		}
#pragma endregion
		/*void read_directory(std::string& name)
		{
			std::string pattern(name);
			pattern.append("\\*");
			WIN32_FIND_DATA data;
			HANDLE hFind;
			LPCWSTR var = LPCWSTR(pattern.c_str());
			String ^str3 = gcnew String(pattern.c_str());
			MessageBox::Show(str3);


			if ((hFind = FindFirstFile(var, &data)) != INVALID_HANDLE_VALUE) {
				do {
					wstring ws(data.cFileName);
					string str(ws.begin(), ws.end());
					String ^str2 = gcnew String(str.c_str());
					MessageBox::Show(str2);

				} while (FindNextFile(hFind, &data) != 0);
				FindClose(hFind);
			}
		}*/
	private: System::Void btn_Animal_Click(System::Object^  sender, System::EventArgs^  e) {
				 Image_Quiz::Hide();
				 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display;
				 form->ShowDialog();
	}
	private: System::Void Image_Quiz_Load_1(System::Object^  sender, System::EventArgs^  e) {
				 /*String ^ str = "C:\\Users\\Aryan Agrawal\\Desktop\\ChildEudcation\\FunBrainz-Assignment-3\\FunBrainz\\FunBrainz\\media";
				 read_directory()*/
			 }
	private: System::Void btn_Back_To_Main_From_Image_Quiz_Click(System::Object^  sender, System::EventArgs^  e) {
				/* Image_Quiz::Hide();
				 Form1 ^ form = gcnew Form1;
				 form->ShowDialog();*/
			 }
};

	
}
