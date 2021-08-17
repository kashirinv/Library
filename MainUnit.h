//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TPageControl *PageControl1;
    TTabSheet *books_str;
    TTabSheet *chitateli_str;
    TListView *books;
    TMainMenu *MainMenu1;
    TMenuItem *N1;
    TMenuItem *N2;
    TGroupBox *GroupBox1;
    TEdit *Edit1;
    TButton *Button1;
    TButton *Button2;
    TTabSheet *book_str;
    TMenuItem *N3;
    TMenuItem *N4;
    TLabel *Label1;
    TEdit *Edit2;
    TLabel *Label2;
    TEdit *Edit3;
    TLabel *Label3;
    TEdit *Edit4;
    TLabel *Label4;
    TEdit *Edit5;
    TLabel *Label5;
    TEdit *Edit6;
    TLabel *Label6;
    TEdit *Edit7;
    TLabel *Label7;
    TEdit *Edit8;
    TLabel *Label8;
    TEdit *Edit9;
    TLabel *Label9;
    TMemo *Memo1;
    TButton *Button3;
    TButton *Button4;
    TMenuItem *N5;
    TMenuItem *N6;
    TListView *chitateli;
    TTabSheet *chitatel_str;
    TLabel *Label10;
    TEdit *Edit10;
    TLabel *Label11;
    TEdit *Edit11;
    TLabel *Label12;
    TEdit *Edit12;
    TLabel *Label13;
    TEdit *Edit13;
    TLabel *Label14;
    TEdit *Edit14;
    TLabel *Label15;
    TEdit *Edit15;
    TLabel *Label16;
    TEdit *Edit16;
    TLabel *Label17;
    TEdit *Edit17;
    TLabel *Label18;
    TEdit *Edit18;
    TLabel *Label19;
    TLabel *Label20;
    TEdit *Edit20;
    TButton *Button5;
    TButton *Button6;
    TEdit *Edit19;
    TMenuItem *N7;
    TMenuItem *N8;
    TMenuItem *N9;
    TMenuItem *N10;
    TGroupBox *GroupBox2;
    TEdit *Edit21;
    TButton *Button7;
    TButton *Button8;
    TTabSheet *dolz_str;
    TListView *vidano;
    TMenuItem *N11;
    TMenuItem *N12;
    TMenuItem *N13;
    TMenuItem *N14;
    void __fastcall N2Click(TObject *Sender);
    void __fastcall books_strShow(TObject *Sender);
    void __fastcall booksDblClick(TObject *Sender);
    void __fastcall book_strShow(TObject *Sender);
    void __fastcall booksClick(TObject *Sender);
    void __fastcall Button4Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall N5Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall chitateli_strShow(TObject *Sender);
    void __fastcall chitateliClick(TObject *Sender);
    void __fastcall chitateliDblClick(TObject *Sender);
    void __fastcall chitatel_strShow(TObject *Sender);
    void __fastcall Button6Click(TObject *Sender);
    void __fastcall Button5Click(TObject *Sender);
    void __fastcall N8Click(TObject *Sender);
    void __fastcall N9Click(TObject *Sender);
    void __fastcall N10Click(TObject *Sender);
    void __fastcall dolz_strShow(TObject *Sender);
    void __fastcall vidanoClick(TObject *Sender);
    void __fastcall N12Click(TObject *Sender);
    void __fastcall N13Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button8Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button7Click(TObject *Sender);
    void __fastcall N14Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
