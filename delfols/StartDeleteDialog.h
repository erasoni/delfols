#pragma once

namespace delfols {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// StartDeleteDialog の概要
	/// </summary>
	public ref class StartDeleteDialog : public System::Windows::Forms::Form
	{
	public:
		StartDeleteDialog(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~StartDeleteDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  chkDryrun;
	private: System::Windows::Forms::CheckBox^  chkShellDelete;
	private: System::Windows::Forms::Button^  btnOK;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::CheckBox^  chkCloseOnFinish;
	protected:

	protected: 


	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->chkDryrun = (gcnew System::Windows::Forms::CheckBox());
			this->chkShellDelete = (gcnew System::Windows::Forms::CheckBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->chkCloseOnFinish = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// chkDryrun
			// 
			this->chkDryrun->AutoSize = true;
			this->chkDryrun->Location = System::Drawing::Point(12, 61);
			this->chkDryrun->Name = L"chkDryrun";
			this->chkDryrun->Size = System::Drawing::Size(66, 19);
			this->chkDryrun->TabIndex = 1;
			this->chkDryrun->Text = L"&Dryrun";
			this->chkDryrun->UseVisualStyleBackColor = true;
			// 
			// chkShellDelete
			// 
			this->chkShellDelete->AutoSize = true;
			this->chkShellDelete->Location = System::Drawing::Point(12, 11);
			this->chkShellDelete->Name = L"chkShellDelete";
			this->chkShellDelete->Size = System::Drawing::Size(94, 19);
			this->chkShellDelete->TabIndex = 0;
			this->chkShellDelete->Text = L"&Shell delete";
			this->chkShellDelete->UseVisualStyleBackColor = true;
			// 
			// btnOK
			// 
			this->btnOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btnOK->Location = System::Drawing::Point(12, 117);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(215, 23);
			this->btnOK->TabIndex = 2;
			this->btnOK->Text = L"&Delete Files on the list";
			this->btnOK->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(233, 117);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"&Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// chkCloseOnFinish
			// 
			this->chkCloseOnFinish->AutoSize = true;
			this->chkCloseOnFinish->Location = System::Drawing::Point(12, 36);
			this->chkCloseOnFinish->Name = L"chkCloseOnFinish";
			this->chkCloseOnFinish->Size = System::Drawing::Size(112, 19);
			this->chkCloseOnFinish->TabIndex = 4;
			this->chkCloseOnFinish->Text = L"&Close on Finish";
			this->chkCloseOnFinish->UseVisualStyleBackColor = true;
			// 
			// StartDeleteDialog
			// 
			this->AcceptButton = this->btnOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(320, 152);
			this->Controls->Add(this->chkCloseOnFinish);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->chkShellDelete);
			this->Controls->Add(this->chkDryrun);
			this->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"StartDeleteDialog";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Delete Files";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:
			property bool IsDryrun
			{
				bool get()
				{
					return chkDryrun->Checked;
				}
			}
			property bool IsShellDelete
			{
				bool get()
				{
					return chkShellDelete->Checked;
				}
			}
			property bool IsCloseOnFinish
			{
				bool get()
				{
					return chkCloseOnFinish->Checked;
				}
			}
	};
}
